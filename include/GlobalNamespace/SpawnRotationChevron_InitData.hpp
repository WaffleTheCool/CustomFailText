// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:15 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: SpawnRotationChevron
#include "GlobalNamespace/SpawnRotationChevron.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SpawnRotationChevron/InitData
  class SpawnRotationChevron::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean enableChevron
    // Offset: 0x10
    bool enableChevron;
    // public readonly System.Boolean enableSideLines
    // Offset: 0x11
    bool enableSideLines;
    // public System.Void .ctor(System.Boolean enableChevron, System.Boolean enableSideLines)
    // Offset: 0xB87B54
    static SpawnRotationChevron::InitData* New_ctor(bool enableChevron, bool enableSideLines);
  }; // SpawnRotationChevron/InitData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SpawnRotationChevron::InitData*, "", "SpawnRotationChevron/InitData");
#pragma pack(pop)
