// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:44 PM
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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.AssertionConditionType
  struct AssertionConditionType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public JetBrains.Annotations.AssertionConditionType IS_TRUE
    static constexpr const int IS_TRUE = 0;
    // Get static field: static public JetBrains.Annotations.AssertionConditionType IS_TRUE
    static JetBrains::Annotations::AssertionConditionType _get_IS_TRUE();
    // Set static field: static public JetBrains.Annotations.AssertionConditionType IS_TRUE
    static void _set_IS_TRUE(JetBrains::Annotations::AssertionConditionType value);
    // static field const value: static public JetBrains.Annotations.AssertionConditionType IS_FALSE
    static constexpr const int IS_FALSE = 1;
    // Get static field: static public JetBrains.Annotations.AssertionConditionType IS_FALSE
    static JetBrains::Annotations::AssertionConditionType _get_IS_FALSE();
    // Set static field: static public JetBrains.Annotations.AssertionConditionType IS_FALSE
    static void _set_IS_FALSE(JetBrains::Annotations::AssertionConditionType value);
    // static field const value: static public JetBrains.Annotations.AssertionConditionType IS_NULL
    static constexpr const int IS_NULL = 2;
    // Get static field: static public JetBrains.Annotations.AssertionConditionType IS_NULL
    static JetBrains::Annotations::AssertionConditionType _get_IS_NULL();
    // Set static field: static public JetBrains.Annotations.AssertionConditionType IS_NULL
    static void _set_IS_NULL(JetBrains::Annotations::AssertionConditionType value);
    // static field const value: static public JetBrains.Annotations.AssertionConditionType IS_NOT_NULL
    static constexpr const int IS_NOT_NULL = 3;
    // Get static field: static public JetBrains.Annotations.AssertionConditionType IS_NOT_NULL
    static JetBrains::Annotations::AssertionConditionType _get_IS_NOT_NULL();
    // Set static field: static public JetBrains.Annotations.AssertionConditionType IS_NOT_NULL
    static void _set_IS_NOT_NULL(JetBrains::Annotations::AssertionConditionType value);
    // Creating value type constructor for type: AssertionConditionType
    AssertionConditionType(int value_ = {}) : value{value_} {}
  }; // JetBrains.Annotations.AssertionConditionType
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AssertionConditionType, "JetBrains.Annotations", "AssertionConditionType");
#pragma pack(pop)
