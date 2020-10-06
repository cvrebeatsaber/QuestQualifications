#pragma once
#include "GlobalNamespace/LevelCompletionResults.hpp"
#include <vector>
#include <unordered_set>

class ModifierData {
    public:
    std::string name;
    bool val;
};

namespace Modifiers {
    void Init();
    std::vector<ModifierData>& get_competitionModifiers();
    std::unordered_set<std::string>& get_competitionModifierNames();
};