// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:29 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TouchScreenKeyboardType
  struct TouchScreenKeyboardType;
  // Forward declaring type: TouchScreenKeyboard_InternalConstructorHelperArguments
  struct TouchScreenKeyboard_InternalConstructorHelperArguments;
  // Forward declaring type: RangeInt
  struct RangeInt;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.TouchScreenKeyboard
  class TouchScreenKeyboard : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::TouchScreenKeyboard::Status
    struct Status;
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // static private System.Void Internal_Destroy(System.IntPtr ptr)
    // Offset: 0x137C508
    static void Internal_Destroy(System::IntPtr ptr);
    // private System.Void Destroy()
    // Offset: 0x137C548
    void Destroy();
    // public System.Void .ctor(System.String text, UnityEngine.TouchScreenKeyboardType keyboardType, System.Boolean autocorrection, System.Boolean multiline, System.Boolean secure, System.Boolean alert, System.String textPlaceholder, System.Int32 characterLimit)
    // Offset: 0x137C664
    static TouchScreenKeyboard* New_ctor(::Il2CppString* text, UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, ::Il2CppString* textPlaceholder, int characterLimit);
    // static private System.IntPtr TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments arguments, System.String text, System.String textPlaceholder)
    // Offset: 0x137C7C8
    static System::IntPtr TouchScreenKeyboard_InternalConstructorHelper(UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments& arguments, ::Il2CppString* text, ::Il2CppString* textPlaceholder);
    // static public System.Boolean get_isSupported()
    // Offset: 0x137C820
    static bool get_isSupported();
    // static public System.Boolean get_isInPlaceEditingAllowed()
    // Offset: 0x137C88C
    static bool get_isInPlaceEditingAllowed();
    // static public UnityEngine.TouchScreenKeyboard Open(System.String text, UnityEngine.TouchScreenKeyboardType keyboardType, System.Boolean autocorrection, System.Boolean multiline, System.Boolean secure, System.Boolean alert, System.String textPlaceholder, System.Int32 characterLimit)
    // Offset: 0x137C894
    static UnityEngine::TouchScreenKeyboard* Open(::Il2CppString* text, UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, ::Il2CppString* textPlaceholder, int characterLimit);
    // static public UnityEngine.TouchScreenKeyboard Open(System.String text, UnityEngine.TouchScreenKeyboardType keyboardType, System.Boolean autocorrection, System.Boolean multiline, System.Boolean secure)
    // Offset: 0x137C954
    static UnityEngine::TouchScreenKeyboard* Open(::Il2CppString* text, UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure);
    // public System.String get_text()
    // Offset: 0x137C9E8
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x137CA28
    void set_text(::Il2CppString* value);
    // static public System.Void set_hideInput(System.Boolean value)
    // Offset: 0x137CA78
    static void set_hideInput(bool value);
    // public System.Boolean get_active()
    // Offset: 0x137CAB8
    bool get_active();
    // public System.Void set_active(System.Boolean value)
    // Offset: 0x137CAF8
    void set_active(bool value);
    // public UnityEngine.TouchScreenKeyboard/Status get_status()
    // Offset: 0x137CB48
    UnityEngine::TouchScreenKeyboard::Status get_status();
    // public System.Void set_characterLimit(System.Int32 value)
    // Offset: 0x137CB88
    void set_characterLimit(int value);
    // public System.Boolean get_canGetSelection()
    // Offset: 0x137CBD8
    bool get_canGetSelection();
    // public System.Boolean get_canSetSelection()
    // Offset: 0x137CC18
    bool get_canSetSelection();
    // public UnityEngine.RangeInt get_selection()
    // Offset: 0x137CC58
    UnityEngine::RangeInt get_selection();
    // public System.Void set_selection(UnityEngine.RangeInt value)
    // Offset: 0x137CD04
    void set_selection(UnityEngine::RangeInt value);
    // static private System.Void GetSelection(System.Int32 start, System.Int32 length)
    // Offset: 0x137CCB4
    static void GetSelection(int& start, int& length);
    // static private System.Void SetSelection(System.Int32 start, System.Int32 length)
    // Offset: 0x137CE0C
    static void SetSelection(int start, int length);
    // protected override System.Void Finalize()
    // Offset: 0x137C5FC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.TouchScreenKeyboard
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TouchScreenKeyboard*, "UnityEngine", "TouchScreenKeyboard");
#pragma pack(pop)
