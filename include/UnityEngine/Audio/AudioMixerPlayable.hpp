// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayable
#include "UnityEngine/Playables/IPlayable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Playables.PlayableHandle
#include "UnityEngine/Playables/PlayableHandle.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
  // Forward declaring type: Playable
  struct Playable;
}
// Completed forward declares
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Autogenerated type: UnityEngine.Audio.AudioMixerPlayable
  struct AudioMixerPlayable : public System::ValueType, public UnityEngine::Playables::IPlayable, public System::IEquatable_1<UnityEngine::Audio::AudioMixerPlayable> {
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Creating value type constructor for type: AudioMixerPlayable
    AudioMixerPlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) : m_Handle{m_Handle_} {}
    // static public UnityEngine.Audio.AudioMixerPlayable Create(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount, System.Boolean normalizeInputVolumes)
    // Offset: 0x1941A4C
    static UnityEngine::Audio::AudioMixerPlayable Create(UnityEngine::Playables::PlayableGraph graph, int inputCount, bool normalizeInputVolumes);
    // static private UnityEngine.Playables.PlayableHandle CreateHandle(UnityEngine.Playables.PlayableGraph graph, System.Int32 inputCount, System.Boolean normalizeInputVolumes)
    // Offset: 0x1941A8C
    static UnityEngine::Playables::PlayableHandle CreateHandle(UnityEngine::Playables::PlayableGraph graph, int inputCount, bool normalizeInputVolumes);
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0xA5AF28
    static AudioMixerPlayable* New_ctor(UnityEngine::Playables::PlayableHandle handle);
    // static private System.Boolean CreateAudioMixerPlayableInternal(UnityEngine.Playables.PlayableGraph graph, System.Boolean normalizeInputVolumes, UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0x1941C38
    static bool CreateAudioMixerPlayableInternal(UnityEngine::Playables::PlayableGraph& graph, bool normalizeInputVolumes, UnityEngine::Playables::PlayableHandle& handle);
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0xA5AF30
    // Implemented from: UnityEngine.Playables.IPlayable
    // Base method: UnityEngine.Playables.PlayableHandle IPlayable::GetHandle()
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Audio.AudioMixerPlayable other)
    // Offset: 0xA5AF3C
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.Audio.AudioMixerPlayable other)
    bool Equals(UnityEngine::Audio::AudioMixerPlayable other);
  }; // UnityEngine.Audio.AudioMixerPlayable
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioMixerPlayable, "UnityEngine.Audio", "AudioMixerPlayable");
#pragma pack(pop)
