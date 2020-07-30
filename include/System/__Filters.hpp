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
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.__Filters
  class __Filters : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.__Filters Instance
    static System::__Filters* _get_Instance();
    // Set static field: static readonly System.__Filters Instance
    static void _set_Instance(System::__Filters* value);
    // System.Boolean FilterAttribute(System.Reflection.MemberInfo m, System.Object filterCriteria)
    // Offset: 0x1789A64
    bool FilterAttribute(System::Reflection::MemberInfo* m, ::Il2CppObject* filterCriteria);
    // System.Boolean FilterName(System.Reflection.MemberInfo m, System.Object filterCriteria)
    // Offset: 0x1789DBC
    bool FilterName(System::Reflection::MemberInfo* m, ::Il2CppObject* filterCriteria);
    // System.Boolean FilterIgnoreCase(System.Reflection.MemberInfo m, System.Object filterCriteria)
    // Offset: 0x1789F54
    bool FilterIgnoreCase(System::Reflection::MemberInfo* m, ::Il2CppObject* filterCriteria);
    // static private System.Void .cctor()
    // Offset: 0x178A104
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x178A0FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static __Filters* New_ctor();
  }; // System.__Filters
}
DEFINE_IL2CPP_ARG_TYPE(System::__Filters*, "System", "__Filters");
#pragma pack(pop)
