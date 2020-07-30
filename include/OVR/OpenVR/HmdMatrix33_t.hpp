// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:58 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.HmdMatrix33_t
  struct HmdMatrix33_t : public System::ValueType {
    public:
    // public System.Single m0
    // Offset: 0x0
    float m0;
    // public System.Single m1
    // Offset: 0x4
    float m1;
    // public System.Single m2
    // Offset: 0x8
    float m2;
    // public System.Single m3
    // Offset: 0xC
    float m3;
    // public System.Single m4
    // Offset: 0x10
    float m4;
    // public System.Single m5
    // Offset: 0x14
    float m5;
    // public System.Single m6
    // Offset: 0x18
    float m6;
    // public System.Single m7
    // Offset: 0x1C
    float m7;
    // public System.Single m8
    // Offset: 0x20
    float m8;
    // Creating value type constructor for type: HmdMatrix33_t
    HmdMatrix33_t(float m0_ = {}, float m1_ = {}, float m2_ = {}, float m3_ = {}, float m4_ = {}, float m5_ = {}, float m6_ = {}, float m7_ = {}, float m8_ = {}) : m0{m0_}, m1{m1_}, m2{m2_}, m3{m3_}, m4{m4_}, m5{m5_}, m6{m6_}, m7{m7_}, m8{m8_} {}
  }; // OVR.OpenVR.HmdMatrix33_t
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::HmdMatrix33_t, "OVR.OpenVR", "HmdMatrix33_t");
#pragma pack(pop)
