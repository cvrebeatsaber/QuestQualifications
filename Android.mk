# Copyright (C) 2009 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.


LOCAL_PATH := $(call my-dir)

TARGET_ARCH_ABI := arm64-v8a

rwildcard=$(wildcard $1$2) $(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2))

# Creating prebuilt for dependency: modloader - version: 1.0.4
include $(CLEAR_VARS)
LOCAL_MODULE := modloader
LOCAL_EXPORT_C_INCLUDES := extern/modloader
LOCAL_SRC_FILES := extern/libmodloader.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: codegen - version: 0.6.2
include $(CLEAR_VARS)
LOCAL_MODULE := codegen_0_6_2
LOCAL_EXPORT_C_INCLUDES := extern/codegen
LOCAL_SRC_FILES := extern/libcodegen_0_6_2.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: custom-types - version: 0.4.7
include $(CLEAR_VARS)
LOCAL_MODULE := custom-types
LOCAL_EXPORT_C_INCLUDES := extern/custom-types
LOCAL_SRC_FILES := extern/libcustom-types.so
include $(PREBUILT_SHARED_LIBRARY)
# Creating prebuilt for dependency: questui - version: 0.4.4
include $(CLEAR_VARS)
LOCAL_MODULE := questui
LOCAL_EXPORT_C_INCLUDES := extern/questui
LOCAL_SRC_FILES := extern/libquestui.so
include $(PREBUILT_SHARED_LIBRARY)
# Libcurl
include $(CLEAR_VARS)
LOCAL_MODULE := curl
LOCAL_EXPORT_C_INCLUDES := include/libcurl/include
LOCAL_SRC_FILES := include/libcurl/libs/libcurl.a
include $(PREBUILT_STATIC_LIBRARY)
# cryptopp
include $(CLEAR_VARS)
LOCAL_MODULE := crypto
LOCAL_EXPORT_C_INCLUDES := include/cryptopp/
LOCAL_SRC_FILES := include/cryptopp/libs/libcryptopp_static.a
include $(PREBUILT_STATIC_LIBRARY)
# protobuf
include $(CLEAR_VARS)
LOCAL_MODULE := protobuf
LOCAL_EXPORT_C_INCLUDES := C:/protobuf-3.15.6/src
LOCAL_SRC_FILES := extern/libprotobuf.a
LOCAL_CPP_FLAGS := -fPIC
include $(PREBUILT_STATIC_LIBRARY)
# Creating prebuilt for dependency: beatsaber-hook - version: 1.1.5
include $(CLEAR_VARS)
LOCAL_MODULE := beatsaber-hook_1_1_5
LOCAL_EXPORT_C_INCLUDES := extern/beatsaber-hook
LOCAL_SRC_FILES := extern/libbeatsaber-hook_1_1_5.so
include $(PREBUILT_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := CVREPlugin
LOCAL_SRC_FILES += $(call rwildcard,src/,*.cpp)
LOCAL_SRC_FILES += $(call rwildcard,shared/protobuf/Models/**,*.cc)
LOCAL_SRC_FILES += $(call rwildcard,extern/beatsaber-hook/src/inline-hook,*.cpp)
LOCAL_SRC_FILES += $(call rwildcard,extern/beatsaber-hook/src/inline-hook,*.c)
LOCAL_SHARED_LIBRARIES += beatsaber-hook_1_1_5
LOCAL_SHARED_LIBRARIES += modloader
LOCAL_SHARED_LIBRARIES += codegen_0_6_2
LOCAL_SHARED_LIBRARIES += custom-types
LOCAL_SHARED_LIBRARIES += questui
LOCAL_LDLIBS += -llog -lz
LOCAL_CFLAGS += -I'./extern/libil2cpp/il2cpp/libil2cpp' -DVERSION='"0.2.0"' -isystem"./extern" -isystem'extern/codegen/include' -DID='"CVREPlugin"' -I'./shared' -isystem"C:/protobuf-3.15.6/src"
LOCAL_CPPFLAGS += -std=c++20 -Wall -Werror
LOCAL_C_INCLUDES += ./include ./src
LOCAL_CPP_FEATURES += exceptions
LOCAL_STATIC_LIBRARIES += curl
LOCAL_STATIC_LIBRARIES += crypto
LOCAL_STATIC_LIBRARIES += protobuf
include $(BUILD_SHARED_LIBRARY)
