// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:30 PM
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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.AssemblyContentType
  struct AssemblyContentType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public System.Reflection.AssemblyContentType Default
    static constexpr const int Default = 0;
    // Get static field: static public System.Reflection.AssemblyContentType Default
    static System::Reflection::AssemblyContentType _get_Default();
    // Set static field: static public System.Reflection.AssemblyContentType Default
    static void _set_Default(System::Reflection::AssemblyContentType value);
    // static field const value: static public System.Reflection.AssemblyContentType WindowsRuntime
    static constexpr const int WindowsRuntime = 1;
    // Get static field: static public System.Reflection.AssemblyContentType WindowsRuntime
    static System::Reflection::AssemblyContentType _get_WindowsRuntime();
    // Set static field: static public System.Reflection.AssemblyContentType WindowsRuntime
    static void _set_WindowsRuntime(System::Reflection::AssemblyContentType value);
    // Creating value type constructor for type: AssemblyContentType
    AssemblyContentType(int value_ = {}) : value{value_} {}
  }; // System.Reflection.AssemblyContentType
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyContentType, "System.Reflection", "AssemblyContentType");
#pragma pack(pop)
