// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.TimeZone
  class TimeZone : public ::Il2CppObject {
    public:
    // Get static field: static private System.Object tz_lock
    static ::Il2CppObject* _get_tz_lock();
    // Set static field: static private System.Object tz_lock
    static void _set_tz_lock(::Il2CppObject* value);
    // static private System.Void .cctor()
    // Offset: 0xCDAA04
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0xCDA9FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TimeZone* New_ctor();
  }; // System.TimeZone
}
DEFINE_IL2CPP_ARG_TYPE(System::TimeZone*, "System", "TimeZone");
#pragma pack(pop)
