// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.MemoryPool`8
#include "Zenject/MemoryPool_8.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7>
  class IPoolable_7;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PoolableMemoryPool`8
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TValue>
  class PoolableMemoryPool_8 : public Zenject::MemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue> {
    public:
    // protected System.Void OnDespawned(TValue item)
    // Offset: 0x15DB594
    void OnDespawned(TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnDespawned", item));
    }
    // protected System.Void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TValue item)
    // Offset: 0x15DB630
    // Implemented from: Zenject.MemoryPool`8
    // Base method: System.Void MemoryPool`8::Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TValue item)
    void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TValue item) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "Reinitialize", p1, p2, p3, p4, p5, p6, p7, item));
    }
    // public System.Void .ctor()
    // Offset: 0x15DB730
    // Implemented from: Zenject.MemoryPool`8
    // Base method: System.Void MemoryPool`8::.ctor()
    // Base method: System.Void MemoryPoolBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static PoolableMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>* New_ctor() {
      return (PoolableMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolableMemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TValue>*>::get()));
    }
  }; // Zenject.PoolableMemoryPool`8
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableMemoryPool_8, "Zenject", "PoolableMemoryPool`8");
#pragma pack(pop)
