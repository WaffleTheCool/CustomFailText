// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Analytics.DataPrivacy
#include "UnityEngine/Analytics/DataPrivacy.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Autogenerated type: UnityEngine.Analytics.DataPrivacy/TokenData
  struct DataPrivacy::TokenData : public System::ValueType {
    public:
    // public System.String url
    // Offset: 0x0
    ::Il2CppString* url;
    // public System.String token
    // Offset: 0x8
    ::Il2CppString* token;
    // Creating value type constructor for type: TokenData
    TokenData(::Il2CppString* url_ = {}, ::Il2CppString* token_ = {}) : url{url_}, token{token_} {}
  }; // UnityEngine.Analytics.DataPrivacy/TokenData
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Analytics::DataPrivacy::TokenData, "UnityEngine.Analytics", "DataPrivacy/TokenData");
#pragma pack(pop)
