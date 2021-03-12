#include "submission-packet.hpp"
#include "logging.hpp"
#include "GlobalNamespace/IBeatmapLevel.hpp"
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
#include "GlobalNamespace/RankModel.hpp"
#include "GlobalNamespace/RankModel_Rank.hpp"
#include "include/cryptopp/sha.h"
#include "include/cryptopp/hex.h"
#include <sstream>
#define RAPIDJSON_HAS_STDSTRING 1
#include "beatsaber-hook/shared/config/rapidjson-utils.hpp"

#include "main.hpp"
#include "util.hpp"

#define GAME_VERSION "1.13.2"

SubmissionPacket::SubmissionPacket() {
    version = GAME_VERSION;
    hash = Hash();
}

SubmissionPacket::SubmissionPacket(GlobalNamespace::LevelCompletionResults* results, std::string_view pin, GlobalNamespace::GameplayCoreSceneSetupData* data) {
    auto* level = CRASH_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IPreviewBeatmapLevel*>(data->difficultyBeatmap, "get_level"));
    auto* levelID = CRASH_UNLESS(il2cpp_utils::RunMethod<Il2CppString*>(level, "get_levelID"));
    auto* songName = CRASH_UNLESS(il2cpp_utils::RunMethod<Il2CppString*>(level, "get_songName"));
    getLogger().debug("SubmissionPacket Level with name: %s", to_utf8(csstrtostr(songName)).c_str());
    getLogger().debug("SubmissionPacket with score: %u and rank: %s", results->rawScore, Util::RankStr(results->rank).c_str());

    this->pin.assign(pin.data());
    // Cheat for now
    characteristic = "Standard";
    score = results->modifiedScore;
    rank = Util::RankStr(results->rank);
    difficulty = data->difficultyBeatmap->get_difficultyRank();
    version = GAME_VERSION;
    levelId = to_utf8(csstrtostr(levelID));
    Util::PopulateJsonProperties(mapInfo, data->difficultyBeatmap);
    Util::PopulateJsonProperties(stats, results);
    hash = Hash();
}

std::string SubmissionPacket::Hash() {
    CryptoPP::byte digest[CryptoPP::SHA256::DIGESTSIZE];
    // if accuracy is 0.0, or 0.00, or 0.000, or 0.0000
    // we need to write it as 0 in the hash
    auto message = *Util::ReadSecret() + pin + std::to_string(score) + string_format("%.4f", accuracy) + std::to_string(difficulty) + version + levelId;
    CryptoPP::SHA256().CalculateDigest(digest, reinterpret_cast<const CryptoPP::byte*>(&message[0]), message.size());

    std::string ret;
    getLogger().debug("Hashing: %s", message.c_str());
    CryptoPP::HexEncoder encoder;
    encoder.Attach(new CryptoPP::StringSink(ret));
    encoder.Put(digest, sizeof(digest));
    encoder.MessageEnd();

    return ret;
}

void Saturate(std::unordered_map<std::string, std::string>& map, rapidjson::Value& obj, rapidjson::MemoryPoolAllocator<>& alloc) {
    obj.MemberReserve(map.size(), alloc);
    for (auto itr : map) {
        obj.AddMember(rapidjson::Value(itr.first, alloc).Move(), rapidjson::Value(itr.second, alloc).Move(), alloc);
    }
}

template<typename Stream>
class CustomWriter : public rapidjson::PrettyWriter<Stream> {
    public:
    CustomWriter(rapidjson::StringBuffer& b) : rapidjson::PrettyWriter<Stream>(b), b_(&b) {}
    bool Double(double d) {
        char buffer[25] = {'\0'};
        auto count = snprintf(buffer, sizeof(buffer), "%.4f", d);
        this->PrettyPrefix(rapidjson::kNumberType);
        PutReserve(*b_, static_cast<size_t>(count));
        int i = 0;
        for (char* p = buffer; i < count; ++i) {
            PutUnsafe(*b_, static_cast<typename Stream::Ch>(*p));
            ++p;
        }
        return true;
    }
    private:
    rapidjson::StringBuffer* b_;
};

std::string SubmissionPacket::ToJson() {
    rapidjson::Document d;
    // Make it a rapidjson object
    d.Parse("{}");
    auto& alloc = d.GetAllocator();
    d.AddMember("pin", rapidjson::GenericStringRef<char>(pin.c_str()), alloc);
    d.AddMember("score", score, alloc);
    d.AddMember("accuracy", accuracy, alloc);
    d.AddMember("rank", rapidjson::GenericStringRef<char>(rank.c_str()), alloc);
    d.AddMember("characteristic", rapidjson::GenericStringRef<char>(characteristic.c_str()), alloc);
    d.AddMember("difficulty", difficulty, alloc);
    d.AddMember("version", rapidjson::GenericStringRef<char>(version.c_str()), alloc);
    d.AddMember("pluginVersion", VERSION, alloc);
    d.AddMember("levelId", rapidjson::GenericStringRef<char>(levelId.c_str()), alloc);
    rapidjson::Value val(rapidjson::kObjectType);
    Saturate(mapInfo, val, alloc);
    d.AddMember("mapInfo", val, alloc);
    rapidjson::Value val2(rapidjson::kObjectType);
    Saturate(stats, val2, alloc);
    d.AddMember("stats", val2, alloc);
    d.AddMember("hash", rapidjson::GenericStringRef<char>(hash.c_str()), alloc);
    rapidjson::StringBuffer buf;
    CustomWriter<rapidjson::StringBuffer> writer(buf);
    if (!d.Accept(writer)) {
        getLogger().critical("Serialization of packet failed!");
    }
    getLogger().debug("Packet serialized: %s", buf.GetString());
    return buf.GetString();
}

void SubmissionPacket::Serialize() {
    auto duration = std::chrono::system_clock::now().time_since_epoch();
    timestamp = std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
    if (!direxists("/sdcard/cvre_packets/")) {
        mkpath("/sdcard/cvre_packets/");
    }
    writefile(string_format("/sdcard/cvre_packets/packet_%ul.tmp", timestamp), ToJson());
}