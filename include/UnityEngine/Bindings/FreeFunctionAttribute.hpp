// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.Bindings.NativeMethodAttribute
#include "UnityEngine/Bindings/NativeMethodAttribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Autogenerated type: UnityEngine.Bindings.FreeFunctionAttribute
  class FreeFunctionAttribute : public UnityEngine::Bindings::NativeMethodAttribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x1958D1C
    // Implemented from: UnityEngine.Bindings.NativeMethodAttribute
    // Base method: System.Void NativeMethodAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static FreeFunctionAttribute* New_ctor();
    // public System.Void .ctor(System.String name)
    // Offset: 0x1958D50
    // Implemented from: UnityEngine.Bindings.NativeMethodAttribute
    // Base method: System.Void NativeMethodAttribute::.ctor(System.String name)
    static FreeFunctionAttribute* New_ctor(::Il2CppString* name);
    // public System.Void .ctor(System.String name, System.Boolean isThreadSafe)
    // Offset: 0x1958DA4
    // Implemented from: UnityEngine.Bindings.NativeMethodAttribute
    // Base method: System.Void NativeMethodAttribute::.ctor(System.String name, System.Boolean isThreadSafe)
    static FreeFunctionAttribute* New_ctor(::Il2CppString* name, bool isThreadSafe);
  }; // UnityEngine.Bindings.FreeFunctionAttribute
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::FreeFunctionAttribute*, "UnityEngine.Bindings", "FreeFunctionAttribute");
#pragma pack(pop)
