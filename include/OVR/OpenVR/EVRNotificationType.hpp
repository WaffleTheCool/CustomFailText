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
  // Autogenerated type: OVR.OpenVR.EVRNotificationType
  struct EVRNotificationType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.EVRNotificationType Transient
    static constexpr const int Transient = 0;
    // Get static field: static public OVR.OpenVR.EVRNotificationType Transient
    static OVR::OpenVR::EVRNotificationType _get_Transient();
    // Set static field: static public OVR.OpenVR.EVRNotificationType Transient
    static void _set_Transient(OVR::OpenVR::EVRNotificationType value);
    // static field const value: static public OVR.OpenVR.EVRNotificationType Persistent
    static constexpr const int Persistent = 1;
    // Get static field: static public OVR.OpenVR.EVRNotificationType Persistent
    static OVR::OpenVR::EVRNotificationType _get_Persistent();
    // Set static field: static public OVR.OpenVR.EVRNotificationType Persistent
    static void _set_Persistent(OVR::OpenVR::EVRNotificationType value);
    // static field const value: static public OVR.OpenVR.EVRNotificationType Transient_SystemWithUserValue
    static constexpr const int Transient_SystemWithUserValue = 2;
    // Get static field: static public OVR.OpenVR.EVRNotificationType Transient_SystemWithUserValue
    static OVR::OpenVR::EVRNotificationType _get_Transient_SystemWithUserValue();
    // Set static field: static public OVR.OpenVR.EVRNotificationType Transient_SystemWithUserValue
    static void _set_Transient_SystemWithUserValue(OVR::OpenVR::EVRNotificationType value);
    // Creating value type constructor for type: EVRNotificationType
    EVRNotificationType(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.EVRNotificationType
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EVRNotificationType, "OVR.OpenVR", "EVRNotificationType");
#pragma pack(pop)
