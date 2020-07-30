// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableBinding
  struct PlayableBinding;
  // Forward declaring type: PlayableOutput
  struct PlayableOutput;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: UnityEngine.Audio
namespace UnityEngine::Audio {
  // Autogenerated type: UnityEngine.Audio.AudioPlayableBinding
  class AudioPlayableBinding : public ::Il2CppObject {
    public:
    // static public UnityEngine.Playables.PlayableBinding Create(System.String name, UnityEngine.Object key)
    // Offset: 0x1941D58
    static UnityEngine::Playables::PlayableBinding Create(::Il2CppString* name, UnityEngine::Object* key);
    // static private UnityEngine.Playables.PlayableOutput CreateAudioOutput(UnityEngine.Playables.PlayableGraph graph, System.String name)
    // Offset: 0x1941E78
    static UnityEngine::Playables::PlayableOutput CreateAudioOutput(UnityEngine::Playables::PlayableGraph graph, ::Il2CppString* name);
  }; // UnityEngine.Audio.AudioPlayableBinding
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioPlayableBinding*, "UnityEngine.Audio", "AudioPlayableBinding");
#pragma pack(pop)
