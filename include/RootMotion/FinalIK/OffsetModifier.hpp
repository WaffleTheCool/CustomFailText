// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:00 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FullBodyBipedIK
  class FullBodyBipedIK;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.OffsetModifier
  class OffsetModifier : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: RootMotion::FinalIK::OffsetModifier::OffsetLimits
    class OffsetLimits;
    // Nested type: RootMotion::FinalIK::OffsetModifier::$Initiate$d__8
    class $Initiate$d__8;
    // public System.Single weight
    // Offset: 0x18
    float weight;
    // public RootMotion.FinalIK.FullBodyBipedIK ik
    // Offset: 0x20
    RootMotion::FinalIK::FullBodyBipedIK* ik;
    // protected System.Single lastTime
    // Offset: 0x28
    float lastTime;
    // protected System.Single get_deltaTime()
    // Offset: 0x121A0CC
    float get_deltaTime();
    // protected System.Void OnModifyOffset()
    // Offset: 0xFFFFFFFF
    void OnModifyOffset();
    // protected System.Void Start()
    // Offset: 0x121A0F8
    void Start();
    // private System.Collections.IEnumerator Initiate()
    // Offset: 0x121A124
    System::Collections::IEnumerator* Initiate();
    // private System.Void ModifyOffset()
    // Offset: 0x121A1CC
    void ModifyOffset();
    // protected System.Void ApplyLimits(RootMotion.FinalIK.OffsetModifier/OffsetLimits[] limits)
    // Offset: 0x121A2D8
    void ApplyLimits(::Array<RootMotion::FinalIK::OffsetModifier::OffsetLimits*>* limits);
    // protected System.Void OnDestroy()
    // Offset: 0x121A5F4
    void OnDestroy();
    // protected System.Void .ctor()
    // Offset: 0x121A710
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OffsetModifier* New_ctor();
  }; // RootMotion.FinalIK.OffsetModifier
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::OffsetModifier*, "RootMotion.FinalIK", "OffsetModifier");
#pragma pack(pop)
