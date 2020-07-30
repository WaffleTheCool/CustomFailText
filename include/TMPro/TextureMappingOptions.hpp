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
  // Autogenerated type: TMPro.TextureMappingOptions
  struct TextureMappingOptions : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public TMPro.TextureMappingOptions Character
    static constexpr const int Character = 0;
    // Get static field: static public TMPro.TextureMappingOptions Character
    static TMPro::TextureMappingOptions _get_Character();
    // Set static field: static public TMPro.TextureMappingOptions Character
    static void _set_Character(TMPro::TextureMappingOptions value);
    // static field const value: static public TMPro.TextureMappingOptions Line
    static constexpr const int Line = 1;
    // Get static field: static public TMPro.TextureMappingOptions Line
    static TMPro::TextureMappingOptions _get_Line();
    // Set static field: static public TMPro.TextureMappingOptions Line
    static void _set_Line(TMPro::TextureMappingOptions value);
    // static field const value: static public TMPro.TextureMappingOptions Paragraph
    static constexpr const int Paragraph = 2;
    // Get static field: static public TMPro.TextureMappingOptions Paragraph
    static TMPro::TextureMappingOptions _get_Paragraph();
    // Set static field: static public TMPro.TextureMappingOptions Paragraph
    static void _set_Paragraph(TMPro::TextureMappingOptions value);
    // static field const value: static public TMPro.TextureMappingOptions MatchAspect
    static constexpr const int MatchAspect = 3;
    // Get static field: static public TMPro.TextureMappingOptions MatchAspect
    static TMPro::TextureMappingOptions _get_MatchAspect();
    // Set static field: static public TMPro.TextureMappingOptions MatchAspect
    static void _set_MatchAspect(TMPro::TextureMappingOptions value);
    // Creating value type constructor for type: TextureMappingOptions
    TextureMappingOptions(int value_ = {}) : value{value_} {}
  }; // TMPro.TextureMappingOptions
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TextureMappingOptions, "TMPro", "TextureMappingOptions");
#pragma pack(pop)
