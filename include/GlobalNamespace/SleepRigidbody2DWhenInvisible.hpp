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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody2D
  class Rigidbody2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SleepRigidbody2DWhenInvisible
  class SleepRigidbody2DWhenInvisible : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Rigidbody2D _rigidbody2D
    // Offset: 0x18
    UnityEngine::Rigidbody2D* rigidbody2D;
    // protected System.Void Awake()
    // Offset: 0xCA7834
    void Awake();
    // protected System.Void OnBecameInvisible()
    // Offset: 0xCA7838
    void OnBecameInvisible();
    // public System.Void .ctor()
    // Offset: 0xCA7854
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SleepRigidbody2DWhenInvisible* New_ctor();
  }; // SleepRigidbody2DWhenInvisible
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SleepRigidbody2DWhenInvisible*, "", "SleepRigidbody2DWhenInvisible");
#pragma pack(pop)
