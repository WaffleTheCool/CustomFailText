// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: PartyFreePlayFlowCoordinator
#include "GlobalNamespace/PartyFreePlayFlowCoordinator.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: EnterPlayerGuestNameViewController
  class EnterPlayerGuestNameViewController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PartyFreePlayFlowCoordinator/<>c__DisplayClass17_0
  class PartyFreePlayFlowCoordinator::$$c__DisplayClass17_0 : public ::Il2CppObject {
    public:
    // public PartyFreePlayFlowCoordinator <>4__this
    // Offset: 0x10
    GlobalNamespace::PartyFreePlayFlowCoordinator* $$4__this;
    // public LevelCompletionResults levelCompletionResults
    // Offset: 0x18
    GlobalNamespace::LevelCompletionResults* levelCompletionResults;
    // public System.String leaderboardId
    // Offset: 0x20
    ::Il2CppString* leaderboardId;
    // public IDifficultyBeatmap difficultyBeatmap
    // Offset: 0x28
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // public System.Boolean practice
    // Offset: 0x30
    bool practice;
    // System.Void <ProcessLevelCompletionResultsAfterLevelDidFinish>b__0(EnterPlayerGuestNameViewController viewController, System.String playerName)
    // Offset: 0xBBE0C4
    void $ProcessLevelCompletionResultsAfterLevelDidFinish$b__0(GlobalNamespace::EnterPlayerGuestNameViewController* viewController, ::Il2CppString* playerName);
    // public System.Void .ctor()
    // Offset: 0xBBDD0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PartyFreePlayFlowCoordinator::$$c__DisplayClass17_0* New_ctor();
  }; // PartyFreePlayFlowCoordinator/<>c__DisplayClass17_0
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PartyFreePlayFlowCoordinator::$$c__DisplayClass17_0*, "", "PartyFreePlayFlowCoordinator/<>c__DisplayClass17_0");
#pragma pack(pop)
