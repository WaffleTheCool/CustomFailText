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
  // Autogenerated type: OVR.OpenVR.EChaperoneConfigFile
  struct EChaperoneConfigFile : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.EChaperoneConfigFile Live
    static constexpr const int Live = 1;
    // Get static field: static public OVR.OpenVR.EChaperoneConfigFile Live
    static OVR::OpenVR::EChaperoneConfigFile _get_Live();
    // Set static field: static public OVR.OpenVR.EChaperoneConfigFile Live
    static void _set_Live(OVR::OpenVR::EChaperoneConfigFile value);
    // static field const value: static public OVR.OpenVR.EChaperoneConfigFile Temp
    static constexpr const int Temp = 2;
    // Get static field: static public OVR.OpenVR.EChaperoneConfigFile Temp
    static OVR::OpenVR::EChaperoneConfigFile _get_Temp();
    // Set static field: static public OVR.OpenVR.EChaperoneConfigFile Temp
    static void _set_Temp(OVR::OpenVR::EChaperoneConfigFile value);
    // Creating value type constructor for type: EChaperoneConfigFile
    EChaperoneConfigFile(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.EChaperoneConfigFile
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EChaperoneConfigFile, "OVR.OpenVR", "EChaperoneConfigFile");
#pragma pack(pop)
