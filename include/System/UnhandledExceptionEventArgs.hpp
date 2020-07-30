// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.UnhandledExceptionEventArgs
  class UnhandledExceptionEventArgs : public System::EventArgs {
    public:
    // private System.Object _Exception
    // Offset: 0x10
    ::Il2CppObject* Exception;
    // private System.Boolean _IsTerminating
    // Offset: 0x18
    bool IsTerminating;
    // public System.Void .ctor(System.Object exception, System.Boolean isTerminating)
    // Offset: 0x178516C
    static UnhandledExceptionEventArgs* New_ctor(::Il2CppObject* exception, bool isTerminating);
    // public System.Object get_ExceptionObject()
    // Offset: 0x1785200
    ::Il2CppObject* get_ExceptionObject();
    // public System.Boolean get_IsTerminating()
    // Offset: 0x1785208
    bool get_IsTerminating();
  }; // System.UnhandledExceptionEventArgs
}
DEFINE_IL2CPP_ARG_TYPE(System::UnhandledExceptionEventArgs*, "System", "UnhandledExceptionEventArgs");
#pragma pack(pop)
