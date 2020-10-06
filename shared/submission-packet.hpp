#pragma once
#include <string>
#include <string_view>
#include <unordered_map>
#include "GlobalNamespace/LevelCompletionResults.hpp"
#include "GlobalNamespace/GameplayCoreSceneSetupData.hpp"

class SubmissionPacket {
    std::string pin = "";
    int score = 0;
    double accuracy = 0;
    std::string rank = "";
    int difficulty = 0;
    std::string characteristic = "Standard";
    std::string version = "";
    std::string levelId = "";
    std::unordered_map<std::string, std::string> mapInfo;
    std::unordered_map<std::string, std::string> stats;
    std::string hash = "";

    public:
    SubmissionPacket();
    SubmissionPacket(GlobalNamespace::LevelCompletionResults* results, std::string_view pin, GlobalNamespace::GameplayCoreSceneSetupData* data);
    void Serialize();
    std::string ToJson();
    std::string Hash();
};
