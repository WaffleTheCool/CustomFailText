// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: Zenject.FactorySubContainerBinderWithParams`1
#include "Zenject/FactorySubContainerBinderWithParams_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass1_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass2_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass3_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass4_0 because it is already included!
  // Forward declaring type: ScopeConcreteIdArgConditionCopyNonLazyBinder
  class ScopeConcreteIdArgConditionCopyNonLazyBinder;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
  class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Forward declaring type: FactorySubContainerBinder`11<TContract, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>
  template<typename TContract, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10>
  class FactorySubContainerBinder_11;
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`11<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
  class Action_11;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactorySubContainerBinder`11
  template<typename TContract, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TParam9, typename TParam10>
  class FactorySubContainerBinder_11 : public Zenject::FactorySubContainerBinderWithParams_1<TContract> {
    public:
    // Nested type: Zenject::FactorySubContainerBinder_11::$$c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>
    class $$c__DisplayClass1_0;
    // Nested type: Zenject::FactorySubContainerBinder_11::$$c__DisplayClass2_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>
    class $$c__DisplayClass2_0;
    // Nested type: Zenject::FactorySubContainerBinder_11::$$c__DisplayClass3_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>
    class $$c__DisplayClass3_0;
    // Nested type: Zenject::FactorySubContainerBinder_11::$$c__DisplayClass4_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>
    class $$c__DisplayClass4_0;
    // Autogenerated type: Zenject.FactorySubContainerBinder`11/<>c__DisplayClass1_0
    class $$c__DisplayClass1_0 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = FactorySubContainerBinder_11<TContract, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>*;
      // public Zenject.FactorySubContainerBinder`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> <>4__this
      // Offset: 0x0
      Zenject::FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* $$4__this;
      // public Zenject.SubContainerCreatorBindInfo subcontainerBindInfo
      // Offset: 0x0
      Zenject::SubContainerCreatorBindInfo* subcontainerBindInfo;
      // public System.Action`11<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> installerMethod
      // Offset: 0x0
      System::Action_11<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>* installerMethod;
      // Zenject.IProvider <ByMethod>b__0(Zenject.DiContainer container)
      // Offset: 0x13A1F00
      Zenject::IProvider* $ByMethod$b__0(Zenject::DiContainer* container) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<ByMethod>b__0", container));
      }
      // public System.Void .ctor()
      // Offset: 0x13A1EE8
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass1_0* New_ctor() {
        return (typename FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass1_0*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass1_0*>::get()));
      }
    }; // Zenject.FactorySubContainerBinder`11/<>c__DisplayClass1_0
    // Autogenerated type: Zenject.FactorySubContainerBinder`11/<>c__DisplayClass2_0
    class $$c__DisplayClass2_0 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = FactorySubContainerBinder_11<TContract, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>*;
      // public Zenject.FactorySubContainerBinder`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> <>4__this
      // Offset: 0x0
      Zenject::FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* $$4__this;
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // public System.Action`11<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> installerMethod
      // Offset: 0x0
      System::Action_11<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>* installerMethod;
      // Zenject.IProvider <ByNewGameObjectMethod>b__0(Zenject.DiContainer container)
      // Offset: 0x13A203C
      Zenject::IProvider* $ByNewGameObjectMethod$b__0(Zenject::DiContainer* container) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<ByNewGameObjectMethod>b__0", container));
      }
      // public System.Void .ctor()
      // Offset: 0x13A2024
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass2_0* New_ctor() {
        return (typename FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass2_0*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass2_0*>::get()));
      }
    }; // Zenject.FactorySubContainerBinder`11/<>c__DisplayClass2_0
    // Autogenerated type: Zenject.FactorySubContainerBinder`11/<>c__DisplayClass3_0
    class $$c__DisplayClass3_0 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = FactorySubContainerBinder_11<TContract, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>*;
      // public Zenject.FactorySubContainerBinder`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> <>4__this
      // Offset: 0x0
      Zenject::FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* $$4__this;
      // public UnityEngine.Object prefab
      // Offset: 0x0
      UnityEngine::Object* prefab;
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // public System.Action`11<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> installerMethod
      // Offset: 0x0
      System::Action_11<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>* installerMethod;
      // Zenject.IProvider <ByNewPrefabMethod>b__0(Zenject.DiContainer container)
      // Offset: 0x13A2178
      Zenject::IProvider* $ByNewPrefabMethod$b__0(Zenject::DiContainer* container) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<ByNewPrefabMethod>b__0", container));
      }
      // public System.Void .ctor()
      // Offset: 0x13A2160
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass3_0* New_ctor() {
        return (typename FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass3_0*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass3_0*>::get()));
      }
    }; // Zenject.FactorySubContainerBinder`11/<>c__DisplayClass3_0
    // Autogenerated type: Zenject.FactorySubContainerBinder`11/<>c__DisplayClass4_0
    class $$c__DisplayClass4_0 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = FactorySubContainerBinder_11<TContract, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>*;
      // public Zenject.FactorySubContainerBinder`11<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10,TContract> <>4__this
      // Offset: 0x0
      Zenject::FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>* $$4__this;
      // public System.String resourcePath
      // Offset: 0x0
      ::Il2CppString* resourcePath;
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // public System.Action`11<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> installerMethod
      // Offset: 0x0
      System::Action_11<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>* installerMethod;
      // Zenject.IProvider <ByNewPrefabResourceMethod>b__0(Zenject.DiContainer container)
      // Offset: 0x13A22E0
      Zenject::IProvider* $ByNewPrefabResourceMethod$b__0(Zenject::DiContainer* container) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<ByNewPrefabResourceMethod>b__0", container));
      }
      // public System.Void .ctor()
      // Offset: 0x13A22C8
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass4_0* New_ctor() {
        return (typename FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass4_0*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactorySubContainerBinder_11<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10, TContract>::$$c__DisplayClass4_0*>::get()));
      }
    }; // Zenject.FactorySubContainerBinder`11/<>c__DisplayClass4_0
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder ByMethod(System.Action`11<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> installerMethod)
    // Offset: 0x13A2454
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByMethod(System::Action_11<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>* installerMethod) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, "ByMethod", installerMethod));
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewGameObjectMethod(System.Action`11<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> installerMethod)
    // Offset: 0x13A25CC
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectMethod(System::Action_11<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>* installerMethod) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, "ByNewGameObjectMethod", installerMethod));
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabMethod(UnityEngine.Object prefab, System.Action`11<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> installerMethod)
    // Offset: 0x13A2758
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabMethod(UnityEngine::Object* prefab, System::Action_11<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>* installerMethod) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, "ByNewPrefabMethod", prefab, installerMethod));
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResourceMethod(System.String resourcePath, System.Action`11<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TParam8,TParam9,TParam10> installerMethod)
    // Offset: 0x13A2908
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceMethod(::Il2CppString* resourcePath, System::Action_11<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>* installerMethod) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, "ByNewPrefabResourceMethod", resourcePath, installerMethod));
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    // Offset: 0x13A2430
    // Implemented from: Zenject.FactorySubContainerBinderWithParams`1
    // Base method: System.Void FactorySubContainerBinderWithParams`1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    // Base method: System.Void FactorySubContainerBinderBase`1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    static FactorySubContainerBinder_11<TContract, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo, ::Il2CppObject* subIdentifier) {
      return (FactorySubContainerBinder_11<TContract, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactorySubContainerBinder_11<TContract, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TParam9, TParam10>*>::get(), bindContainer, bindInfo, factoryBindInfo, subIdentifier));
    }
  }; // Zenject.FactorySubContainerBinder`11
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactorySubContainerBinder_11, "Zenject", "FactorySubContainerBinder`11");
#pragma pack(pop)
