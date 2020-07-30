// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IBeatmapLevelData
  class IBeatmapLevelData {
    public:
    // public UnityEngine.AudioClip get_audioClip()
    // Offset: 0xFFFFFFFF
    UnityEngine::AudioClip* get_audioClip();
    // public IDifficultyBeatmapSet[] get_difficultyBeatmapSets()
    // Offset: 0xFFFFFFFF
    ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();
  }; // IBeatmapLevelData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IBeatmapLevelData*, "", "IBeatmapLevelData");
#pragma pack(pop)
