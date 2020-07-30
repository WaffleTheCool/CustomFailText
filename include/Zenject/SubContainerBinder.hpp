// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:47 PM
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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: BindStatement
  class BindStatement;
  // Forward declaring type: IBindingFinalizer
  class IBindingFinalizer;
  // Forward declaring type: ScopeConcreteIdArgConditionCopyNonLazyBinder
  class ScopeConcreteIdArgConditionCopyNonLazyBinder;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: InstallerBase
  class InstallerBase;
  // Forward declaring type: WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
  class WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder;
  // Forward declaring type: NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
  class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SubContainerBinder
  class SubContainerBinder : public ::Il2CppObject {
    public:
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass11_0
    class $$c__DisplayClass11_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass15_0
    class $$c__DisplayClass15_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass17_0
    class $$c__DisplayClass17_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass18_0
    class $$c__DisplayClass18_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass20_0
    class $$c__DisplayClass20_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass22_0
    class $$c__DisplayClass22_0;
    // Nested type: Zenject::SubContainerBinder::$$c__DisplayClass24_0
    class $$c__DisplayClass24_0;
    // private readonly Zenject.BindInfo _bindInfo
    // Offset: 0x10
    Zenject::BindInfo* bindInfo;
    // private readonly Zenject.BindStatement _bindStatement
    // Offset: 0x18
    Zenject::BindStatement* bindStatement;
    // private readonly System.Object _subIdentifier
    // Offset: 0x20
    ::Il2CppObject* subIdentifier;
    // private readonly System.Boolean _resolveAll
    // Offset: 0x28
    bool resolveAll;
    // public System.Void .ctor(Zenject.BindInfo bindInfo, Zenject.BindStatement bindStatement, System.Object subIdentifier, System.Boolean resolveAll)
    // Offset: 0xFB7380
    static SubContainerBinder* New_ctor(Zenject::BindInfo* bindInfo, Zenject::BindStatement* bindStatement, ::Il2CppObject* subIdentifier, bool resolveAll);
    // protected System.Void set_SubFinalizer(Zenject.IBindingFinalizer value)
    // Offset: 0xFB7410
    void set_SubFinalizer(Zenject::IBindingFinalizer* value);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder ByInstance(Zenject.DiContainer subContainer)
    // Offset: 0xFB742C
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstance(Zenject::DiContainer* subContainer);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder ByInstanceGetter(System.Func`2<Zenject.InjectContext,Zenject.DiContainer> subContainerGetter)
    // Offset: 0xFB75E0
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstanceGetter(System::Func_2<Zenject::InjectContext*, Zenject::DiContainer*>* subContainerGetter);
    // public Zenject.WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder ByInstaller()
    // Offset: 0x13DC228
    template<class TInstaller>
    Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstaller() {
      static_assert(std::is_convertible_v<TInstaller, Zenject::InstallerBase*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, "ByInstaller", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
    }
    // public Zenject.WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder ByInstaller(System.Type installerType)
    // Offset: 0xFB771C
    Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstaller(System::Type* installerType);
    // public Zenject.WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder ByMethod(System.Action`1<Zenject.DiContainer> installerMethod)
    // Offset: 0xFB78F0
    Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* ByMethod(System::Action_1<Zenject::DiContainer*>* installerMethod);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewGameObjectMethod(System.Action`1<Zenject.DiContainer> installerMethod)
    // Offset: 0xFB7A64
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectMethod(System::Action_1<Zenject::DiContainer*>* installerMethod);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabMethod(UnityEngine.Object prefab, System.Action`1<Zenject.DiContainer> installerMethod)
    // Offset: 0xFB7C5C
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabMethod(UnityEngine::Object* prefab, System::Action_1<Zenject::DiContainer*>* installerMethod);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewGameObjectInstaller()
    // Offset: 0x13DAD0C
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectInstaller() {
      static_assert(std::is_convertible_v<TInstaller, Zenject::InstallerBase*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, "ByNewGameObjectInstaller", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewGameObjectInstaller(System.Type installerType)
    // Offset: 0xFB7E00
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectInstaller(System::Type* installerType);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabInstaller(UnityEngine.Object prefab)
    // Offset: 0x13DADA0
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabInstaller(UnityEngine::Object* prefab) {
      static_assert(std::is_convertible_v<TInstaller, Zenject::InstallerBase*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, "ByNewPrefabInstaller", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, prefab));
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabInstaller(UnityEngine.Object prefab, System.Type installerType)
    // Offset: 0xFB7FE8
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabInstaller(UnityEngine::Object* prefab, System::Type* installerType);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResourceMethod(System.String resourcePath, System.Action`1<Zenject.DiContainer> installerMethod)
    // Offset: 0xFB81E4
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceMethod(::Il2CppString* resourcePath, System::Action_1<Zenject::DiContainer*>* installerMethod);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResourceInstaller(System.String resourcePath)
    // Offset: 0x13DAE3C
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceInstaller(::Il2CppString* resourcePath) {
      static_assert(std::is_convertible_v<TInstaller, Zenject::InstallerBase*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*>(this, "ByNewPrefabResourceInstaller", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, resourcePath));
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResourceInstaller(System.String resourcePath, System.Type installerType)
    // Offset: 0xFB8388
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceInstaller(::Il2CppString* resourcePath, System::Type* installerType);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefab(UnityEngine.Object prefab)
    // Offset: 0xFB8594
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefab(UnityEngine::Object* prefab);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefab(UnityEngine.Object prefab)
    // Offset: 0xFB8598
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefab(UnityEngine::Object* prefab);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResource(System.String resourcePath)
    // Offset: 0xFB8728
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResource(::Il2CppString* resourcePath);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefabResource(System.String resourcePath)
    // Offset: 0xFB872C
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefabResource(::Il2CppString* resourcePath);
  }; // Zenject.SubContainerBinder
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerBinder*, "Zenject", "SubContainerBinder");
#pragma pack(pop)
