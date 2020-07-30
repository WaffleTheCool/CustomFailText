// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:34 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.GUISettings
  class GUISettings : public ::Il2CppObject {
    public:
    // private System.Boolean m_DoubleClickSelectsWord
    // Offset: 0x10
    bool m_DoubleClickSelectsWord;
    // private System.Boolean m_TripleClickSelectsLine
    // Offset: 0x11
    bool m_TripleClickSelectsLine;
    // private UnityEngine.Color m_CursorColor
    // Offset: 0x14
    UnityEngine::Color m_CursorColor;
    // private System.Single m_CursorFlashSpeed
    // Offset: 0x24
    float m_CursorFlashSpeed;
    // private UnityEngine.Color m_SelectionColor
    // Offset: 0x28
    UnityEngine::Color m_SelectionColor;
    // static private System.Single Internal_GetCursorFlashSpeed()
    // Offset: 0x125B190
    static float Internal_GetCursorFlashSpeed();
    // public System.Boolean get_doubleClickSelectsWord()
    // Offset: 0x124DCDC
    bool get_doubleClickSelectsWord();
    // public System.Boolean get_tripleClickSelectsLine()
    // Offset: 0x124DDA0
    bool get_tripleClickSelectsLine();
    // public UnityEngine.Color get_cursorColor()
    // Offset: 0x125B1C4
    UnityEngine::Color get_cursorColor();
    // public System.Single get_cursorFlashSpeed()
    // Offset: 0x125B1D0
    float get_cursorFlashSpeed();
    // public UnityEngine.Color get_selectionColor()
    // Offset: 0x125B214
    UnityEngine::Color get_selectionColor();
    // public System.Void .ctor()
    // Offset: 0x125B220
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static GUISettings* New_ctor();
  }; // UnityEngine.GUISettings
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUISettings*, "UnityEngine", "GUISettings");
#pragma pack(pop)
