// Autogenerated from CppHeaderCreator on 7/24/2020 3:59:59 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.FBIKChain
#include "RootMotion/FinalIK/FBIKChain.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBody
  class IKSolverFullBody;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.FBIKChain/ChildConstraint
  class FBIKChain::ChildConstraint : public ::Il2CppObject {
    public:
    // public System.Single pushElasticity
    // Offset: 0x10
    float pushElasticity;
    // public System.Single pullElasticity
    // Offset: 0x14
    float pullElasticity;
    // private UnityEngine.Transform bone1
    // Offset: 0x18
    UnityEngine::Transform* bone1;
    // private UnityEngine.Transform bone2
    // Offset: 0x20
    UnityEngine::Transform* bone2;
    // private System.Single <nominalDistance>k__BackingField
    // Offset: 0x28
    float nominalDistance;
    // private System.Boolean <isRigid>k__BackingField
    // Offset: 0x2C
    bool isRigid;
    // private System.Single crossFade
    // Offset: 0x30
    float crossFade;
    // private System.Single inverseCrossFade
    // Offset: 0x34
    float inverseCrossFade;
    // private System.Int32 chain1Index
    // Offset: 0x38
    int chain1Index;
    // private System.Int32 chain2Index
    // Offset: 0x3C
    int chain2Index;
    // public System.Single get_nominalDistance()
    // Offset: 0x139CB94
    float get_nominalDistance();
    // private System.Void set_nominalDistance(System.Single value)
    // Offset: 0x139CB9C
    void set_nominalDistance(float value);
    // public System.Boolean get_isRigid()
    // Offset: 0x139CBA4
    bool get_isRigid();
    // private System.Void set_isRigid(System.Boolean value)
    // Offset: 0x139CBAC
    void set_isRigid(bool value);
    // public System.Void .ctor(UnityEngine.Transform bone1, UnityEngine.Transform bone2, System.Single pushElasticity, System.Single pullElasticity)
    // Offset: 0x139CBB8
    static FBIKChain::ChildConstraint* New_ctor(UnityEngine::Transform* bone1, UnityEngine::Transform* bone2, float pushElasticity, float pullElasticity);
    // public System.Void Initiate(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x139A918
    void Initiate(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void OnPreSolve(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x139AE58
    void OnPreSolve(RootMotion::FinalIK::IKSolverFullBody* solver);
    // public System.Void Solve(RootMotion.FinalIK.IKSolverFullBody solver)
    // Offset: 0x139C890
    void Solve(RootMotion::FinalIK::IKSolverFullBody* solver);
  }; // RootMotion.FinalIK.FBIKChain/ChildConstraint
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::FBIKChain::ChildConstraint*, "RootMotion.FinalIK", "FBIKChain/ChildConstraint");
#pragma pack(pop)
