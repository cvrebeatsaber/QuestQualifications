#include "beatsaber-hook/shared/utils/logging.hpp"
#include "modloader/shared/modloader.hpp"

#include "GlobalNamespace/LevelCompletionResults.hpp"
#include "GlobalNamespace/ResultsViewController.hpp"
#include "GlobalNamespace/StandardLevelScenesTransitionSetupDataSO.hpp"
#include "GlobalNamespace/GameplayCoreSceneSetupData.hpp"
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
#include "GlobalNamespace/BeatmapEnvironmentHelper.hpp"
#include "GlobalNamespace/OverrideEnvironmentSettings.hpp"
#include "GlobalNamespace/EnvironmentInfoSO.hpp"
#include "UnityEngine/GameObject.hpp"
#include "GlobalNamespace/GameplayModifiers.hpp"
#include "HMUI/FlowCoordinator.hpp"
#include "GlobalNamespace/RelativeScoreAndImmediateRankCounter.hpp"

#include "manager.hpp"
#include "modifiers.hpp"
#include "waitCoro.hpp"
#include "notification.hpp"
#include "custom-types/shared/register.hpp"
#include "questui/shared/QuestUI.hpp"
#include "main.hpp"

static ModInfo modInfo;
CVRE::Manager* globalManager = nullptr;
float accuracy = 0;

const ModInfo& getModInfo() {
    return modInfo;
}

const Logger& getLogger() {
    static const Logger logger(modInfo, LoggerOptions(false, false));
    return logger;
}

float getAccuracy() {
    return accuracy;
}

extern "C" void setup(ModInfo& info) {
    info.id = ID;
    info.version = VERSION;
    modInfo = info;
    getLogger().info("Calling setup!");
}

void yeetGlobalManager() {
    if (globalManager) {
        UnityEngine::Object::Destroy(globalManager);
        UnityEngine::Object::Destroy(globalManager->notificationBox);
        globalManager = nullptr;
    }
}

void createManager() {
    if (!globalManager) {
        auto* go = UnityEngine::GameObject::New_ctor(il2cpp_utils::createcsstr("CVRE_Manager"));
        RET_V_UNLESS(go);
        UnityEngine::Object::DontDestroyOnLoad(go);
        globalManager = reinterpret_cast<CVRE::Manager*>(go->AddComponent(typeof(CVRE::Manager*)));
        globalManager->notificationBox = reinterpret_cast<CVRE::Notification*>(go->AddComponent(typeof(CVRE::Notification*)));
    }
}

void levelFinish(GlobalNamespace::ResultsViewController* rvc, GlobalNamespace::LevelCompletionResults* results) {
    RET_V_UNLESS(rvc);
    RET_V_UNLESS(results);
    RET_V_UNLESS(globalManager);
    globalManager->wrappedResults = results;
}

MAKE_HOOK_OFFSETLESS(StandardLevelScenesTransitionSetupDataSO_Init, void, GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* self,
        GlobalNamespace::IDifficultyBeatmap* beatmap, GlobalNamespace::OverrideEnvironmentSettings* settings, GlobalNamespace::ColorScheme* overrideColorScheme,
        GlobalNamespace::GameplayModifiers* modifiers, GlobalNamespace::PlayerSpecificSettings* playerSettings,
        GlobalNamespace::PracticeSettings* practiceSettings, Il2CppString* backButtonText, bool useTestCutSounds) {
    
    StandardLevelScenesTransitionSetupDataSO_Init(self, beatmap, settings, overrideColorScheme, modifiers, playerSettings, practiceSettings, backButtonText, useTestCutSounds);
    auto* env = GlobalNamespace::BeatmapEnvironmentHelper::GetEnvironmentInfo(beatmap);
    if (settings && settings->overrideEnvironments) {
        env = settings->GetOverrideEnvironmentInfoForType(env->environmentType);
    }
    createManager();
    globalManager->gameplayCoreSceneSetupData = GlobalNamespace::GameplayCoreSceneSetupData::New_ctor(
        beatmap, modifiers, playerSettings, practiceSettings, useTestCutSounds, env
    );
}

MAKE_HOOK_OFFSETLESS(ResultsViewController_ContinueButtonPressed, void, GlobalNamespace::ResultsViewController* self) {
    // First thing we should do is call our orig
    ResultsViewController_ContinueButtonPressed(self);
    // Then we call our own continue button call
    createManager();
    globalManager->wrappedResults = self->levelCompletionResults;
    globalManager->continuePressed();
}

MAKE_HOOK_OFFSETLESS(RelativeScoreAndImmediateRankCounter_UpdateRelativeScoreAndImmediateRank, void, GlobalNamespace::RelativeScoreAndImmediateRankCounter* self,
        int score, int modifiedScore, int maxPossibleScore, int maxPossibleModifiedScore) {
    RelativeScoreAndImmediateRankCounter_UpdateRelativeScoreAndImmediateRank(self, score, modifiedScore, maxPossibleScore, maxPossibleModifiedScore);
    accuracy = self->relativeScore;
}

MAKE_HOOK_OFFSETLESS(SoloFreePlayFlowCoordinator_LevelSelectionFlowCoordinatorDidActivate, void, HMUI::FlowCoordinator* self, bool firstActivation, int activationType) {
    SoloFreePlayFlowCoordinator_LevelSelectionFlowCoordinatorDidActivate(self, firstActivation, activationType);
    createManager();
    globalManager->levelSelectionFlowCoordinator = self;
    if (firstActivation) {
        if (globalManager->notificationBox) {
            globalManager->notificationBox->DisplayNotification("Welcome to CVRE!");
        }
    }
}

extern "C" void load() {
    QuestUI::Init();
    custom_types::Register::RegisterType<CVRE::Notification>();
    custom_types::Register::RegisterType<CVRE::Manager>();
    custom_types::Register::RegisterType<CVRE::WaitFor>();
    Modifiers::Init();
    INSTALL_HOOK_OFFSETLESS(StandardLevelScenesTransitionSetupDataSO_Init, il2cpp_utils::FindMethodUnsafe("", "StandardLevelScenesTransitionSetupDataSO", "Init", 8));
    INSTALL_HOOK_OFFSETLESS(ResultsViewController_ContinueButtonPressed, il2cpp_utils::FindMethod("", "ResultsViewController", "ContinueButtonPressed"));
    INSTALL_HOOK_OFFSETLESS(RelativeScoreAndImmediateRankCounter_UpdateRelativeScoreAndImmediateRank, il2cpp_utils::FindMethodUnsafe("", "RelativeScoreAndImmediateRankCounter", "UpdateRelativeScoreAndImmediateRank", 4));
    INSTALL_HOOK_OFFSETLESS(SoloFreePlayFlowCoordinator_LevelSelectionFlowCoordinatorDidActivate, il2cpp_utils::FindMethodUnsafe("", "SoloFreePlayFlowCoordinator", "LevelSelectionFlowCoordinatorDidActivate", 2));
}