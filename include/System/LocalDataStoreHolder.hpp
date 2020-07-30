// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:24 PM
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: LocalDataStore
  class LocalDataStore;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.LocalDataStoreHolder
  class LocalDataStoreHolder : public ::Il2CppObject {
    public:
    // private System.LocalDataStore m_Store
    // Offset: 0x10
    System::LocalDataStore* m_Store;
    // public System.Void .ctor(System.LocalDataStore store)
    // Offset: 0xFFEEF8
    static LocalDataStoreHolder* New_ctor(System::LocalDataStore* store);
    // public System.LocalDataStore get_Store()
    // Offset: 0xFFEF9C
    System::LocalDataStore* get_Store();
    // protected override System.Void Finalize()
    // Offset: 0xFFEF2C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.LocalDataStoreHolder
}
DEFINE_IL2CPP_ARG_TYPE(System::LocalDataStoreHolder*, "System", "LocalDataStoreHolder");
#pragma pack(pop)
