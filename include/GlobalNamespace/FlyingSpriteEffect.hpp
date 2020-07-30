// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:14 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: FlyingObjectEffect
#include "GlobalNamespace/FlyingObjectEffect.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FlyingSpriteEffect
  class FlyingSpriteEffect : public GlobalNamespace::FlyingObjectEffect {
    public:
    // Nested type: GlobalNamespace::FlyingSpriteEffect::Pool
    class Pool;
    // private UnityEngine.SpriteRenderer _spriteRenderer
    // Offset: 0x80
    UnityEngine::SpriteRenderer* spriteRenderer;
    // private UnityEngine.AnimationCurve _fadeAnimationCurve
    // Offset: 0x88
    UnityEngine::AnimationCurve* fadeAnimationCurve;
    // protected UnityEngine.Color _color
    // Offset: 0x90
    UnityEngine::Color color;
    // public System.Void InitAndPresent(System.Single duration, UnityEngine.Vector3 targetPos, UnityEngine.Quaternion rotation, UnityEngine.Sprite sprite, UnityEngine.Material material, UnityEngine.Color color, System.Boolean shake)
    // Offset: 0xBDB460
    void InitAndPresent(float duration, UnityEngine::Vector3 targetPos, UnityEngine::Quaternion rotation, UnityEngine::Sprite* sprite, UnityEngine::Material* material, UnityEngine::Color color, bool shake);
    // protected override System.Void ManualUpdate(System.Single t)
    // Offset: 0xBDB524
    // Implemented from: FlyingObjectEffect
    // Base method: System.Void FlyingObjectEffect::ManualUpdate(System.Single t)
    void ManualUpdate(float t);
    // public System.Void .ctor()
    // Offset: 0xBDB598
    // Implemented from: FlyingObjectEffect
    // Base method: System.Void FlyingObjectEffect::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static FlyingSpriteEffect* New_ctor();
  }; // FlyingSpriteEffect
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingSpriteEffect*, "", "FlyingSpriteEffect");
#pragma pack(pop)
