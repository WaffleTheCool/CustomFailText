// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:26 PM
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
// Type namespace: System
namespace System {
  // Autogenerated type: System.ObsoleteAttribute
  class ObsoleteAttribute : public System::Attribute {
    public:
    // private System.String _message
    // Offset: 0x10
    ::Il2CppString* message;
    // private System.Boolean _error
    // Offset: 0x18
    bool error;
    // public System.Void .ctor(System.String message)
    // Offset: 0x1347448
    static ObsoleteAttribute* New_ctor(::Il2CppString* message);
    // public System.Void .ctor(System.String message, System.Boolean error)
    // Offset: 0x1347484
    static ObsoleteAttribute* New_ctor(::Il2CppString* message, bool error);
    // public System.String get_Message()
    // Offset: 0x13474D0
    ::Il2CppString* get_Message();
    // public System.Void .ctor()
    // Offset: 0x1347410
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static ObsoleteAttribute* New_ctor();
  }; // System.ObsoleteAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::ObsoleteAttribute*, "System", "ObsoleteAttribute");
#pragma pack(pop)
