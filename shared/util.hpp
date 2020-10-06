#pragma once
#include <optional>
#include <string>
#include <unordered_map>
#include "GlobalNamespace/LevelCompletionResults.hpp"
#include "GlobalNamespace/IBeatmapLevel.hpp"
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
#include "GlobalNamespace/RankModel_Rank.hpp"

namespace Util {
    std::optional<std::string> ReadSecret();
    std::string RankStr(GlobalNamespace::RankModel::Rank rank);
    std::string LevelEndActionStr(GlobalNamespace::LevelCompletionResults::LevelEndAction action);
    std::string LevelEndStateType(GlobalNamespace::LevelCompletionResults::LevelEndStateType type);
    void PopulateJsonProperties(std::unordered_map<std::string, std::string>& dict, GlobalNamespace::IDifficultyBeatmap* o);
    void PopulateJsonProperties(std::unordered_map<std::string, std::string>& dict, GlobalNamespace::IBeatmapLevel* o);
    void PopulateJsonProperties(std::unordered_map<std::string, std::string>& dict, GlobalNamespace::LevelCompletionResults* o);
}
