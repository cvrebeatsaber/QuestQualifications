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
#include "GlobalNamespace/PracticeSettings.hpp"
#include "GlobalNamespace/PlayerSpecificSettings.hpp"
#include "UnityEngine/GameObject.hpp"
#include "GlobalNamespace/GameplayModifiers.hpp"
#include "HMUI/FlowCoordinator.hpp"
#include "GlobalNamespace/RelativeScoreAndImmediateRankCounter.hpp"

#include "manager.hpp"
#include "waitCoro.hpp"
#include "notification.hpp"
#include "custom-types/shared/register.hpp"
#include "questui/shared/QuestUI.hpp"
#include "main.hpp"

#include "beatsaber-hook/shared/config/config-utils.hpp"

static ModInfo modInfo;
CVRE::Manager* globalManager = nullptr;

const ModInfo& getInfo() {
    return modInfo;
}

Logger& getLogger() {
    static Logger* logger = new Logger(modInfo, LoggerOptions(false, true));
    return *logger;
}

extern "C" void setup(ModInfo& info) {
    info.id = ID;
    info.version = VERSION;
    modInfo = info;
    // Ensure persistent data dir is made
    auto dir = getDataDir(info);
    if (!direxists(dir)) {
        getLogger().debug("Making persistent data dir: %s", dir.c_str());
        mkpath(dir);
    }
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
        static auto* str = il2cpp_utils::createcsstr("CVRE_Manager", il2cpp_utils::StringType::Manual);
        auto* go = UnityEngine::GameObject::New_ctor(str);
        RET_V_UNLESS(getLogger(), go);
        UnityEngine::Object::DontDestroyOnLoad(go);
        globalManager = reinterpret_cast<CVRE::Manager*>(go->AddComponent(csTypeOf(CVRE::Manager*)));
        globalManager->notificationBox = reinterpret_cast<CVRE::Notification*>(go->AddComponent(csTypeOf(CVRE::Notification*)));
    }
}

void levelFinish(GlobalNamespace::ResultsViewController* rvc, GlobalNamespace::LevelCompletionResults* results) {
    RET_V_UNLESS(getLogger(), rvc);
    RET_V_UNLESS(getLogger(), results);
    RET_V_UNLESS(getLogger(), globalManager);
    globalManager->wrappedResults = results;
}

MAKE_HOOK_OFFSETLESS(StandardLevelScenesTransitionSetupDataSO_Init, void, GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* self,
        Il2CppString* gameMode,
        GlobalNamespace::IDifficultyBeatmap* beatmap, GlobalNamespace::OverrideEnvironmentSettings* settings, GlobalNamespace::ColorScheme* overrideColorScheme,
        GlobalNamespace::GameplayModifiers* modifiers, GlobalNamespace::PlayerSpecificSettings* playerSettings,
        GlobalNamespace::PracticeSettings* practiceSettings, Il2CppString* backButtonText, bool useTestCutSounds) {
    
    StandardLevelScenesTransitionSetupDataSO_Init(self, gameMode, beatmap, settings, overrideColorScheme, modifiers, playerSettings, practiceSettings, backButtonText, useTestCutSounds);
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

MAKE_HOOK_OFFSETLESS(SoloFreePlayFlowCoordinator_LevelSelectionFlowCoordinatorDidActivate, void, HMUI::FlowCoordinator* self, bool firstActivation, int activationType) {
    SoloFreePlayFlowCoordinator_LevelSelectionFlowCoordinatorDidActivate(self, firstActivation, activationType);
    createManager();
    globalManager->levelSelectionFlowCoordinator = self;
    if (globalManager->notificationBox) {
        globalManager->notificationBox->CreateNotification("Welcome to CVRE!");
    }
}

extern "C" void load() {
    QuestUI::Init();
    custom_types::Register::RegisterTypes<
        CVRE::Notification,
        CVRE::Manager,
        CVRE::WaitFor
    >();
    INSTALL_HOOK_OFFSETLESS(getLogger(), StandardLevelScenesTransitionSetupDataSO_Init, il2cpp_utils::FindMethodUnsafe("", "StandardLevelScenesTransitionSetupDataSO", "Init", 9));
    INSTALL_HOOK_OFFSETLESS(getLogger(), ResultsViewController_ContinueButtonPressed, il2cpp_utils::FindMethod("", "ResultsViewController", "ContinueButtonPressed"));
    INSTALL_HOOK_OFFSETLESS(getLogger(), SoloFreePlayFlowCoordinator_LevelSelectionFlowCoordinatorDidActivate, il2cpp_utils::FindMethodUnsafe("", "SoloFreePlayFlowCoordinator", "SinglePlayerLevelSelectionFlowCoordinatorDidActivate", 2));
}