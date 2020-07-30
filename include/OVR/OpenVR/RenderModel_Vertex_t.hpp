// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:59 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.HmdVector3_t
#include "OVR/OpenVR/HmdVector3_t.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.RenderModel_Vertex_t
  struct RenderModel_Vertex_t : public System::ValueType {
    public:
    // public OVR.OpenVR.HmdVector3_t vPosition
    // Offset: 0x0
    OVR::OpenVR::HmdVector3_t vPosition;
    // public OVR.OpenVR.HmdVector3_t vNormal
    // Offset: 0xC
    OVR::OpenVR::HmdVector3_t vNormal;
    // public System.Single rfTextureCoord0
    // Offset: 0x18
    float rfTextureCoord0;
    // public System.Single rfTextureCoord1
    // Offset: 0x1C
    float rfTextureCoord1;
    // Creating value type constructor for type: RenderModel_Vertex_t
    RenderModel_Vertex_t(OVR::OpenVR::HmdVector3_t vPosition_ = {}, OVR::OpenVR::HmdVector3_t vNormal_ = {}, float rfTextureCoord0_ = {}, float rfTextureCoord1_ = {}) : vPosition{vPosition_}, vNormal{vNormal_}, rfTextureCoord0{rfTextureCoord0_}, rfTextureCoord1{rfTextureCoord1_} {}
  }; // OVR.OpenVR.RenderModel_Vertex_t
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::RenderModel_Vertex_t, "OVR.OpenVR", "RenderModel_Vertex_t");
#pragma pack(pop)
