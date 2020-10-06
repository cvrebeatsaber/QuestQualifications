#pragma once
#include "custom-types/shared/macros.hpp"
#include "UnityEngine/MonoBehaviour.hpp"
#include "System/Action_1.hpp"

DECLARE_CLASS_CODEGEN(CVRE, WaitFor, UnityEngine::MonoBehaviour, 
    DECLARE_INSTANCE_FIELD_DEFAULT(bool, complete, false);
    // Because we can't have a pointer to ourselves, we point to an object and cast.
    DECLARE_INSTANCE_FIELD_DEFAULT(System::Action_1<System::Object*>*, callback, nullptr);
    DECLARE_INSTANCE_FIELD_DEFAULT(int, counter, 0);
    DECLARE_INSTANCE_FIELD_DEFAULT(int, maxCount, 100);
    
    DECLARE_METHOD(void, Update);

    REGISTER_FUNCTION(WaitFor,
        REGISTER_FIELD(complete);
        REGISTER_FIELD(callback);
        REGISTER_FIELD(counter);
        REGISTER_FIELD(maxCount);
        REGISTER_METHOD(Update);
    )
)
