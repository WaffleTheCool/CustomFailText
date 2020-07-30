// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:14 PM
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
  // Forward declaring type: NoteCutParticlesEffect
  class NoteCutParticlesEffect;
  // Forward declaring type: NoteDebrisSpawner
  class NoteDebrisSpawner;
  // Forward declaring type: NoteCutHapticEffect
  class NoteCutHapticEffect;
  // Forward declaring type: FlyingSpriteSpawner
  class FlyingSpriteSpawner;
  // Forward declaring type: FlyingScoreSpawner
  class FlyingScoreSpawner;
  // Forward declaring type: ShockwaveEffect
  class ShockwaveEffect;
  // Forward declaring type: BombExplosionEffect
  class BombExplosionEffect;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: ScoreController
  class ScoreController;
  // Forward declaring type: INoteController
  class INoteController;
  // Forward declaring type: NoteCutInfo
  class NoteCutInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteCutEffectSpawner
  class NoteCutEffectSpawner : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::NoteCutEffectSpawner::InitData
    class InitData;
    // private System.Single _shockWaveYPos
    // Offset: 0x18
    float shockWaveYPos;
    // private NoteCutParticlesEffect _noteCutParticlesEffect
    // Offset: 0x20
    GlobalNamespace::NoteCutParticlesEffect* noteCutParticlesEffect;
    // private NoteDebrisSpawner _noteDebrisSpawner
    // Offset: 0x28
    GlobalNamespace::NoteDebrisSpawner* noteDebrisSpawner;
    // private NoteCutHapticEffect _noteCutHapticEffect
    // Offset: 0x30
    GlobalNamespace::NoteCutHapticEffect* noteCutHapticEffect;
    // private FlyingSpriteSpawner _failFlyingSpriteSpawner
    // Offset: 0x38
    GlobalNamespace::FlyingSpriteSpawner* failFlyingSpriteSpawner;
    // private FlyingScoreSpawner _flyingScoreSpawner
    // Offset: 0x40
    GlobalNamespace::FlyingScoreSpawner* flyingScoreSpawner;
    // private ShockwaveEffect _shockwaveEffect
    // Offset: 0x48
    GlobalNamespace::ShockwaveEffect* shockwaveEffect;
    // private BombExplosionEffect _bombExplosionEffect
    // Offset: 0x50
    GlobalNamespace::BombExplosionEffect* bombExplosionEffect;
    // private NoteCutEffectSpawner/InitData _initData
    // Offset: 0x58
    GlobalNamespace::NoteCutEffectSpawner::InitData* initData;
    // private ColorManager _colorManager
    // Offset: 0x60
    GlobalNamespace::ColorManager* colorManager;
    // private BeatmapObjectManager _beatmapObjectManager
    // Offset: 0x68
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // private ScoreController _scoreController
    // Offset: 0x70
    GlobalNamespace::ScoreController* scoreController;
    // protected System.Void Start()
    // Offset: 0xBFFFD4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xC00068
    void OnDestroy();
    // private System.Void HandleNoteWasCutEvent(INoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0xC00144
    void HandleNoteWasCutEvent(GlobalNamespace::INoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // private System.Void SpawnNoteCutEffect(UnityEngine.Vector3 pos, INoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0xC00510
    void SpawnNoteCutEffect(UnityEngine::Vector3 pos, GlobalNamespace::INoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // private System.Void SpawnBombCutEffect(UnityEngine.Vector3 pos, INoteController noteController, NoteCutInfo noteCutInfo)
    // Offset: 0xC0033C
    void SpawnBombCutEffect(UnityEngine::Vector3 pos, GlobalNamespace::INoteController* noteController, GlobalNamespace::NoteCutInfo* noteCutInfo);
    // public System.Void .ctor()
    // Offset: 0xC01720
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NoteCutEffectSpawner* New_ctor();
  }; // NoteCutEffectSpawner
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutEffectSpawner*, "", "NoteCutEffectSpawner");
#pragma pack(pop)
