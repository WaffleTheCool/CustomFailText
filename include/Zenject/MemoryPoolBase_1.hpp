// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:48 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.IValidatable
#include "Zenject/IValidatable.hpp"
// Including type: Zenject.IMemoryPool
#include "Zenject/IMemoryPool.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IFactory`1<TValue>
  template<typename TValue>
  class IFactory_1;
  // Forward declaring type: MemoryPoolSettings
  class MemoryPoolSettings;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MemoryPoolBase`1
  template<typename TContract>
  class MemoryPoolBase_1 : public ::Il2CppObject, public Zenject::IValidatable, public Zenject::IMemoryPool, public System::IDisposable {
    public:
    // private System.Collections.Generic.Stack`1<TContract> _inactiveItems
    // Offset: 0x0
    System::Collections::Generic::Stack_1<TContract>* inactiveItems;
    // private Zenject.IFactory`1<TContract> _factory
    // Offset: 0x0
    Zenject::IFactory_1<TContract>* factory;
    // private Zenject.MemoryPoolSettings _settings
    // Offset: 0x0
    Zenject::MemoryPoolSettings* settings;
    // private Zenject.DiContainer _container
    // Offset: 0x0
    Zenject::DiContainer* container;
    // private System.Int32 _activeCount
    // Offset: 0x0
    int activeCount;
    // private System.Void Construct(Zenject.IFactory`1<TContract> factory, Zenject.DiContainer container, Zenject.MemoryPoolSettings settings)
    // Offset: 0x13B0AC8
    void Construct(Zenject::IFactory_1<TContract>* factory, Zenject::DiContainer* container, Zenject::MemoryPoolSettings* settings) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Construct", factory, container, settings));
    }
    // protected Zenject.DiContainer get_Container()
    // Offset: 0x13B0C68
    Zenject::DiContainer* get_Container() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "get_Container"));
    }
    // public System.Collections.Generic.IEnumerable`1<TContract> get_InactiveItems()
    // Offset: 0x13B0C70
    System::Collections::Generic::IEnumerable_1<TContract>* get_InactiveItems() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<TContract>*>(this, "get_InactiveItems"));
    }
    // public System.Void Despawn(TContract item)
    // Offset: 0x13B0E18
    void Despawn(TContract item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Despawn", item));
    }
    // private TContract AllocNew()
    // Offset: 0x13B0F54
    TContract AllocNew() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TContract>(this, "AllocNew"));
    }
    // protected TContract GetInternal()
    // Offset: 0x13B1510
    TContract GetInternal() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TContract>(this, "GetInternal"));
    }
    // private System.Void ExpandPool()
    // Offset: 0x13B18C0
    void ExpandPool() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "ExpandPool"));
    }
    // protected System.Void OnDespawned(TContract item)
    // Offset: 0x13B1AC0
    void OnDespawned(TContract item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnDespawned", item));
    }
    // protected System.Void OnSpawned(TContract item)
    // Offset: 0x13B1AC4
    void OnSpawned(TContract item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnSpawned", item));
    }
    // protected System.Void OnCreated(TContract item)
    // Offset: 0x13B1AC8
    void OnCreated(TContract item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnCreated", item));
    }
    // protected System.Void OnDestroyed(TContract item)
    // Offset: 0x13B1ACC
    void OnDestroyed(TContract item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroyed", item));
    }
    // public System.Int32 get_NumTotal()
    // Offset: 0x13B0C78
    // Implemented from: Zenject.IMemoryPool
    // Base method: System.Int32 IMemoryPool::get_NumTotal()
    int get_NumTotal() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_NumTotal"));
    }
    // public System.Int32 get_NumInactive()
    // Offset: 0x13B0CD4
    // Implemented from: Zenject.IMemoryPool
    // Base method: System.Int32 IMemoryPool::get_NumInactive()
    int get_NumInactive() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_NumInactive"));
    }
    // public System.Int32 get_NumActive()
    // Offset: 0x13B0CFC
    // Implemented from: Zenject.IMemoryPool
    // Base method: System.Int32 IMemoryPool::get_NumActive()
    int get_NumActive() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_NumActive"));
    }
    // public System.Type get_ItemType()
    // Offset: 0x13B0D04
    // Implemented from: Zenject.IMemoryPool
    // Base method: System.Type IMemoryPool::get_ItemType()
    System::Type* get_ItemType() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Type*>(this, "get_ItemType"));
    }
    // public System.Void Dispose()
    // Offset: 0x13B0D78
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Dispose"));
    }
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose() {
      Dispose();
    }
    // private System.Void Zenject.IMemoryPool.Despawn(System.Object item)
    // Offset: 0x13B0D7C
    // Implemented from: Zenject.IMemoryPool
    // Base method: System.Void IMemoryPool::Despawn(System.Object item)
    void Zenject_IMemoryPool_Despawn(::Il2CppObject* item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Zenject.IMemoryPool.Despawn", item));
    }
    // private System.Void Zenject.IValidatable.Validate()
    // Offset: 0x13B1234
    // Implemented from: Zenject.IValidatable
    // Base method: System.Void IValidatable::Validate()
    void Zenject_IValidatable_Validate() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Zenject.IValidatable.Validate"));
    }
    // public System.Void Clear()
    // Offset: 0x13B1420
    // Implemented from: Zenject.IMemoryPool
    // Base method: System.Void IMemoryPool::Clear()
    void Clear() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
    }
    // public System.Void ShrinkBy(System.Int32 numToRemove)
    // Offset: 0x13B1448
    // Implemented from: Zenject.IMemoryPool
    // Base method: System.Void IMemoryPool::ShrinkBy(System.Int32 numToRemove)
    void ShrinkBy(int numToRemove) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "ShrinkBy", numToRemove));
    }
    // public System.Void ExpandBy(System.Int32 numToAdd)
    // Offset: 0x13B14AC
    // Implemented from: Zenject.IMemoryPool
    // Base method: System.Void IMemoryPool::ExpandBy(System.Int32 numToAdd)
    void ExpandBy(int numToAdd) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "ExpandBy", numToAdd));
    }
    // public System.Void Resize(System.Int32 desiredPoolSize)
    // Offset: 0x13B15DC
    // Implemented from: Zenject.IMemoryPool
    // Base method: System.Void IMemoryPool::Resize(System.Int32 desiredPoolSize)
    void Resize(int desiredPoolSize) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Resize", desiredPoolSize));
    }
    // public System.Void .ctor()
    // Offset: 0x13B1AD0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MemoryPoolBase_1<TContract>* New_ctor() {
      return (MemoryPoolBase_1<TContract>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MemoryPoolBase_1<TContract>*>::get()));
    }
  }; // Zenject.MemoryPoolBase`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPoolBase_1, "Zenject", "MemoryPoolBase`1");
#pragma pack(pop)
