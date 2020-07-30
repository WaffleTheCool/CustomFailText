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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomFogSO
  class BloomFogSO;
  // Forward declaring type: BloomFogEnvironmentParams
  class BloomFogEnvironmentParams;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomFogEnvironment
  class BloomFogEnvironment : public UnityEngine::MonoBehaviour {
    public:
    // private BloomFogSO _bloomFog
    // Offset: 0x18
    GlobalNamespace::BloomFogSO* bloomFog;
    // private BloomFogEnvironmentParams _fog0Params
    // Offset: 0x20
    GlobalNamespace::BloomFogEnvironmentParams* fog0Params;
    // private BloomFogEnvironmentParams _fog1Params
    // Offset: 0x28
    GlobalNamespace::BloomFogEnvironmentParams* fog1Params;
    // protected System.Void Awake()
    // Offset: 0x180BD1C
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x180BD94
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BloomFogEnvironment* New_ctor();
  }; // BloomFogEnvironment
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomFogEnvironment*, "", "BloomFogEnvironment");
#pragma pack(pop)
