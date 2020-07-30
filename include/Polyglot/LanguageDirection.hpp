// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:04 PM
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
// Type namespace: Polyglot
namespace Polyglot {
  // Autogenerated type: Polyglot.LanguageDirection
  struct LanguageDirection : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Polyglot.LanguageDirection LeftToRight
    static constexpr const int LeftToRight = 0;
    // Get static field: static public Polyglot.LanguageDirection LeftToRight
    static Polyglot::LanguageDirection _get_LeftToRight();
    // Set static field: static public Polyglot.LanguageDirection LeftToRight
    static void _set_LeftToRight(Polyglot::LanguageDirection value);
    // static field const value: static public Polyglot.LanguageDirection RightToLeft
    static constexpr const int RightToLeft = 1;
    // Get static field: static public Polyglot.LanguageDirection RightToLeft
    static Polyglot::LanguageDirection _get_RightToLeft();
    // Set static field: static public Polyglot.LanguageDirection RightToLeft
    static void _set_RightToLeft(Polyglot::LanguageDirection value);
    // Creating value type constructor for type: LanguageDirection
    LanguageDirection(int value_ = {}) : value{value_} {}
  }; // Polyglot.LanguageDirection
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LanguageDirection, "Polyglot", "LanguageDirection");
#pragma pack(pop)
