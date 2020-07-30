// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:03 PM
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
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: MatchmakingEnqueueResult
  class MatchmakingEnqueueResult;
  // Forward declaring type: RoomList
  class RoomList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.MatchmakingBrowseResult
  class MatchmakingBrowseResult : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.Models.MatchmakingEnqueueResult EnqueueResult
    // Offset: 0x10
    Oculus::Platform::Models::MatchmakingEnqueueResult* EnqueueResult;
    // public readonly Oculus.Platform.Models.RoomList Rooms
    // Offset: 0x18
    Oculus::Platform::Models::RoomList* Rooms;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE8E6A8
    static MatchmakingBrowseResult* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.MatchmakingBrowseResult
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::MatchmakingBrowseResult*, "Oculus.Platform.Models", "MatchmakingBrowseResult");
#pragma pack(pop)
