// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:15 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TrackLaneRingsManager
  class TrackLaneRingsManager;
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TrackLaneRingsPositionStepEffectSpawner
  class TrackLaneRingsPositionStepEffectSpawner : public UnityEngine::MonoBehaviour {
    public:
    // private TrackLaneRingsManager _trackLaneRingsManager
    // Offset: 0x18
    GlobalNamespace::TrackLaneRingsManager* trackLaneRingsManager;
    // private BeatmapEventType _beatmapEventType
    // Offset: 0x20
    GlobalNamespace::BeatmapEventType beatmapEventType;
    // private System.Single _minPositionStep
    // Offset: 0x24
    float minPositionStep;
    // private System.Single _maxPositionStep
    // Offset: 0x28
    float maxPositionStep;
    // private System.Single _moveSpeed
    // Offset: 0x2C
    float moveSpeed;
    // private BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // private System.Boolean _prevWasMinStep
    // Offset: 0x38
    bool prevWasMinStep;
    // protected System.Void Start()
    // Offset: 0xC32168
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xC321FC
    void OnDestroy();
    // public System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0xC322D4
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void .ctor()
    // Offset: 0xC32380
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TrackLaneRingsPositionStepEffectSpawner* New_ctor();
  }; // TrackLaneRingsPositionStepEffectSpawner
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrackLaneRingsPositionStepEffectSpawner*, "", "TrackLaneRingsPositionStepEffectSpawner");
#pragma pack(pop)
