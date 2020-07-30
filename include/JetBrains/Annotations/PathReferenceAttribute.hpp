// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:43 PM
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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.PathReferenceAttribute
  class PathReferenceAttribute : public System::Attribute {
    public:
    // private System.String <BasePath>k__BackingField
    // Offset: 0x10
    ::Il2CppString* BasePath;
    // public System.Void .ctor(System.String basePath)
    // Offset: 0x19456A8
    static PathReferenceAttribute* New_ctor(::Il2CppString* basePath);
    // public System.String get_BasePath()
    // Offset: 0x19456DC
    ::Il2CppString* get_BasePath();
    // private System.Void set_BasePath(System.String value)
    // Offset: 0x19456E4
    void set_BasePath(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x19456A0
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static PathReferenceAttribute* New_ctor();
  }; // JetBrains.Annotations.PathReferenceAttribute
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::PathReferenceAttribute*, "JetBrains.Annotations", "PathReferenceAttribute");
#pragma pack(pop)
