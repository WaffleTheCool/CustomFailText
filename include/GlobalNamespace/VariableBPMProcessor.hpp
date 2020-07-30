// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:16 PM
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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VariableBPMProcessor
  class VariableBPMProcessor : public ::Il2CppObject {
    public:
    // private System.Single _currentBPM
    // Offset: 0x10
    float currentBPM;
    // public System.Single get_currentBPM()
    // Offset: 0xC40D30
    float get_currentBPM();
    // public System.Void SetBPM(System.Single newBPM)
    // Offset: 0xC40D38
    void SetBPM(float newBPM);
    // public System.Boolean ProcessBeatmapEventData(BeatmapEventData beatmapEventData)
    // Offset: 0xC40D40
    bool ProcessBeatmapEventData(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void .ctor()
    // Offset: 0xC40D90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static VariableBPMProcessor* New_ctor();
  }; // VariableBPMProcessor
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VariableBPMProcessor*, "", "VariableBPMProcessor");
#pragma pack(pop)
