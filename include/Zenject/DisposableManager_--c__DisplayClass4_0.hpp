// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:51 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.DisposableManager
#include "Zenject/DisposableManager.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IDisposable
  class IDisposable;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.DisposableManager/<>c__DisplayClass4_0
  class DisposableManager::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    // public System.IDisposable disposable
    // Offset: 0x10
    System::IDisposable* disposable;
    // System.Boolean <.ctor>b__0(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0xF19A78
    bool $_ctor$b__0(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // public System.Void .ctor()
    // Offset: 0xF18E90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DisposableManager::$$c__DisplayClass4_0* New_ctor();
  }; // Zenject.DisposableManager/<>c__DisplayClass4_0
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::DisposableManager::$$c__DisplayClass4_0*, "Zenject", "DisposableManager/<>c__DisplayClass4_0");
#pragma pack(pop)
