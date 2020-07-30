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
  // Autogenerated type: OVR.OpenVR.EHiddenAreaMeshType
  struct EHiddenAreaMeshType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Standard
    static constexpr const int k_eHiddenAreaMesh_Standard = 0;
    // Get static field: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Standard
    static OVR::OpenVR::EHiddenAreaMeshType _get_k_eHiddenAreaMesh_Standard();
    // Set static field: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Standard
    static void _set_k_eHiddenAreaMesh_Standard(OVR::OpenVR::EHiddenAreaMeshType value);
    // static field const value: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Inverse
    static constexpr const int k_eHiddenAreaMesh_Inverse = 1;
    // Get static field: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Inverse
    static OVR::OpenVR::EHiddenAreaMeshType _get_k_eHiddenAreaMesh_Inverse();
    // Set static field: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Inverse
    static void _set_k_eHiddenAreaMesh_Inverse(OVR::OpenVR::EHiddenAreaMeshType value);
    // static field const value: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_LineLoop
    static constexpr const int k_eHiddenAreaMesh_LineLoop = 2;
    // Get static field: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_LineLoop
    static OVR::OpenVR::EHiddenAreaMeshType _get_k_eHiddenAreaMesh_LineLoop();
    // Set static field: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_LineLoop
    static void _set_k_eHiddenAreaMesh_LineLoop(OVR::OpenVR::EHiddenAreaMeshType value);
    // static field const value: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Max
    static constexpr const int k_eHiddenAreaMesh_Max = 3;
    // Get static field: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Max
    static OVR::OpenVR::EHiddenAreaMeshType _get_k_eHiddenAreaMesh_Max();
    // Set static field: static public OVR.OpenVR.EHiddenAreaMeshType k_eHiddenAreaMesh_Max
    static void _set_k_eHiddenAreaMesh_Max(OVR::OpenVR::EHiddenAreaMeshType value);
    // Creating value type constructor for type: EHiddenAreaMeshType
    EHiddenAreaMeshType(int value_ = {}) : value{value_} {}
  }; // OVR.OpenVR.EHiddenAreaMeshType
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::EHiddenAreaMeshType, "OVR.OpenVR", "EHiddenAreaMeshType");
#pragma pack(pop)
