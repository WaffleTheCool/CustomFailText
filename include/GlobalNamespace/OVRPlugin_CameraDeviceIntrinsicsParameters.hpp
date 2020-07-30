// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/CameraDeviceIntrinsicsParameters
  struct OVRPlugin::CameraDeviceIntrinsicsParameters : public System::ValueType {
    public:
    // private System.Single fx
    // Offset: 0x0
    float fx;
    // private System.Single fy
    // Offset: 0x4
    float fy;
    // private System.Single cx
    // Offset: 0x8
    float cx;
    // private System.Single cy
    // Offset: 0xC
    float cy;
    // private System.Double disto0
    // Offset: 0x10
    double disto0;
    // private System.Double disto1
    // Offset: 0x18
    double disto1;
    // private System.Double disto2
    // Offset: 0x20
    double disto2;
    // private System.Double disto3
    // Offset: 0x28
    double disto3;
    // private System.Double disto4
    // Offset: 0x30
    double disto4;
    // private System.Single v_fov
    // Offset: 0x38
    float v_fov;
    // private System.Single h_fov
    // Offset: 0x3C
    float h_fov;
    // private System.Single d_fov
    // Offset: 0x40
    float d_fov;
    // private System.Int32 w
    // Offset: 0x44
    int w;
    // private System.Int32 h
    // Offset: 0x48
    int h;
    // Creating value type constructor for type: CameraDeviceIntrinsicsParameters
    CameraDeviceIntrinsicsParameters(float fx_ = {}, float fy_ = {}, float cx_ = {}, float cy_ = {}, double disto0_ = {}, double disto1_ = {}, double disto2_ = {}, double disto3_ = {}, double disto4_ = {}, float v_fov_ = {}, float h_fov_ = {}, float d_fov_ = {}, int w_ = {}, int h_ = {}) : fx{fx_}, fy{fy_}, cx{cx_}, cy{cy_}, disto0{disto0_}, disto1{disto1_}, disto2{disto2_}, disto3{disto3_}, disto4{disto4_}, v_fov{v_fov_}, h_fov{h_fov_}, d_fov{d_fov_}, w{w_}, h{h_} {}
  }; // OVRPlugin/CameraDeviceIntrinsicsParameters
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::CameraDeviceIntrinsicsParameters, "", "OVRPlugin/CameraDeviceIntrinsicsParameters");
#pragma pack(pop)
