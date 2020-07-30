// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.TimeZone
#include "System/TimeZone.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeZoneInfo
  class TimeZoneInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.CurrentSystemTimeZone
  class CurrentSystemTimeZone : public System::TimeZone {
    public:
    // private readonly System.TimeZoneInfo LocalTimeZone
    // Offset: 0x10
    System::TimeZoneInfo* LocalTimeZone;
    // static public System.Boolean GetTimeZoneData(System.Int32 year, System.Int64[] data, System.String[] names, System.Boolean daylight_inverted)
    // Offset: 0x10B965C
    static bool GetTimeZoneData(int year, ::Array<int64_t>*& data, ::Array<::Il2CppString*>*& names, bool& daylight_inverted);
    // System.Void .ctor()
    // Offset: 0x10B95DC
    // Implemented from: System.TimeZone
    // Base method: System.Void TimeZone::.ctor()
    // Base method: System.Void Object::.ctor()
    static CurrentSystemTimeZone* New_ctor();
  }; // System.CurrentSystemTimeZone
}
DEFINE_IL2CPP_ARG_TYPE(System::CurrentSystemTimeZone*, "System", "CurrentSystemTimeZone");
#pragma pack(pop)
