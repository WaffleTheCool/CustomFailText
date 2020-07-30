// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:21 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionGameplaySceneSetupData
  class MissionGameplaySceneSetupData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionGameplaySceneSetup
  class MissionGameplaySceneSetup : public Zenject::MonoInstaller {
    public:
    // private MissionGameplaySceneSetupData _sceneSetupData
    // Offset: 0x20
    GlobalNamespace::MissionGameplaySceneSetupData* sceneSetupData;
    // public override System.Void InstallBindings()
    // Offset: 0xBEF624
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xBEF874
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionGameplaySceneSetup* New_ctor();
  }; // MissionGameplaySceneSetup
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionGameplaySceneSetup*, "", "MissionGameplaySceneSetup");
#pragma pack(pop)
