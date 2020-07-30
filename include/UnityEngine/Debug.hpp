// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:26 PM
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ILogger
  class ILogger;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Color
  struct Color;
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
  // Autogenerated type: UnityEngine.Debug
  class Debug : public ::Il2CppObject {
    public:
    // Get static field: static UnityEngine.ILogger s_Logger
    static UnityEngine::ILogger* _get_s_Logger();
    // Set static field: static UnityEngine.ILogger s_Logger
    static void _set_s_Logger(UnityEngine::ILogger* value);
    // static public UnityEngine.ILogger get_unityLogger()
    // Offset: 0x12F10D0
    static UnityEngine::ILogger* get_unityLogger();
    // static public System.Void DrawLine(UnityEngine.Vector3 start, UnityEngine.Vector3 end, UnityEngine.Color color)
    // Offset: 0x12F1138
    static void DrawLine(UnityEngine::Vector3 start, UnityEngine::Vector3 end, UnityEngine::Color color);
    // static public System.Void DrawLine(UnityEngine.Vector3 start, UnityEngine.Vector3 end, UnityEngine.Color color, System.Single duration, System.Boolean depthTest)
    // Offset: 0x12F1210
    static void DrawLine(UnityEngine::Vector3 start, UnityEngine::Vector3 end, UnityEngine::Color color, float duration, bool depthTest);
    // static public System.Void Log(System.Object message)
    // Offset: 0x12F134C
    static void Log(::Il2CppObject* message);
    // static public System.Void Log(System.Object message, UnityEngine.Object context)
    // Offset: 0x12F142C
    static void Log(::Il2CppObject* message, UnityEngine::Object* context);
    // static public System.Void LogFormat(System.String format, System.Object[] args)
    // Offset: 0x12F151C
    static void LogFormat(::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // static public System.Void LogError(System.Object message)
    // Offset: 0x12F160C
    static void LogError(::Il2CppObject* message);
    // static public System.Void LogError(System.Object message, UnityEngine.Object context)
    // Offset: 0x12F16EC
    static void LogError(::Il2CppObject* message, UnityEngine::Object* context);
    // static public System.Void LogErrorFormat(System.String format, System.Object[] args)
    // Offset: 0x12F17DC
    static void LogErrorFormat(::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // static public System.Void LogErrorFormat(UnityEngine.Object context, System.String format, System.Object[] args)
    // Offset: 0x12F18CC
    static void LogErrorFormat(UnityEngine::Object* context, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // static public System.Void LogException(System.Exception exception)
    // Offset: 0x12E8EA8
    static void LogException(System::Exception* exception);
    // static public System.Void LogException(System.Exception exception, UnityEngine.Object context)
    // Offset: 0x12F19C0
    static void LogException(System::Exception* exception, UnityEngine::Object* context);
    // static public System.Void LogWarning(System.Object message)
    // Offset: 0x12F1AAC
    static void LogWarning(::Il2CppObject* message);
    // static public System.Void LogWarning(System.Object message, UnityEngine.Object context)
    // Offset: 0x12F1B8C
    static void LogWarning(::Il2CppObject* message, UnityEngine::Object* context);
    // static public System.Void LogWarningFormat(System.String format, System.Object[] args)
    // Offset: 0x12F1C7C
    static void LogWarningFormat(::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // static public System.Void LogWarningFormat(UnityEngine.Object context, System.String format, System.Object[] args)
    // Offset: 0x12F1D6C
    static void LogWarningFormat(UnityEngine::Object* context, ::Il2CppString* format, ::Array<::Il2CppObject*>* args);
    // static public System.Void LogAssertion(System.Object message)
    // Offset: 0x12E94D8
    static void LogAssertion(::Il2CppObject* message);
    // static public System.Boolean get_isDebugBuild()
    // Offset: 0x12F1E60
    static bool get_isDebugBuild();
    // static System.Boolean CallOverridenDebugHandler(System.Exception exception, UnityEngine.Object obj)
    // Offset: 0x12F1E94
    static bool CallOverridenDebugHandler(System::Exception* exception, UnityEngine::Object* obj);
    // static private System.Void .cctor()
    // Offset: 0x12F2040
    static void _cctor();
    // static private System.Void DrawLine_Injected(UnityEngine.Vector3 start, UnityEngine.Vector3 end, UnityEngine.Color color, System.Single duration, System.Boolean depthTest)
    // Offset: 0x12F12D4
    static void DrawLine_Injected(UnityEngine::Vector3& start, UnityEngine::Vector3& end, UnityEngine::Color& color, float duration, bool depthTest);
  }; // UnityEngine.Debug
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Debug*, "UnityEngine", "Debug");
#pragma pack(pop)
