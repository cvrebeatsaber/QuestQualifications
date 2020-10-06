#include "modifiers.hpp"
#include <string>
#include "beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "include/libcurl/include/curl.h"
#include "include/libcurl/include/easy.h"
#include "beatsaber-hook/shared/config/rapidjson-utils.hpp"
#include "logging.hpp"
#include "webutil.hpp"

std::vector<ModifierData> competitionModifiers;
std::unordered_set<std::string> competitionModifierNames;

#define url "https://cvrescores.herokuapp.com/api/modifiers/5d129dd9000a3db1e8cecc2a"

void Modifiers::Init() {
    std::string httpData;
    auto httpCode = WebUtil::Get(url, httpData);
    if (httpCode == 200) {
        rapidjson::Document d;
        d.Parse(httpData.c_str());
        auto itr = d.FindMember("modifiers");
        if (itr != d.MemberEnd()) {
            auto arr = itr->value.GetArray();
            competitionModifiers.reserve(arr.Size());
            competitionModifierNames.reserve(arr.Size());
            for (int i = 0; i < arr.Size(); i++) {
                auto& data = competitionModifiers.emplace_back();
                auto nameItr = arr[i].FindMember("name");
                if (nameItr != arr[i].MemberEnd() && nameItr->value.IsString()) {
                    data.name = nameItr->value.GetString();
                }
                nameItr = arr[i].FindMember("value");
                if (nameItr != arr[i].MemberEnd() && nameItr->value.IsBool()) {
                    data.val = nameItr->value.GetBool();
                }
                competitionModifierNames.emplace(data.name);
                getLogger().debug("Adding modifier: %s!", data.name.c_str());
            }
        }
        getLogger().debug("All loggers complete!");
    } else {
        getLogger().critical("Could not download modifiers from: %s", url);
    }
}
std::vector<ModifierData>& Modifiers::get_competitionModifiers() {
    return competitionModifiers;
}
std::unordered_set<std::string>& Modifiers::get_competitionModifierNames() {
    return competitionModifierNames;
}