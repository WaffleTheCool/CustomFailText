// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:03 PM
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRControllerTransformOffset
  class VRControllerTransformOffset : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Vector3 get_positionOffset()
    // Offset: 0xFFFFFFFF
    UnityEngine::Vector3 get_positionOffset();
    // public UnityEngine.Vector3 get_rotationOffset()
    // Offset: 0xFFFFFFFF
    UnityEngine::Vector3 get_rotationOffset();
    // protected System.Void .ctor()
    // Offset: 0xCA9A3C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VRControllerTransformOffset* New_ctor();
  }; // VRControllerTransformOffset
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllerTransformOffset*, "", "VRControllerTransformOffset");
#pragma pack(pop)
