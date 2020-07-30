// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:12 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: PlayerSaveData
#include "GlobalNamespace/PlayerSaveData.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerSaveData/ColorScheme
  class PlayerSaveData::ColorScheme : public ::Il2CppObject {
    public:
    // public System.String colorSchemeId
    // Offset: 0x10
    ::Il2CppString* colorSchemeId;
    // public UnityEngine.Color saberAColor
    // Offset: 0x18
    UnityEngine::Color saberAColor;
    // public UnityEngine.Color saberBColor
    // Offset: 0x28
    UnityEngine::Color saberBColor;
    // public UnityEngine.Color environmentColor0
    // Offset: 0x38
    UnityEngine::Color environmentColor0;
    // public UnityEngine.Color environmentColor1
    // Offset: 0x48
    UnityEngine::Color environmentColor1;
    // public UnityEngine.Color obstaclesColor
    // Offset: 0x58
    UnityEngine::Color obstaclesColor;
    // public System.Void .ctor(System.String colorSchemeId, UnityEngine.Color saberAColor, UnityEngine.Color saberBColor, UnityEngine.Color environmentColor0, UnityEngine.Color environmentColor1, UnityEngine.Color obstaclesColor)
    // Offset: 0xBC6F5C
    static PlayerSaveData::ColorScheme* New_ctor(::Il2CppString* colorSchemeId, UnityEngine::Color saberAColor, UnityEngine::Color saberBColor, UnityEngine::Color environmentColor0, UnityEngine::Color environmentColor1, UnityEngine::Color obstaclesColor);
  }; // PlayerSaveData/ColorScheme
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveData::ColorScheme*, "", "PlayerSaveData/ColorScheme");
#pragma pack(pop)
