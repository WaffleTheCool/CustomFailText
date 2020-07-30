// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LogType
  struct LogType;
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ILogHandler
  class ILogHandler {
    public:
    // public System.Void LogFormat(UnityEngine.LogType logType, UnityEngine.Object context, System.String format, System.Object[] args)
    // Offset: 0xFFFFFFFF
    void LogFormat(UnityEngine::LogType logType, UnityEngine::Object* context, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // public System.Void LogException(System.Exception exception, UnityEngine.Object context)
    // Offset: 0xFFFFFFFF
    void LogException(System::Exception* exception, UnityEngine::Object* context);
  }; // UnityEngine.ILogHandler
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ILogHandler*, "UnityEngine", "ILogHandler");
#pragma pack(pop)
