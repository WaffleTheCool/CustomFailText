// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:48 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.IDespawnableMemoryPool`1
#include "Zenject/IDespawnableMemoryPool_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.IMemoryPool`3
  template<typename TValue, typename TParam1, typename TParam2>
  class IMemoryPool_3 : public Zenject::IDespawnableMemoryPool_1<TValue>, public Zenject::IMemoryPool {
    public:
    // public TValue Spawn(TParam1 param1, TParam2 param2)
    // Offset: 0xFFFFFFFF
    TValue Spawn(TParam1 param1, TParam2 param2) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Spawn", param1, param2));
    }
  }; // Zenject.IMemoryPool`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::IMemoryPool_3, "Zenject", "IMemoryPool`3");
#pragma pack(pop)
