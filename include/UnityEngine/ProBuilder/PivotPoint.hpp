// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:16 PM
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
  // Autogenerated type: UnityEngine.ProBuilder.PivotPoint
  struct PivotPoint : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.ProBuilder.PivotPoint Center
    static constexpr const int Center = 0;
    // Get static field: static public UnityEngine.ProBuilder.PivotPoint Center
    static UnityEngine::ProBuilder::PivotPoint _get_Center();
    // Set static field: static public UnityEngine.ProBuilder.PivotPoint Center
    static void _set_Center(UnityEngine::ProBuilder::PivotPoint value);
    // static field const value: static public UnityEngine.ProBuilder.PivotPoint IndividualOrigins
    static constexpr const int IndividualOrigins = 1;
    // Get static field: static public UnityEngine.ProBuilder.PivotPoint IndividualOrigins
    static UnityEngine::ProBuilder::PivotPoint _get_IndividualOrigins();
    // Set static field: static public UnityEngine.ProBuilder.PivotPoint IndividualOrigins
    static void _set_IndividualOrigins(UnityEngine::ProBuilder::PivotPoint value);
    // static field const value: static public UnityEngine.ProBuilder.PivotPoint ActiveElement
    static constexpr const int ActiveElement = 2;
    // Get static field: static public UnityEngine.ProBuilder.PivotPoint ActiveElement
    static UnityEngine::ProBuilder::PivotPoint _get_ActiveElement();
    // Set static field: static public UnityEngine.ProBuilder.PivotPoint ActiveElement
    static void _set_ActiveElement(UnityEngine::ProBuilder::PivotPoint value);
    // Creating value type constructor for type: PivotPoint
    PivotPoint(int value_ = {}) : value{value_} {}
  }; // UnityEngine.ProBuilder.PivotPoint
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::PivotPoint, "UnityEngine.ProBuilder", "PivotPoint");
#pragma pack(pop)
