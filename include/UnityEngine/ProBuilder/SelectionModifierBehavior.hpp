// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:17 PM
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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.SelectionModifierBehavior
  struct SelectionModifierBehavior : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.ProBuilder.SelectionModifierBehavior Add
    static constexpr const int Add = 0;
    // Get static field: static public UnityEngine.ProBuilder.SelectionModifierBehavior Add
    static UnityEngine::ProBuilder::SelectionModifierBehavior _get_Add();
    // Set static field: static public UnityEngine.ProBuilder.SelectionModifierBehavior Add
    static void _set_Add(UnityEngine::ProBuilder::SelectionModifierBehavior value);
    // static field const value: static public UnityEngine.ProBuilder.SelectionModifierBehavior Subtract
    static constexpr const int Subtract = 1;
    // Get static field: static public UnityEngine.ProBuilder.SelectionModifierBehavior Subtract
    static UnityEngine::ProBuilder::SelectionModifierBehavior _get_Subtract();
    // Set static field: static public UnityEngine.ProBuilder.SelectionModifierBehavior Subtract
    static void _set_Subtract(UnityEngine::ProBuilder::SelectionModifierBehavior value);
    // static field const value: static public UnityEngine.ProBuilder.SelectionModifierBehavior Difference
    static constexpr const int Difference = 2;
    // Get static field: static public UnityEngine.ProBuilder.SelectionModifierBehavior Difference
    static UnityEngine::ProBuilder::SelectionModifierBehavior _get_Difference();
    // Set static field: static public UnityEngine.ProBuilder.SelectionModifierBehavior Difference
    static void _set_Difference(UnityEngine::ProBuilder::SelectionModifierBehavior value);
    // Creating value type constructor for type: SelectionModifierBehavior
    SelectionModifierBehavior(int value_ = {}) : value{value_} {}
  }; // UnityEngine.ProBuilder.SelectionModifierBehavior
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SelectionModifierBehavior, "UnityEngine.ProBuilder", "SelectionModifierBehavior");
#pragma pack(pop)
