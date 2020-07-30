// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/BatteryStatus
  struct OVRPlugin::BatteryStatus : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRPlugin/BatteryStatus Charging
    static constexpr const int Charging = 0;
    // Get static field: static public OVRPlugin/BatteryStatus Charging
    static GlobalNamespace::OVRPlugin::BatteryStatus _get_Charging();
    // Set static field: static public OVRPlugin/BatteryStatus Charging
    static void _set_Charging(GlobalNamespace::OVRPlugin::BatteryStatus value);
    // static field const value: static public OVRPlugin/BatteryStatus Discharging
    static constexpr const int Discharging = 1;
    // Get static field: static public OVRPlugin/BatteryStatus Discharging
    static GlobalNamespace::OVRPlugin::BatteryStatus _get_Discharging();
    // Set static field: static public OVRPlugin/BatteryStatus Discharging
    static void _set_Discharging(GlobalNamespace::OVRPlugin::BatteryStatus value);
    // static field const value: static public OVRPlugin/BatteryStatus Full
    static constexpr const int Full = 2;
    // Get static field: static public OVRPlugin/BatteryStatus Full
    static GlobalNamespace::OVRPlugin::BatteryStatus _get_Full();
    // Set static field: static public OVRPlugin/BatteryStatus Full
    static void _set_Full(GlobalNamespace::OVRPlugin::BatteryStatus value);
    // static field const value: static public OVRPlugin/BatteryStatus NotCharging
    static constexpr const int NotCharging = 3;
    // Get static field: static public OVRPlugin/BatteryStatus NotCharging
    static GlobalNamespace::OVRPlugin::BatteryStatus _get_NotCharging();
    // Set static field: static public OVRPlugin/BatteryStatus NotCharging
    static void _set_NotCharging(GlobalNamespace::OVRPlugin::BatteryStatus value);
    // static field const value: static public OVRPlugin/BatteryStatus Unknown
    static constexpr const int Unknown = 4;
    // Get static field: static public OVRPlugin/BatteryStatus Unknown
    static GlobalNamespace::OVRPlugin::BatteryStatus _get_Unknown();
    // Set static field: static public OVRPlugin/BatteryStatus Unknown
    static void _set_Unknown(GlobalNamespace::OVRPlugin::BatteryStatus value);
    // Creating value type constructor for type: BatteryStatus
    BatteryStatus(int value_ = {}) : value{value_} {}
  }; // OVRPlugin/BatteryStatus
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::BatteryStatus, "", "OVRPlugin/BatteryStatus");
#pragma pack(pop)
