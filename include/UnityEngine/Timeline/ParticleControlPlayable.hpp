// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:23 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: ScriptPlayable`1<T>
  template<typename T>
  struct ScriptPlayable_1;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.ParticleControlPlayable
  class ParticleControlPlayable : public UnityEngine::Playables::PlayableBehaviour {
    public:
    // static field const value: static private System.Single kUnsetTime
    static constexpr const float kUnsetTime = -1;
    // Get static field: static private System.Single kUnsetTime
    static float _get_kUnsetTime();
    // Set static field: static private System.Single kUnsetTime
    static void _set_kUnsetTime(float value);
    // private System.Single m_LastTime
    // Offset: 0x10
    float m_LastTime;
    // private System.UInt32 m_RandomSeed
    // Offset: 0x14
    uint m_RandomSeed;
    // private System.Single m_SystemTime
    // Offset: 0x18
    float m_SystemTime;
    // private UnityEngine.ParticleSystem <particleSystem>k__BackingField
    // Offset: 0x20
    UnityEngine::ParticleSystem* particleSystem;
    // static public UnityEngine.Playables.ScriptPlayable`1<UnityEngine.Timeline.ParticleControlPlayable> Create(UnityEngine.Playables.PlayableGraph graph, UnityEngine.ParticleSystem component, System.UInt32 randomSeed)
    // Offset: 0x10822C0
    static UnityEngine::Playables::ScriptPlayable_1<UnityEngine::Timeline::ParticleControlPlayable*> Create(UnityEngine::Playables::PlayableGraph graph, UnityEngine::ParticleSystem* component, uint randomSeed);
    // public UnityEngine.ParticleSystem get_particleSystem()
    // Offset: 0x108778C
    UnityEngine::ParticleSystem* get_particleSystem();
    // private System.Void set_particleSystem(UnityEngine.ParticleSystem value)
    // Offset: 0x1087794
    void set_particleSystem(UnityEngine::ParticleSystem* value);
    // public System.Void Initialize(UnityEngine.ParticleSystem ps, System.UInt32 randomSeed)
    // Offset: 0x10876F0
    void Initialize(UnityEngine::ParticleSystem* ps, uint randomSeed);
    // private System.Void SetRandomSeed()
    // Offset: 0x108779C
    void SetRandomSeed();
    // public override System.Void PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData data)
    // Offset: 0x10878A4
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::PrepareFrame(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData data)
    void PrepareFrame(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData data);
    // public override System.Void OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1087C10
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPlay(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPlay(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public override System.Void OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    // Offset: 0x1087C1C
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::OnBehaviourPause(UnityEngine.Playables.Playable playable, UnityEngine.Playables.FrameData info)
    void OnBehaviourPause(UnityEngine::Playables::Playable playable, UnityEngine::Playables::FrameData info);
    // public System.Void .ctor()
    // Offset: 0x1087C28
    // Implemented from: UnityEngine.Playables.PlayableBehaviour
    // Base method: System.Void PlayableBehaviour::.ctor()
    // Base method: System.Void Object::.ctor()
    static ParticleControlPlayable* New_ctor();
  }; // UnityEngine.Timeline.ParticleControlPlayable
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::ParticleControlPlayable*, "UnityEngine.Timeline", "ParticleControlPlayable");
#pragma pack(pop)
