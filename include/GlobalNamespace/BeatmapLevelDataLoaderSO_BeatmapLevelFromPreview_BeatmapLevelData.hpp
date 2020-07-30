// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:09 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview
#include "GlobalNamespace/BeatmapLevelDataLoaderSO_BeatmapLevelFromPreview.hpp"
// Including type: IBeatmapLevelData
#include "GlobalNamespace/IBeatmapLevelData.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelDataSO
  class BeatmapLevelDataSO;
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Skipping declaration: IBeatmapLevel because it is already included!
  // Forward declaring type: IDifficultyBeatmapSet
  class IDifficultyBeatmapSet;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData
  class BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData : public ::Il2CppObject, public GlobalNamespace::IBeatmapLevelData {
    public:
    // Nested type: GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet
    class DifficultyBeatmapSet;
    // private UnityEngine.AudioClip _audioClip
    // Offset: 0x10
    UnityEngine::AudioClip* audioClip;
    // private BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData/DifficultyBeatmapSet[] _difficultyBeatmapSets
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData::DifficultyBeatmapSet*>* difficultyBeatmapSets;
    // public System.Void .ctor(BeatmapLevelDataSO beatmapLevelData, BeatmapCharacteristicCollectionSO beatmapCharacteristicCollection, IBeatmapLevel parentLevel)
    // Offset: 0xB50F04
    static BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData* New_ctor(GlobalNamespace::BeatmapLevelDataSO* beatmapLevelData, GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection, GlobalNamespace::IBeatmapLevel* parentLevel);
    // public UnityEngine.AudioClip get_audioClip()
    // Offset: 0xB515D4
    // Implemented from: IBeatmapLevelData
    // Base method: UnityEngine.AudioClip IBeatmapLevelData::get_audioClip()
    UnityEngine::AudioClip* get_audioClip();
    // public IDifficultyBeatmapSet[] get_difficultyBeatmapSets()
    // Offset: 0xB515DC
    // Implemented from: IBeatmapLevelData
    // Base method: IDifficultyBeatmapSet[] IBeatmapLevelData::get_difficultyBeatmapSets()
    ::Array<GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();
  }; // BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataLoaderSO::BeatmapLevelFromPreview::BeatmapLevelData*, "", "BeatmapLevelDataLoaderSO/BeatmapLevelFromPreview/BeatmapLevelData");
#pragma pack(pop)
