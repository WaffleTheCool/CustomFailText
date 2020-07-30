// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:23 PM
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
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: AnimationClip
  class AnimationClip;
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.IPropertyCollector
  class IPropertyCollector {
    public:
    // public System.Void PushActiveGameObject(UnityEngine.GameObject gameObject)
    // Offset: 0xFFFFFFFF
    void PushActiveGameObject(UnityEngine::GameObject* gameObject);
    // public System.Void PopActiveGameObject()
    // Offset: 0xFFFFFFFF
    void PopActiveGameObject();
    // public System.Void AddFromClip(UnityEngine.AnimationClip clip)
    // Offset: 0xFFFFFFFF
    void AddFromClip(UnityEngine::AnimationClip* clip);
    // public System.Void AddFromClips(System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationClip> clips)
    // Offset: 0xFFFFFFFF
    void AddFromClips(System::Collections::Generic::IEnumerable_1<UnityEngine::AnimationClip*>* clips);
    // public System.Void AddFromName(System.String name)
    // Offset: 0xFFFFFFFF
    template<class T>
    void AddFromName(::Il2CppString* name) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod(this, "AddFromName", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, name));
    }
    // public System.Void AddFromName(System.String name)
    // Offset: 0xFFFFFFFF
    // ABORTED: conflicts with another method. void AddFromName(::Il2CppString* name);
    // public System.Void AddFromClip(UnityEngine.GameObject obj, UnityEngine.AnimationClip clip)
    // Offset: 0xFFFFFFFF
    void AddFromClip(UnityEngine::GameObject* obj, UnityEngine::AnimationClip* clip);
    // public System.Void AddFromClips(UnityEngine.GameObject obj, System.Collections.Generic.IEnumerable`1<UnityEngine.AnimationClip> clips)
    // Offset: 0xFFFFFFFF
    void AddFromClips(UnityEngine::GameObject* obj, System::Collections::Generic::IEnumerable_1<UnityEngine::AnimationClip*>* clips);
    // public System.Void AddFromName(UnityEngine.GameObject obj, System.String name)
    // Offset: 0xFFFFFFFF
    template<class T>
    void AddFromName(UnityEngine::GameObject* obj, ::Il2CppString* name) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod(this, "AddFromName", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, obj, name));
    }
    // public System.Void AddFromName(UnityEngine.GameObject obj, System.String name)
    // Offset: 0xFFFFFFFF
    // ABORTED: conflicts with another method. void AddFromName(UnityEngine::GameObject* obj, ::Il2CppString* name);
    // public System.Void AddFromName(UnityEngine.Component component, System.String name)
    // Offset: 0xFFFFFFFF
    void AddFromName(UnityEngine::Component* component, ::Il2CppString* name);
    // public System.Void AddFromComponent(UnityEngine.GameObject obj, UnityEngine.Component component)
    // Offset: 0xFFFFFFFF
    void AddFromComponent(UnityEngine::GameObject* obj, UnityEngine::Component* component);
    // public System.Void AddObjectProperties(UnityEngine.Object obj, UnityEngine.AnimationClip clip)
    // Offset: 0xFFFFFFFF
    void AddObjectProperties(UnityEngine::Object* obj, UnityEngine::AnimationClip* clip);
  }; // UnityEngine.Timeline.IPropertyCollector
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::IPropertyCollector*, "UnityEngine.Timeline", "IPropertyCollector");
#pragma pack(pop)
