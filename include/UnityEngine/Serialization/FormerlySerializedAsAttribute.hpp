// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:29 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Serialization
namespace UnityEngine::Serialization {
  // Autogenerated type: UnityEngine.Serialization.FormerlySerializedAsAttribute
  class FormerlySerializedAsAttribute : public System::Attribute {
    public:
    // private System.String m_oldName
    // Offset: 0x10
    ::Il2CppString* m_oldName;
    // public System.Void .ctor(System.String oldName)
    // Offset: 0x1376C1C
    static FormerlySerializedAsAttribute* New_ctor(::Il2CppString* oldName);
  }; // UnityEngine.Serialization.FormerlySerializedAsAttribute
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Serialization::FormerlySerializedAsAttribute*, "UnityEngine.Serialization", "FormerlySerializedAsAttribute");
#pragma pack(pop)
