// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer
#include "UnityEngine/TestTools/TestRunner/Callbacks/TestResultRenderer.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIStyle
  class GUIStyle;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer/Styles
  class TestResultRenderer::Styles : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.GUIStyle SucceedLabelStyle
    static UnityEngine::GUIStyle* _get_SucceedLabelStyle();
    // Set static field: static public readonly UnityEngine.GUIStyle SucceedLabelStyle
    static void _set_SucceedLabelStyle(UnityEngine::GUIStyle* value);
    // Get static field: static public readonly UnityEngine.GUIStyle FailedLabelStyle
    static UnityEngine::GUIStyle* _get_FailedLabelStyle();
    // Set static field: static public readonly UnityEngine.GUIStyle FailedLabelStyle
    static void _set_FailedLabelStyle(UnityEngine::GUIStyle* value);
    // Get static field: static public readonly UnityEngine.GUIStyle FailedMessagesStyle
    static UnityEngine::GUIStyle* _get_FailedMessagesStyle();
    // Set static field: static public readonly UnityEngine.GUIStyle FailedMessagesStyle
    static void _set_FailedMessagesStyle(UnityEngine::GUIStyle* value);
    // static private System.Void .cctor()
    // Offset: 0xE2F4D8
    static void _cctor();
  }; // UnityEngine.TestTools.TestRunner.Callbacks.TestResultRenderer/Styles
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::Callbacks::TestResultRenderer::Styles*, "UnityEngine.TestTools.TestRunner.Callbacks", "TestResultRenderer/Styles");
#pragma pack(pop)
