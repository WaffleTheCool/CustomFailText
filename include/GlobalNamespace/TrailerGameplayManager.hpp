// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:15 PM
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
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: MainCamera
  class MainCamera;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TrailerGameplayManager
  class TrailerGameplayManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::TrailerGameplayManager::$Start$d__4
    class $Start$d__4;
    // private System.Boolean _disableMainCamera
    // Offset: 0x18
    bool disableMainCamera;
    // private GameScenesManager _gameScenesManager
    // Offset: 0x20
    GlobalNamespace::GameScenesManager* gameScenesManager;
    // private GameSongController _gameSongController
    // Offset: 0x28
    GlobalNamespace::GameSongController* gameSongController;
    // private MainCamera _mainCamera
    // Offset: 0x30
    GlobalNamespace::MainCamera* mainCamera;
    // private System.Collections.IEnumerator Start()
    // Offset: 0xC32BA4
    System::Collections::IEnumerator* Start();
    // public System.Void .ctor()
    // Offset: 0xC32C4C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TrailerGameplayManager* New_ctor();
  }; // TrailerGameplayManager
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrailerGameplayManager*, "", "TrailerGameplayManager");
#pragma pack(pop)
