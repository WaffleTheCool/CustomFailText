// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:00 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.Recoil/RecoilOffset
#include "RootMotion/FinalIK/Recoil_RecoilOffset.hpp"
// Including type: RootMotion.FinalIK.FullBodyBipedEffector
#include "RootMotion/FinalIK/FullBodyBipedEffector.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.Recoil/RecoilOffset/EffectorLink
  class Recoil::RecoilOffset::EffectorLink : public ::Il2CppObject {
    public:
    // public RootMotion.FinalIK.FullBodyBipedEffector effector
    // Offset: 0x10
    RootMotion::FinalIK::FullBodyBipedEffector effector;
    // public System.Single weight
    // Offset: 0x14
    float weight;
    // public System.Void .ctor()
    // Offset: 0x121ED4C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Recoil::RecoilOffset::EffectorLink* New_ctor();
  }; // RootMotion.FinalIK.Recoil/RecoilOffset/EffectorLink
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Recoil::RecoilOffset::EffectorLink*, "RootMotion.FinalIK", "Recoil/RecoilOffset/EffectorLink");
#pragma pack(pop)
