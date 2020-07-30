// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:15 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: SimpleValueMissionObjectiveChecker
#include "GlobalNamespace/SimpleValueMissionObjectiveChecker.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: INoteController
  class INoteController;
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BadCutsMissionObjectiveChecker
  class BadCutsMissionObjectiveChecker : public GlobalNamespace::SimpleValueMissionObjectiveChecker {
    public:
    // private BeatmapObjectManager _beatmapObjectManager
    // Offset: 0x48
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // protected System.Void OnDestroy()
    // Offset: 0x1970C40
    void OnDestroy();
    // private System.Void HandleNoteWasCut(INoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0x1970D1C
    void HandleNoteWasCut(GlobalNamespace::INoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // protected override System.Void Init()
    // Offset: 0x1970B40
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::Init()
    void Init();
    // public System.Void .ctor()
    // Offset: 0x1970E1C
    // Implemented from: SimpleValueMissionObjectiveChecker
    // Base method: System.Void SimpleValueMissionObjectiveChecker::.ctor()
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BadCutsMissionObjectiveChecker* New_ctor();
  }; // BadCutsMissionObjectiveChecker
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BadCutsMissionObjectiveChecker*, "", "BadCutsMissionObjectiveChecker");
#pragma pack(pop)
