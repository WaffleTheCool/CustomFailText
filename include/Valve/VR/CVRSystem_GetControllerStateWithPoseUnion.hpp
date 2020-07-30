// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.CVRSystem
#include "Valve/VR/CVRSystem.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRSystem/GetControllerStateWithPoseUnion
  struct CVRSystem::GetControllerStateWithPoseUnion : public System::ValueType {
    public:
    // public Valve.VR.IVRSystem/_GetControllerStateWithPose pGetControllerStateWithPose
    // Offset: 0x0
    Valve::VR::IVRSystem::_GetControllerStateWithPose* pGetControllerStateWithPose;
    // public Valve.VR.CVRSystem/_GetControllerStateWithPosePacked pGetControllerStateWithPosePacked
    // Offset: 0x0
    Valve::VR::CVRSystem::_GetControllerStateWithPosePacked* pGetControllerStateWithPosePacked;
    // Creating value type constructor for type: GetControllerStateWithPoseUnion
    GetControllerStateWithPoseUnion(Valve::VR::IVRSystem::_GetControllerStateWithPose* pGetControllerStateWithPose_ = {}, Valve::VR::CVRSystem::_GetControllerStateWithPosePacked* pGetControllerStateWithPosePacked_ = {}) : pGetControllerStateWithPose{pGetControllerStateWithPose_}, pGetControllerStateWithPosePacked{pGetControllerStateWithPosePacked_} {}
  }; // Valve.VR.CVRSystem/GetControllerStateWithPoseUnion
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRSystem::GetControllerStateWithPoseUnion, "Valve.VR", "CVRSystem/GetControllerStateWithPoseUnion");
#pragma pack(pop)
