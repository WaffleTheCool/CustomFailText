// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.OptionalFieldAttribute
  class OptionalFieldAttribute : public System::Attribute {
    public:
    // private System.Int32 versionAdded
    // Offset: 0x10
    int versionAdded;
    // public System.Void set_VersionAdded(System.Int32 value)
    // Offset: 0xFE7DEC
    void set_VersionAdded(int value);
    // public System.Void .ctor()
    // Offset: 0xFE7DDC
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static OptionalFieldAttribute* New_ctor();
  }; // System.Runtime.Serialization.OptionalFieldAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::OptionalFieldAttribute*, "System.Runtime.Serialization", "OptionalFieldAttribute");
#pragma pack(pop)
