// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:28 PM
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
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: StackTrace
  class StackTrace;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.StackTraceUtility
  class StackTraceUtility : public ::Il2CppObject {
    public:
    // Get static field: static private System.String projectFolder
    static ::Il2CppString* _get_projectFolder();
    // Set static field: static private System.String projectFolder
    static void _set_projectFolder(::Il2CppString* value);
    // static System.Void SetProjectFolder(System.String folder)
    // Offset: 0x1378730
    static void SetProjectFolder(::Il2CppString* folder);
    // static public System.String ExtractStackTrace()
    // Offset: 0x1378828
    static ::Il2CppString* ExtractStackTrace();
    // static System.Void ExtractStringFromExceptionInternal(System.Object exceptiono, System.String message, System.String stackTrace)
    // Offset: 0x1378EC4
    static void ExtractStringFromExceptionInternal(::Il2CppObject* exceptiono, ::Il2CppString*& message, ::Il2CppString*& stackTrace);
    // static System.String ExtractFormattedStackTrace(System.Diagnostics.StackTrace stackTrace)
    // Offset: 0x13788C0
    static ::Il2CppString* ExtractFormattedStackTrace(System::Diagnostics::StackTrace* stackTrace);
    // static private System.Void .cctor()
    // Offset: 0x13791F8
    static void _cctor();
  }; // UnityEngine.StackTraceUtility
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::StackTraceUtility*, "UnityEngine", "StackTraceUtility");
#pragma pack(pop)
