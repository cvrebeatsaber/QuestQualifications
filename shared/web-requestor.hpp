#pragma once
#include <string>
#include <string_view>
#include "GlobalNamespace/LevelCompletionResults.hpp"
#include "GlobalNamespace/GameplayCoreSceneSetupData.hpp"
#include "manager.hpp"

namespace WebRequestor {
    std::string SubmitScore(bool& outBool, CVRE::Manager* instance, GlobalNamespace::LevelCompletionResults* results, std::string_view pin, GlobalNamespace::GameplayCoreSceneSetupData* map);
}
