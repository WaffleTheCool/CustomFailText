// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:17 PM
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
  // Autogenerated type: DisableComponentOnNonSteam
  class DisableComponentOnNonSteam : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.MonoBehaviour _component
    // Offset: 0x18
    UnityEngine::MonoBehaviour* component;
    // private System.Void Awake()
    // Offset: 0xBD2A48
    void Awake();
    // public System.Void .ctor()
    // Offset: 0xBD2A68
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static DisableComponentOnNonSteam* New_ctor();
  }; // DisableComponentOnNonSteam
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisableComponentOnNonSteam*, "", "DisableComponentOnNonSteam");
#pragma pack(pop)
