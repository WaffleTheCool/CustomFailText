// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Runtime.Remoting.TypeEntry
#include "System/Runtime/Remoting/TypeEntry.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.ActivatedServiceTypeEntry
  class ActivatedServiceTypeEntry : public System::Runtime::Remoting::TypeEntry {
    public:
    // private System.Type obj_type
    // Offset: 0x20
    System::Type* obj_type;
    // public System.Void .ctor(System.String typeName, System.String assemblyName)
    // Offset: 0x103C5F8
    static ActivatedServiceTypeEntry* New_ctor(::Il2CppString* typeName, ::Il2CppString* assemblyName);
    // public System.Type get_ObjectType()
    // Offset: 0x103C748
    System::Type* get_ObjectType();
    // public override System.String ToString()
    // Offset: 0x103C750
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Runtime.Remoting.ActivatedServiceTypeEntry
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ActivatedServiceTypeEntry*, "System.Runtime.Remoting", "ActivatedServiceTypeEntry");
#pragma pack(pop)
