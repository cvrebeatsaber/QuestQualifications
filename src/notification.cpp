#include "notification.hpp"
#include "UnityEngine/GameObject.hpp"
#include "UnityEngine/Transform.hpp"
#include "UnityEngine/Vector3.hpp"
#include "UnityEngine/Vector2.hpp"
#include "UnityEngine/Canvas.hpp"
#include "UnityEngine/RenderMode.hpp"
#include "UnityEngine/RectTransform.hpp"
#include "questui/shared/BeatSaberUI.hpp"
#include "TMPro/TextAlignmentOptions.hpp"
#include "logging.hpp"
#include <chrono>

DEFINE_CLASS(CVRE::Notification);

static std::chrono::time_point<std::chrono::system_clock> cppResetTime;
static bool validReset = false;

void CVRE::Notification::FixedUpdate() {
    if (validReset && cppResetTime < std::chrono::system_clock::now()) {
        ResetNotification();
        validReset = false;
    }
}
void CVRE::Notification::OnDestroy() {
    getLogger().debug("Destroying notification!");
    if (notificationBox) {
        UnityEngine::Object::Destroy(notificationBox);
    }
    notificationBox = nullptr;
}

void CVRE::Notification::CreateNotification(std::string_view message) {
    getLogger().debug("Creating notification: %s", message.data());
    // Create notification box here.
    if (notificationBox == nullptr) {
        auto go = UnityEngine::GameObject::New_ctor(il2cpp_utils::createcsstr("CVRENotificationObject"));
        UnityEngine::Object::DontDestroyOnLoad(go);
        auto transform = go->get_transform();
        transform->set_position(UnityEngine::Vector3(0, 0, 2.5));
        transform->set_eulerAngles(UnityEngine::Vector3(0, 0, 0));
        transform->set_localScale(UnityEngine::Vector3(0.01, 0.01, 0.01));

        auto* canvas = go->AddComponent<UnityEngine::Canvas*>();
        canvas->set_renderMode(UnityEngine::RenderMode::WorldSpace);
        auto* rectTransform = reinterpret_cast<UnityEngine::RectTransform*>(canvas->get_transform());
        rectTransform->set_sizeDelta(UnityEngine::Vector2(200, 50));

        notificationBox = QuestUI::BeatSaberUI::CreateText(rectTransform, message.data(), UnityEngine::Vector2(0, -30), UnityEngine::Vector2(-39, 28));

        notificationBox->set_fontSize(10);
        notificationBox->set_alignment(TMPro::TextAlignmentOptions::Center);
    } else {
        notificationBox->set_text(il2cpp_utils::createcsstr(message));
    }
    validReset = true;
}

void CVRE::Notification::DisplayNotification(std::string_view message) {
    getLogger().debug("Displaying notification: %s", message.data());
    cppResetTime = std::chrono::system_clock::now() + std::chrono::seconds(SECONDS_SHOWING);
    if (notificationBox) {
        notificationBox->set_text(il2cpp_utils::createcsstr(message));
    }
    validReset = true;
}
void CVRE::Notification::AddNotification(std::string_view message) {
    getLogger().debug("Adding notification: %s", message.data());
    if (!notificationBox) {
        return;
    }
    cppResetTime = std::chrono::system_clock::now() + std::chrono::seconds(SECONDS_SHOWING);
    // Yes, this needs to be C++ strings, due to an oversight with TArgs forwarding on C# .Concat
    auto existingMessage = to_utf8(csstrtostr(notificationBox->get_text()));
    notificationBox->set_text(il2cpp_utils::createcsstr(existingMessage.append(message)));
    validReset = true;
}
void CVRE::Notification::ResetNotification() {
    getLogger().debug("Resetting notification!");
    if (notificationBox && notificationBox->get_text()->get_Length() > 0) {
        notificationBox->set_text(System::String::_get_Empty());
    }
}
