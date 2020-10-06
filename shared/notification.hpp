#pragma once
#include "TMPro/TMP_Text.hpp"
#include <string_view>
#include "custom-types/shared/macros.hpp"
#include "System/DateTime.hpp"
#include <chrono>

#ifndef SECONDS_SHOWING
#define SECONDS_SHOWING 5
#endif

DECLARE_CLASS_CODEGEN(CVRE, Notification, UnityEngine::MonoBehaviour,
    DECLARE_INSTANCE_FIELD(TMPro::TMP_Text*, notificationBox);

    DECLARE_METHOD(void, FixedUpdate);
    DECLARE_METHOD(void, OnDestroy);

    public:
    void CreateNotification(std::string_view message);
    void DisplayNotification(std::string_view message);
    void AddNotification(std::string_view message);
    void ResetNotification();

    REGISTER_FUNCTION(Notification,
        REGISTER_FIELD(notificationBox);
        REGISTER_METHOD(FixedUpdate);
        REGISTER_METHOD(OnDestroy);
    )
)
