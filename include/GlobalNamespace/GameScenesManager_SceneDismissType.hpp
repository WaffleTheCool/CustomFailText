// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:02 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: GameScenesManager
#include "GlobalNamespace/GameScenesManager.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameScenesManager/SceneDismissType
  struct GameScenesManager::SceneDismissType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public GameScenesManager/SceneDismissType Unload
    static constexpr const int Unload = 0;
    // Get static field: static public GameScenesManager/SceneDismissType Unload
    static GlobalNamespace::GameScenesManager::SceneDismissType _get_Unload();
    // Set static field: static public GameScenesManager/SceneDismissType Unload
    static void _set_Unload(GlobalNamespace::GameScenesManager::SceneDismissType value);
    // static field const value: static public GameScenesManager/SceneDismissType Deactivate
    static constexpr const int Deactivate = 1;
    // Get static field: static public GameScenesManager/SceneDismissType Deactivate
    static GlobalNamespace::GameScenesManager::SceneDismissType _get_Deactivate();
    // Set static field: static public GameScenesManager/SceneDismissType Deactivate
    static void _set_Deactivate(GlobalNamespace::GameScenesManager::SceneDismissType value);
    // Creating value type constructor for type: SceneDismissType
    SceneDismissType(int value_ = {}) : value{value_} {}
  }; // GameScenesManager/SceneDismissType
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameScenesManager::SceneDismissType, "", "GameScenesManager/SceneDismissType");
#pragma pack(pop)
