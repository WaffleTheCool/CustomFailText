// Autogenerated from CppHeaderCreator on 7/24/2020 3:59:57 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.BipedLimbOrientations
#include "RootMotion/BipedLimbOrientations.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.BipedLimbOrientations/LimbOrientation
  class BipedLimbOrientations::LimbOrientation : public ::Il2CppObject {
    public:
    // public UnityEngine.Vector3 upperBoneForwardAxis
    // Offset: 0x10
    UnityEngine::Vector3 upperBoneForwardAxis;
    // public UnityEngine.Vector3 lowerBoneForwardAxis
    // Offset: 0x1C
    UnityEngine::Vector3 lowerBoneForwardAxis;
    // public UnityEngine.Vector3 lastBoneLeftAxis
    // Offset: 0x28
    UnityEngine::Vector3 lastBoneLeftAxis;
    // public System.Void .ctor(UnityEngine.Vector3 upperBoneForwardAxis, UnityEngine.Vector3 lowerBoneForwardAxis, UnityEngine.Vector3 lastBoneLeftAxis)
    // Offset: 0x138996C
    static BipedLimbOrientations::LimbOrientation* New_ctor(UnityEngine::Vector3 upperBoneForwardAxis, UnityEngine::Vector3 lowerBoneForwardAxis, UnityEngine::Vector3 lastBoneLeftAxis);
  }; // RootMotion.BipedLimbOrientations/LimbOrientation
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BipedLimbOrientations::LimbOrientation*, "RootMotion", "BipedLimbOrientations/LimbOrientation");
#pragma pack(pop)
