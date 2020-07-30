// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Component
  class Component;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass66_1
  class FromBinder::$$c__DisplayClass66_1 : public ::Il2CppObject {
    public:
    // public Zenject.DiContainer container
    // Offset: 0x10
    Zenject::DiContainer* container;
    // public System.Type concreteType
    // Offset: 0x18
    System::Type* concreteType;
    // public Zenject.FromBinder/<>c__DisplayClass66_0 CS$<>8__locals1
    // Offset: 0x20
    Zenject::FromBinder::$$c__DisplayClass66_0* CS$$$8__locals1;
    // public System.Func`2<UnityEngine.GameObject,System.Collections.Generic.IEnumerable`1<UnityEngine.Component>> <>9__2
    // Offset: 0x28
    System::Func_2<UnityEngine::GameObject*, System::Collections::Generic::IEnumerable_1<UnityEngine::Component*>*>* $$9__2;
    // System.Collections.Generic.IEnumerable`1<System.Object> <FromComponentsInHierarchyBase>b__1(Zenject.InjectContext ctx)
    // Offset: 0xF22254
    System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* $FromComponentsInHierarchyBase$b__1(Zenject::InjectContext* ctx);
    // System.Collections.Generic.IEnumerable`1<UnityEngine.Component> <FromComponentsInHierarchyBase>b__2(UnityEngine.GameObject x)
    // Offset: 0xF223F0
    System::Collections::Generic::IEnumerable_1<UnityEngine::Component*>* $FromComponentsInHierarchyBase$b__2(UnityEngine::GameObject* x);
    // public System.Void .ctor()
    // Offset: 0xF2224C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FromBinder::$$c__DisplayClass66_1* New_ctor();
  }; // Zenject.FromBinder/<>c__DisplayClass66_1
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass66_1*, "Zenject", "FromBinder/<>c__DisplayClass66_1");
#pragma pack(pop)
