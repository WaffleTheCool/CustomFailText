// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_TextElementType
  struct TMP_TextElementType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public TMPro.TMP_TextElementType Character
    static constexpr const int Character = 0;
    // Get static field: static public TMPro.TMP_TextElementType Character
    static TMPro::TMP_TextElementType _get_Character();
    // Set static field: static public TMPro.TMP_TextElementType Character
    static void _set_Character(TMPro::TMP_TextElementType value);
    // static field const value: static public TMPro.TMP_TextElementType Sprite
    static constexpr const int Sprite = 1;
    // Get static field: static public TMPro.TMP_TextElementType Sprite
    static TMPro::TMP_TextElementType _get_Sprite();
    // Set static field: static public TMPro.TMP_TextElementType Sprite
    static void _set_Sprite(TMPro::TMP_TextElementType value);
    // Creating value type constructor for type: TMP_TextElementType
    TMP_TextElementType(int value_ = {}) : value{value_} {}
  }; // TMPro.TMP_TextElementType
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_TextElementType, "TMPro", "TMP_TextElementType");
#pragma pack(pop)
