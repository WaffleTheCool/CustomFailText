// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:21 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.Timeline.AnimationTrack
#include "UnityEngine/Timeline/AnimationTrack.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.Playables.PlayableBinding
#include "UnityEngine/Playables/PlayableBinding.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49
  class AnimationTrack::$get_outputs$d__49 : public ::Il2CppObject, public System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>, public System::Collections::IEnumerable, public System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>, public System::Collections::IEnumerator, public System::IDisposable {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private UnityEngine.Playables.PlayableBinding <>2__current
    // Offset: 0x18
    UnityEngine::Playables::PlayableBinding $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x38
    int $$l__initialThreadId;
    // public UnityEngine.Timeline.AnimationTrack <>4__this
    // Offset: 0x40
    UnityEngine::Timeline::AnimationTrack* $$4__this;
    // public System.Void .ctor(System.Int32 $$1__state)
    // Offset: 0x107B8F0
    static AnimationTrack::$get_outputs$d__49* New_ctor(int $$1__state);
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x107E864
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x107E868
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // private UnityEngine.Playables.PlayableBinding System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current()
    // Offset: 0x107E904
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator`1::get_Current()
    UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x107E914
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x107E974
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
    // Offset: 0x107E9DC
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable`1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x107EA90
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.Timeline.AnimationTrack/<get_outputs>d__49
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AnimationTrack::$get_outputs$d__49*, "UnityEngine.Timeline", "AnimationTrack/<get_outputs>d__49");
#pragma pack(pop)
