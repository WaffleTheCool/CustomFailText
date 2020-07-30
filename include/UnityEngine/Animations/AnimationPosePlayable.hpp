// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:24 PM
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
// Completed forward declares
// Type namespace: UnityEngine.Animations
namespace UnityEngine::Animations {
  // Autogenerated type: UnityEngine.Animations.AnimationPosePlayable
  struct AnimationPosePlayable : public System::ValueType, public UnityEngine::Playables::IPlayable, public System::IEquatable_1<UnityEngine::Animations::AnimationPosePlayable> {
    public:
    // private UnityEngine.Playables.PlayableHandle m_Handle
    // Offset: 0x0
    UnityEngine::Playables::PlayableHandle m_Handle;
    // Get static field: static private readonly UnityEngine.Animations.AnimationPosePlayable m_NullPlayable
    static UnityEngine::Animations::AnimationPosePlayable _get_m_NullPlayable();
    // Set static field: static private readonly UnityEngine.Animations.AnimationPosePlayable m_NullPlayable
    static void _set_m_NullPlayable(UnityEngine::Animations::AnimationPosePlayable value);
    // Creating value type constructor for type: AnimationPosePlayable
    AnimationPosePlayable(UnityEngine::Playables::PlayableHandle m_Handle_ = {}) : m_Handle{m_Handle_} {}
    // System.Void .ctor(UnityEngine.Playables.PlayableHandle handle)
    // Offset: 0xA5A0A4
    static AnimationPosePlayable* New_ctor(UnityEngine::Playables::PlayableHandle handle);
    // static private System.Void .cctor()
    // Offset: 0x19252A4
    static void _cctor();
    // public UnityEngine.Playables.PlayableHandle GetHandle()
    // Offset: 0xA5A0AC
    // Implemented from: UnityEngine.Playables.IPlayable
    // Base method: UnityEngine.Playables.PlayableHandle IPlayable::GetHandle()
    UnityEngine::Playables::PlayableHandle GetHandle();
    // public System.Boolean Equals(UnityEngine.Animations.AnimationPosePlayable other)
    // Offset: 0xA5A0B8
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.Animations.AnimationPosePlayable other)
    bool Equals(UnityEngine::Animations::AnimationPosePlayable other);
  }; // UnityEngine.Animations.AnimationPosePlayable
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Animations::AnimationPosePlayable, "UnityEngine.Animations", "AnimationPosePlayable");
#pragma pack(pop)
