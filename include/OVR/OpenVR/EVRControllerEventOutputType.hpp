// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:58 PM
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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.EVRControllerEventOutputType
  struct EVRControllerEventOutputType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.EVRControllerEventOutputType ControllerEventOutput_OSEvents
    static constexpr const int ControllerEventOutput_OSEvents = 0;
    // Get static field: static public OVR.OpenVR.EVRControllerEventOutputType ControllerEventOutput_OSEvents
    static OVR::OpenVR::EVRControllerEventOutputType _get_ControllerEventOutput_OSEvents();
    // Set static field: static public OVR.OpenVR.EVRControllerEventOutputType ControllerEventOutput_OSEvents
    static void _set_ControllerEventOutput_OSEvents(OVR::OpenVR::EVRControllerEventOutputType value);
    // static field const value: static public OVR.OpenVR.EVRControllerEventOutputType ControllerEventOutput_VREvents
    static constexpr const int ControllerEventOutput_VREvents = 1;
    // Get static field: static public OVR.OpenVR.EVRControllerEventOutputType ControllerEventOutput_VREvents
    static OVR::OpenVR::EVRControllerEventOutputType _get_ControllerEventOutput_VREvents();
    // Set static field: static public OVR.OpenVR.EVRControllerEventOutputType ControllerEventOutput_VREvents
    static void _set_ControllerEventOutput_VREvents(OVR::OpenVR::EVRControllerEventOutputType value);
    // Creating value type constructor for type: EVRControllerEventOutputType
    EVRControllerEventOutputType(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.EVRControllerEventOutputType
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRControllerEventOutputType, "OVR.OpenVR", "EVRControllerEventOutputType");
#pragma pack(pop)
