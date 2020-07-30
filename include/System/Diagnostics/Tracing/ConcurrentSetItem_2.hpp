// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:42 PM
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
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: ConcurrentSetItem`2<ItemType, KeyType>
  template<typename ItemType, typename KeyType>
  class ConcurrentSetItem_2;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.ConcurrentSetItem`2
  template<typename ItemType, typename KeyType>
  class ConcurrentSetItem_2 : public ::Il2CppObject {
    public:
    // public System.Int32 Compare(ItemType other)
    // Offset: 0xFFFFFFFF
    int Compare(ItemType other) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "Compare", other));
    }
    // public System.Int32 Compare(KeyType key)
    // Offset: 0xFFFFFFFF
    int Compare(KeyType key) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(this, "Compare", key));
    }
    // protected System.Void .ctor()
    // Offset: 0x161BEAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ConcurrentSetItem_2<ItemType, KeyType>* New_ctor() {
      return (ConcurrentSetItem_2<ItemType, KeyType>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ConcurrentSetItem_2<ItemType, KeyType>*>::get()));
    }
  }; // System.Diagnostics.Tracing.ConcurrentSetItem`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Diagnostics::Tracing::ConcurrentSetItem_2, "System.Diagnostics.Tracing", "ConcurrentSetItem`2");
#pragma pack(pop)
