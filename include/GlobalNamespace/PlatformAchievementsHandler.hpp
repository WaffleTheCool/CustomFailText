// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:07 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformAchievementsHandler
  class PlatformAchievementsHandler : public ::Il2CppObject {
    public:
    // public HMAsyncRequest UnlockAchievement(System.String achievementId, PlatformAchievementsModelSO/UnlockAchievementCompletionHandler completionHandler)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::HMAsyncRequest* UnlockAchievement(::Il2CppString* achievementId, GlobalNamespace::PlatformAchievementsModelSO::UnlockAchievementCompletionHandler* completionHandler);
    // public HMAsyncRequest GetUnlockedAchievements(PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler completionHandler)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::HMAsyncRequest* GetUnlockedAchievements(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler* completionHandler);
    // protected System.Void .ctor()
    // Offset: 0xBBFDB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PlatformAchievementsHandler* New_ctor();
  }; // PlatformAchievementsHandler
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformAchievementsHandler*, "", "PlatformAchievementsHandler");
#pragma pack(pop)
