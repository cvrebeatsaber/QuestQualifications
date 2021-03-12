#include "util.hpp"
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include <fstream>
#include "beatsaber-hook/shared/config/config-utils.hpp"
#include "main.hpp"

std::optional<std::string> Util::ReadSecret() {
    // TODO: Make this read a file
    return "A$)pt(w@#*gYHADRIPOF8N VY7B";
}

std::optional<std::string> Util::ReadUID() {
    std::ifstream stream(getDataDir(getInfo()) + "secret.txt");
    if (!stream.is_open()) {
        return std::nullopt;
    }
    std::string uid;
    stream >> uid;
    return uid;
}

std::string Util::GetPacketDir() {
    auto path = getDataDir(getInfo()) + "cvre_packets/";
    
    if (!direxists(path)) {
        mkpath(path);
    }
    return path;
}

std::string Util::RankStr(GlobalNamespace::RankModel::Rank rank) {
    switch (rank)
    {
    case GlobalNamespace::RankModel::Rank::A:
        return "A";
    case GlobalNamespace::RankModel::Rank::B:
        return "B";
    case GlobalNamespace::RankModel::Rank::C:
        return "C";
    case GlobalNamespace::RankModel::Rank::D:
        return "D";
    case GlobalNamespace::RankModel::Rank::E:
        return "E";
    case GlobalNamespace::RankModel::Rank::S:
        return "S";
    case GlobalNamespace::RankModel::Rank::SS:
        return "SS";
    case GlobalNamespace::RankModel::Rank::SSS:
        return "SSS";
    default:
        return "UNKNOWN";
    }
}

std::string Util::LevelEndActionStr(GlobalNamespace::LevelCompletionResults::LevelEndAction action) {
    switch (action)
    {
    case GlobalNamespace::LevelCompletionResults::LevelEndAction::Quit:
        return "Quit";
    case GlobalNamespace::LevelCompletionResults::LevelEndAction::LostConnection:
        return "LostConnection";
    case GlobalNamespace::LevelCompletionResults::LevelEndAction::Restart:
        return "Restart";
    case GlobalNamespace::LevelCompletionResults::LevelEndAction::MultiplayerInactive:
        return "MultiplayerInactive";
    case GlobalNamespace::LevelCompletionResults::LevelEndAction::None:
    default:
        return "None";
    }
}

std::string Util::LevelEndStateType(GlobalNamespace::LevelCompletionResults::LevelEndStateType type) {
    switch (type)
    {
    case GlobalNamespace::LevelCompletionResults::LevelEndStateType::Cleared:
        return "Cleared";
    case GlobalNamespace::LevelCompletionResults::LevelEndStateType::Failed:
        return "Failed";
    case GlobalNamespace::LevelCompletionResults::LevelEndStateType::None:
    default:
        return "None";
    }
}

void Util::PopulateJsonProperties(std::unordered_map<std::string, std::string>& dict, GlobalNamespace::IDifficultyBeatmap* o) {
    dict.insert({"noteJumpMovementSpeed", std::to_string(o->get_noteJumpMovementSpeed())});
    dict.insert({"noteJumpStartBeatOffset", std::to_string(o->get_noteJumpStartBeatOffset())});
    dict.insert({"difficulty", std::to_string(o->get_difficulty())});
    dict.insert({"difficultyRank", std::to_string(o->get_difficultyRank())});
}

void Util::PopulateJsonProperties(std::unordered_map<std::string, std::string>& dict, GlobalNamespace::LevelCompletionResults* o) {
    dict.insert({"averageCutScore", std::to_string(o->averageCutScore)});
    dict.insert({"averageDirDeviation", std::to_string(o->averageDirDeviation)});
    dict.insert({"averageTimeDeviation", std::to_string(o->averageTimeDeviation)});
    dict.insert({"badCutsCount", std::to_string(o->badCutsCount)});
    dict.insert({"endSongTime", std::to_string(o->endSongTime)});
    dict.insert({"energy", std::to_string(o->energy)});
    dict.insert({"fullCombo", std::to_string(o->fullCombo)});
    dict.insert({"goodCutsCount", std::to_string(o->goodCutsCount)});
    dict.insert({"leftHandMovementDistance", std::to_string(o->leftHandMovementDistance)});
    dict.insert({"leftSaberMovementDistance", std::to_string(o->leftSaberMovementDistance)});
    dict.insert({"levelEndAction", LevelEndActionStr(o->levelEndAction)});
    dict.insert({"levelEndStateType", LevelEndStateType(o->levelEndStateType)});
    dict.insert({"maxCombo", std::to_string(o->maxCombo)});
    dict.insert({"leftHandMovementDistance", std::to_string(o->maxCutScore)});
    dict.insert({"maxDirDeviation", std::to_string(o->maxDirDeviation)});
    dict.insert({"maxTimeDeviation", std::to_string(o->maxTimeDeviation)});
    dict.insert({"minDirDeviation", std::to_string(o->minDirDeviation)});
    dict.insert({"minTimeDeviation", std::to_string(o->minTimeDeviation)});
    dict.insert({"missedCount", std::to_string(o->missedCount)});
    dict.insert({"modifiedScore", std::to_string(o->modifiedScore)});
    dict.insert({"notGoodCount", std::to_string(o->notGoodCount)});
    dict.insert({"okCount", std::to_string(o->okCount)});
    dict.insert({"rank", RankStr(o->rank)});
    dict.insert({"rawScore", std::to_string(o->rawScore)});
    dict.insert({"rightHandMovementDistance", std::to_string(o->rightHandMovementDistance)});
    dict.insert({"rightSaberMovementDistance", std::to_string(o->rightSaberMovementDistance)});
    dict.insert({"songDuration", std::to_string(o->songDuration)});
}