#include "System/Action.hpp"
#include "System/Action_1.hpp"
#include "GlobalNamespace/GameplayModifiers.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "manager.hpp"
#include "questui/shared/BeatSaberUI.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-functions.hpp"
#include "waitCoro.hpp"
#include "util.hpp"
#include "modifiers.hpp"
#include "logging.hpp"
#include "submission-packet.hpp"
#include "web-requestor.hpp"

DEFINE_CLASS(CVRE::Manager);

void CVRE::Manager::DisplayKeyboard() {
    getLogger().debug("Displaying keyboard!");
    // Stale keyboardView reference should be auto-gc'd
    keyboardView = QuestUI::BeatSaberUI::CreateViewController<QuestUI::KeyboardViewController*>();
    keyboardView->add_confirmPressed(reinterpret_cast<System::Action_1<Il2CppString*>*>(RET_V_UNLESS(
        il2cpp_utils::MakeAction(il2cpp_functions::class_get_type(classof(System::Action_1<Il2CppString*>*)), this, +[](CVRE::Manager* self, Il2CppString* input) {
            self->keyboard_confirm(input);
        })
    )));
    keyboardView->add_cancelPressed(reinterpret_cast<System::Action*>(RET_V_UNLESS(
        il2cpp_utils::MakeAction(il2cpp_functions::class_get_type(classof(System::Action*)), this, +[](CVRE::Manager* self) {
            self->keyboard_cancel();
        })
    )));
    if (!levelSelectionFlowCoordinator) {
        getLogger().critical("Tried to display keyboard view with nullptr levelSelectionFlowCoordinator!");
        return;
    }
    levelSelectionFlowCoordinator->PresentViewController(keyboardView, nullptr, false);
}

void CVRE::Manager::submitScore() {
    getLogger().info("Attempting to submit score to CVRE Score Server!");
    SubmissionPacket packet(wrappedResults, "", gameplayCoreSceneSetupData);
    packet.Serialize();
    auto secret = Util::ReadSecret();
    if (!secret) {
        if (notificationBox) {
            notificationBox->DisplayNotification("Installation invalid! Contact Sc2ad#8836 on Discord ASAP!");
        }
        getLogger().critical("Secret could not be read!");
        return;
    }
    // TODO: Ensure ResultsViewController exists here
    DisplayKeyboard();
}

void CVRE::Manager::keyboard_confirm(Il2CppString* input) {
    levelSelectionFlowCoordinator->DismissViewController(keyboardView, nullptr, true);
    // TODO: Upload score here
    // Score upload success should destroy CVRE::Manager
    getLogger().debug("Attempting to upload score!");
    if (validModifiers) {
        bool outBool = false;
        auto tmp = WebRequestor::SubmitScore(outBool, this, wrappedResults, to_utf8(csstrtostr(input)), gameplayCoreSceneSetupData);
        if (notificationBox) {
            notificationBox->DisplayNotification(tmp);
        }
        if (outBool) {
            // Destroy the keyboard view if we succeed!
            UnityEngine::Object::Destroy(keyboardView);
        }
    } else {
        getLogger().warning("Modifiers are not valid!");
    }
}

void CVRE::Manager::keyboard_cancel() {
    getLogger().debug("Cancelled submission!");
    if (notificationBox) {
        notificationBox->DisplayNotification("Cancelled submission!");
    }
    levelSelectionFlowCoordinator->DismissViewController(keyboardView, nullptr, true);
    keyboardView->set_enabled(false);
    // Create wait coro
    auto* go = UnityEngine::GameObject::New_ctor();
    auto* instance = reinterpret_cast<CVRE::WaitFor*>(go->AddComponent(typeof(CVRE::WaitFor*)));
    instance->maxCount = 100;
    instance->callback = reinterpret_cast<System::Action_1<System::Object*>*>(RET_V_UNLESS(
        il2cpp_utils::MakeAction(il2cpp_functions::class_get_type(classof(System::Action_1<System::Object*>*)), this, +[](CVRE::Manager* self, System::Object* instance) {
            self->toDestroy(reinterpret_cast<CVRE::WaitFor*>(instance));
        })
    ));
}

void CVRE::Manager::toDestroy(CVRE::WaitFor* instance) {
    // Destroy instance, caller cleanup.
    UnityEngine::Object::Destroy(instance->get_gameObject());
    UnityEngine::Object::Destroy(instance);
    // We should also destroy CVRE::Manager here
    UnityEngine::Object::Destroy(keyboardView);
}

void CVRE::Manager::invalidPinWaitOver(CVRE::WaitFor* instance) {
    submitScore();
    // Destroy instance, caller cleanup.
    UnityEngine::Object::Destroy(instance->get_gameObject());
    UnityEngine::Object::Destroy(instance);
}

void CVRE::Manager::invalidPin() {
    getLogger().debug("Invalid PIN!");
    if (notificationBox) {
        notificationBox->DisplayNotification("Invalid PIN!");
    }
    // Create wait coro
    auto* go = UnityEngine::GameObject::New_ctor();
    auto* instance = reinterpret_cast<CVRE::WaitFor*>(go->AddComponent(typeof(CVRE::WaitFor*)));
    instance->callback = reinterpret_cast<System::Action_1<System::Object*>*>(RET_V_UNLESS(
        il2cpp_utils::MakeAction(il2cpp_functions::class_get_type(classof(System::Action_1<System::Object*>*)), this, +[](CVRE::Manager* self, System::Object* instance) {
            self->invalidPinWaitOver(reinterpret_cast<CVRE::WaitFor*>(instance));
        })
    ));
}

void CVRE::Manager::continuePressed() {
    // From the manager, we have whatever context variables we want.
    // They are also all guaranteed to not have been GC'd
    // If we no longer need manager, we should destroy the gameobject we created with it.
    getLogger().debug("Continue pressed!");
    validModifiers = checkModifiers();
    if (validModifiers) {
        if (wrappedResults->levelEndStateType == GlobalNamespace::LevelCompletionResults::LevelEndStateType::Cleared) {
            if (notificationBox) {
                notificationBox->AddNotification("\nConfirmed that a valid CVRE score was completed!");
            }
            submitScore();
        }
    }
}

bool CVRE::Manager::checkModifiers() {
    getLogger().debug("Checking modifiers!");
    auto& competitionModifiers = Modifiers::get_competitionModifiers();
    if (competitionModifiers.size() == 0) {
        if (notificationBox) {
            notificationBox->AddNotification("\nThere are no competition modifiers!");
        }
        return false;
    }
    std::string message;
    bool match = true;
    for (auto itr : competitionModifiers) {
        auto* modifiers = wrappedResults->gameplayModifiers;
        auto checked = il2cpp_utils::GetPropertyValue<bool>(modifiers, itr.name);
        if (!checked) continue;
        if (*checked != itr.val) {
            match = false;
        }
    }

    if (match) {
        auto* defaultModifiers = GlobalNamespace::GameplayModifiers::get_defaultModifiers();
        void* itr = nullptr;
        const PropertyInfo* prop;
        auto& competitionModifierNames = Modifiers::get_competitionModifierNames();
        while ((prop = il2cpp_functions::class_get_properties(il2cpp_functions::object_get_class(defaultModifiers), &itr))) {
            if (!competitionModifierNames.contains(prop->name)) {
                // Perform a check against competition allowed modifiers
                auto* propType = prop->get->return_type;
                if (propType->data.klassIndex == il2cpp_functions::defaults->boolean_class->this_arg.data.klassIndex) {
                    auto defaultBool = RET_DEFAULT_UNLESS(il2cpp_utils::GetPropertyValue<bool>(defaultModifiers, prop));
                    auto actualBool = RET_DEFAULT_UNLESS(il2cpp_utils::GetPropertyValue<bool>(wrappedResults->gameplayModifiers, prop));
                    if (defaultBool != actualBool) {
                        match = false;
                        message += string_format("Modifier: %s does not match: %s", prop->name, defaultBool ? "true" : "false");
                    }
                }
                else if (propType->data.klassIndex == il2cpp_functions::defaults->single_class->this_arg.data.klassIndex) {
                    auto defaultFloat = RET_DEFAULT_UNLESS(il2cpp_utils::GetPropertyValue<float>(defaultModifiers, prop));
                    auto actualFloat = RET_DEFAULT_UNLESS(il2cpp_utils::GetPropertyValue<float>(wrappedResults->gameplayModifiers, prop));
                    if (defaultFloat != actualFloat) {
                        match = false;
                        message += string_format("Modifier: %s does not match: %f it is: %f", prop->name, defaultFloat, actualFloat);
                    }
                }
                else if (propType->data.klassIndex == il2cpp_functions::defaults->int32_class->this_arg.data.klassIndex) {
                    auto defaultInt = RET_DEFAULT_UNLESS(il2cpp_utils::GetPropertyValue<int>(defaultModifiers, prop));
                    auto actualInt = RET_DEFAULT_UNLESS(il2cpp_utils::GetPropertyValue<int>(wrappedResults->gameplayModifiers, prop));
                    if (defaultInt != actualInt) {
                        match = false;
                        message += string_format("Modifier: %s does not match: %i it is: %i", prop->name, defaultInt, actualInt);
                    }
                }
            }
        }
    }
    if (match) {
        message = "Modifiers Match!";
    }
    getLogger().debug("Adding notification: %s", message.c_str());
    if (notificationBox) {
        notificationBox->AddNotification("\n" + message);
    }
    return match;
}