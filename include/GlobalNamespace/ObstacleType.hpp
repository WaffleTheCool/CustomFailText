// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:09 PM
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
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ObstacleType
  struct ObstacleType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public ObstacleType FullHeight
    static constexpr const int FullHeight = 0;
    // Get static field: static public ObstacleType FullHeight
    static GlobalNamespace::ObstacleType _get_FullHeight();
    // Set static field: static public ObstacleType FullHeight
    static void _set_FullHeight(GlobalNamespace::ObstacleType value);
    // static field const value: static public ObstacleType Top
    static constexpr const int Top = 1;
    // Get static field: static public ObstacleType Top
    static GlobalNamespace::ObstacleType _get_Top();
    // Set static field: static public ObstacleType Top
    static void _set_Top(GlobalNamespace::ObstacleType value);
    // Creating value type constructor for type: ObstacleType
    ObstacleType(int value_ = {}) : value{value_} {}
  }; // ObstacleType
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleType, "", "ObstacleType");
#pragma pack(pop)
