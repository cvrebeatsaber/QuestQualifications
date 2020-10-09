#pragma once
#include <string>
#include "GlobalNamespace/ResultsViewController.hpp"
#include "GlobalNamespace/LevelCompletionResults.hpp"
#include "custom-types/shared/macros.hpp"
#include "UnityEngine/MonoBehaviour.hpp"
#include "questui/shared/CustomTypes/Components/KeyboardController.hpp"
#include "HMUI/FlowCoordinator.hpp"
#include "GlobalNamespace/GameplayCoreSceneSetupData.hpp"
#include "waitCoro.hpp"
#include "notification.hpp"

void yeetGlobalManager();
void createManager();
void levelFinish(GlobalNamespace::ResultsViewController* rvc, GlobalNamespace::LevelCompletionResults* results);

DECLARE_CLASS_CODEGEN(CVRE, Manager, UnityEngine::MonoBehaviour, 
    DECLARE_INSTANCE_FIELD(GlobalNamespace::LevelCompletionResults*, wrappedResults);
    DECLARE_INSTANCE_FIELD(GlobalNamespace::GameplayCoreSceneSetupData*, gameplayCoreSceneSetupData);
    DECLARE_INSTANCE_FIELD(QuestUI::KeyboardController*, keyboardView);
    DECLARE_INSTANCE_FIELD(HMUI::FlowCoordinator*, levelSelectionFlowCoordinator);
    DECLARE_INSTANCE_FIELD(CVRE::Notification*, notificationBox);
    DECLARE_INSTANCE_FIELD(bool, validModifiers);

    DECLARE_METHOD(void, DisplayKeyboard);
    DECLARE_METHOD(void, submitScore);
    DECLARE_METHOD(void, keyboard_confirm, Il2CppString* input);
    DECLARE_METHOD(void, keyboard_cancel);
    DECLARE_METHOD(void, invalidPin);
    DECLARE_METHOD(void, invalidPinWaitOver, CVRE::WaitFor* instance);
    DECLARE_METHOD(void, continuePressed);
    DECLARE_METHOD(bool, checkModifiers);
    DECLARE_METHOD(void, toDestroy, CVRE::WaitFor* instance);

    REGISTER_FUNCTION(Manager,
        REGISTER_FIELD(wrappedResults);
        REGISTER_FIELD(gameplayCoreSceneSetupData);
        REGISTER_FIELD(keyboardView);
        REGISTER_FIELD(levelSelectionFlowCoordinator);
        REGISTER_FIELD(notificationBox);
        REGISTER_FIELD(validModifiers);

        REGISTER_METHOD(DisplayKeyboard);
        REGISTER_METHOD(submitScore);
        REGISTER_METHOD(keyboard_confirm);
        REGISTER_METHOD(keyboard_cancel);
        REGISTER_METHOD(invalidPin);
        REGISTER_METHOD(invalidPinWaitOver);
        REGISTER_METHOD(continuePressed);
        REGISTER_METHOD(checkModifiers);
        REGISTER_METHOD(toDestroy);
    )
)