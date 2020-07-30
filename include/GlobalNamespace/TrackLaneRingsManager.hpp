// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:15 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TrackLaneRing
  class TrackLaneRing;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TrackLaneRingsManager
  class TrackLaneRingsManager : public UnityEngine::MonoBehaviour {
    public:
    // private TrackLaneRing _trackLaneRingPrefab
    // Offset: 0x18
    GlobalNamespace::TrackLaneRing* trackLaneRingPrefab;
    // private System.Int32 _ringCount
    // Offset: 0x20
    int ringCount;
    // private System.Single _ringPositionStep
    // Offset: 0x24
    float ringPositionStep;
    // private TrackLaneRing[] _rings
    // Offset: 0x28
    ::Array<GlobalNamespace::TrackLaneRing*>* rings;
    // public System.Single get_ringPositionStep()
    // Offset: 0xC31A80
    float get_ringPositionStep();
    // public TrackLaneRing[] get_Rings()
    // Offset: 0xC31A88
    ::Array<GlobalNamespace::TrackLaneRing*>* get_Rings();
    // protected System.Void Awake()
    // Offset: 0xC31A90
    void Awake();
    // protected System.Void FixedUpdate()
    // Offset: 0xC31CAC
    void FixedUpdate();
    // protected System.Void LateUpdate()
    // Offset: 0xC31D58
    void LateUpdate();
    // protected System.Void OnDrawGizmosSelected()
    // Offset: 0xC31E04
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0xC32154
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TrackLaneRingsManager* New_ctor();
  }; // TrackLaneRingsManager
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrackLaneRingsManager*, "", "TrackLaneRingsManager");
#pragma pack(pop)
