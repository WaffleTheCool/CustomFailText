// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:25 PM
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
// Type namespace: System
namespace System {
  // Autogenerated type: System.ConsoleSpecialKey
  struct ConsoleSpecialKey : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.ConsoleSpecialKey ControlC
    static constexpr const int ControlC = 0;
    // Get static field: static public System.ConsoleSpecialKey ControlC
    static System::ConsoleSpecialKey _get_ControlC();
    // Set static field: static public System.ConsoleSpecialKey ControlC
    static void _set_ControlC(System::ConsoleSpecialKey value);
    // static field const value: static public System.ConsoleSpecialKey ControlBreak
    static constexpr const int ControlBreak = 1;
    // Get static field: static public System.ConsoleSpecialKey ControlBreak
    static System::ConsoleSpecialKey _get_ControlBreak();
    // Set static field: static public System.ConsoleSpecialKey ControlBreak
    static void _set_ControlBreak(System::ConsoleSpecialKey value);
    // Creating value type constructor for type: ConsoleSpecialKey
    ConsoleSpecialKey(int value_ = {}) : value{value_} {}
  }; // System.ConsoleSpecialKey
}
DEFINE_IL2CPP_ARG_TYPE(System::ConsoleSpecialKey, "System", "ConsoleSpecialKey");
#pragma pack(pop)
