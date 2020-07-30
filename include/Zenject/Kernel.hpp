// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:52 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.IInitializable
#include "Zenject/IInitializable.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Zenject.ITickable
#include "Zenject/ITickable.hpp"
// Including type: Zenject.ILateTickable
#include "Zenject/ILateTickable.hpp"
// Including type: Zenject.IFixedTickable
#include "Zenject/IFixedTickable.hpp"
// Including type: Zenject.ILateDisposable
#include "Zenject/ILateDisposable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: TickableManager
  class TickableManager;
  // Forward declaring type: InitializableManager
  class InitializableManager;
  // Forward declaring type: DisposableManager
  class DisposableManager;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.Kernel
  class Kernel : public ::Il2CppObject, public Zenject::IInitializable, public System::IDisposable, public Zenject::ITickable, public Zenject::ILateTickable, public Zenject::IFixedTickable, public Zenject::ILateDisposable {
    public:
    // private Zenject.TickableManager _tickableManager
    // Offset: 0x10
    Zenject::TickableManager* tickableManager;
    // private Zenject.InitializableManager _initializableManager
    // Offset: 0x18
    Zenject::InitializableManager* initializableManager;
    // private Zenject.DisposableManager _disposablesManager
    // Offset: 0x20
    Zenject::DisposableManager* disposablesManager;
    // public System.Void Initialize()
    // Offset: 0xFAB7EC
    // Implemented from: Zenject.IInitializable
    // Base method: System.Void IInitializable::Initialize()
    void Initialize();
    // public System.Void Dispose()
    // Offset: 0xFAB808
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void LateDispose()
    // Offset: 0xFAB824
    // Implemented from: Zenject.ILateDisposable
    // Base method: System.Void ILateDisposable::LateDispose()
    void LateDispose();
    // public System.Void Tick()
    // Offset: 0xFAB840
    // Implemented from: Zenject.ITickable
    // Base method: System.Void ITickable::Tick()
    void Tick();
    // public System.Void LateTick()
    // Offset: 0xFAB8DC
    // Implemented from: Zenject.ILateTickable
    // Base method: System.Void ILateTickable::LateTick()
    void LateTick();
    // public System.Void FixedTick()
    // Offset: 0xFAB978
    // Implemented from: Zenject.IFixedTickable
    // Base method: System.Void IFixedTickable::FixedTick()
    void FixedTick();
    // public System.Void .ctor()
    // Offset: 0xFABA14
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Kernel* New_ctor();
  }; // Zenject.Kernel
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Kernel*, "Zenject", "Kernel");
#pragma pack(pop)
