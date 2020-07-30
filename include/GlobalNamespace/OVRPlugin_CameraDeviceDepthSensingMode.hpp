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
  // Autogenerated type: OVRPlugin/CameraDeviceDepthSensingMode
  struct OVRPlugin::CameraDeviceDepthSensingMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRPlugin/CameraDeviceDepthSensingMode Standard
    static constexpr const int Standard = 0;
    // Get static field: static public OVRPlugin/CameraDeviceDepthSensingMode Standard
    static GlobalNamespace::OVRPlugin::CameraDeviceDepthSensingMode _get_Standard();
    // Set static field: static public OVRPlugin/CameraDeviceDepthSensingMode Standard
    static void _set_Standard(GlobalNamespace::OVRPlugin::CameraDeviceDepthSensingMode value);
    // static field const value: static public OVRPlugin/CameraDeviceDepthSensingMode Fill
    static constexpr const int Fill = 1;
    // Get static field: static public OVRPlugin/CameraDeviceDepthSensingMode Fill
    static GlobalNamespace::OVRPlugin::CameraDeviceDepthSensingMode _get_Fill();
    // Set static field: static public OVRPlugin/CameraDeviceDepthSensingMode Fill
    static void _set_Fill(GlobalNamespace::OVRPlugin::CameraDeviceDepthSensingMode value);
    // Creating value type constructor for type: CameraDeviceDepthSensingMode
    CameraDeviceDepthSensingMode(int value_ = {}) : value{value_} {}
  }; // OVRPlugin/CameraDeviceDepthSensingMode
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::CameraDeviceDepthSensingMode, "", "OVRPlugin/CameraDeviceDepthSensingMode");
#pragma pack(pop)
