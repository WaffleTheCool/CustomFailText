// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:02 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: Snap
  class Snap : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Vector3 snap
    // Offset: 0x18
    UnityEngine::Vector3 snap;
    // public UnityEngine.Vector3 offset
    // Offset: 0x24
    UnityEngine::Vector3 offset;
    // public System.Void SnapPosition()
    // Offset: 0xCA785C
    void SnapPosition();
    // public System.Void .ctor()
    // Offset: 0xCA7B3C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Snap* New_ctor();
  }; // Snap
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Snap*, "", "Snap");
#pragma pack(pop)
