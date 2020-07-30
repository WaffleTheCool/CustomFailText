// Autogenerated from CppHeaderCreator on 7/24/2020 3:59:59 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverFullBodyBiped
  class IKSolverFullBodyBiped;
  // Forward declaring type: InteractionSystem
  class InteractionSystem;
  // Forward declaring type: InteractionTarget
  class InteractionTarget;
  // Forward declaring type: FullBodyBipedEffector
  struct FullBodyBipedEffector;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.InteractionObject
  class InteractionObject : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: RootMotion::FinalIK::InteractionObject::InteractionEvent
    class InteractionEvent;
    // Nested type: RootMotion::FinalIK::InteractionObject::Message
    class Message;
    // Nested type: RootMotion::FinalIK::InteractionObject::AnimatorEvent
    class AnimatorEvent;
    // Nested type: RootMotion::FinalIK::InteractionObject::WeightCurve
    class WeightCurve;
    // Nested type: RootMotion::FinalIK::InteractionObject::Multiplier
    class Multiplier;
    // Autogenerated type: RootMotion.FinalIK.InteractionObject/WeightCurve
    class WeightCurve : public ::Il2CppObject {
      public:
      // Nested type: RootMotion::FinalIK::InteractionObject::WeightCurve::Type
      struct Type;
      // Autogenerated type: RootMotion.FinalIK.InteractionObject/WeightCurve/Type
      struct Type : public System::Enum {
        public:
        // public System.Int32 value__
        // Offset: 0x0
        int value;
        // static field const value: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PositionWeight
        static constexpr const int PositionWeight = 0;
        // Get static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PositionWeight
        static RootMotion::FinalIK::InteractionObject::WeightCurve::Type _get_PositionWeight();
        // Set static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PositionWeight
        static void _set_PositionWeight(RootMotion::FinalIK::InteractionObject::WeightCurve::Type value);
        // static field const value: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type RotationWeight
        static constexpr const int RotationWeight = 1;
        // Get static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type RotationWeight
        static RootMotion::FinalIK::InteractionObject::WeightCurve::Type _get_RotationWeight();
        // Set static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type RotationWeight
        static void _set_RotationWeight(RootMotion::FinalIK::InteractionObject::WeightCurve::Type value);
        // static field const value: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PositionOffsetX
        static constexpr const int PositionOffsetX = 2;
        // Get static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PositionOffsetX
        static RootMotion::FinalIK::InteractionObject::WeightCurve::Type _get_PositionOffsetX();
        // Set static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PositionOffsetX
        static void _set_PositionOffsetX(RootMotion::FinalIK::InteractionObject::WeightCurve::Type value);
        // static field const value: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PositionOffsetY
        static constexpr const int PositionOffsetY = 3;
        // Get static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PositionOffsetY
        static RootMotion::FinalIK::InteractionObject::WeightCurve::Type _get_PositionOffsetY();
        // Set static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PositionOffsetY
        static void _set_PositionOffsetY(RootMotion::FinalIK::InteractionObject::WeightCurve::Type value);
        // static field const value: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PositionOffsetZ
        static constexpr const int PositionOffsetZ = 4;
        // Get static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PositionOffsetZ
        static RootMotion::FinalIK::InteractionObject::WeightCurve::Type _get_PositionOffsetZ();
        // Set static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PositionOffsetZ
        static void _set_PositionOffsetZ(RootMotion::FinalIK::InteractionObject::WeightCurve::Type value);
        // static field const value: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type Pull
        static constexpr const int Pull = 5;
        // Get static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type Pull
        static RootMotion::FinalIK::InteractionObject::WeightCurve::Type _get_Pull();
        // Set static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type Pull
        static void _set_Pull(RootMotion::FinalIK::InteractionObject::WeightCurve::Type value);
        // static field const value: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type Reach
        static constexpr const int Reach = 6;
        // Get static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type Reach
        static RootMotion::FinalIK::InteractionObject::WeightCurve::Type _get_Reach();
        // Set static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type Reach
        static void _set_Reach(RootMotion::FinalIK::InteractionObject::WeightCurve::Type value);
        // static field const value: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type RotateBoneWeight
        static constexpr const int RotateBoneWeight = 7;
        // Get static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type RotateBoneWeight
        static RootMotion::FinalIK::InteractionObject::WeightCurve::Type _get_RotateBoneWeight();
        // Set static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type RotateBoneWeight
        static void _set_RotateBoneWeight(RootMotion::FinalIK::InteractionObject::WeightCurve::Type value);
        // static field const value: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type Push
        static constexpr const int Push = 8;
        // Get static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type Push
        static RootMotion::FinalIK::InteractionObject::WeightCurve::Type _get_Push();
        // Set static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type Push
        static void _set_Push(RootMotion::FinalIK::InteractionObject::WeightCurve::Type value);
        // static field const value: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PushParent
        static constexpr const int PushParent = 9;
        // Get static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PushParent
        static RootMotion::FinalIK::InteractionObject::WeightCurve::Type _get_PushParent();
        // Set static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PushParent
        static void _set_PushParent(RootMotion::FinalIK::InteractionObject::WeightCurve::Type value);
        // static field const value: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PoserWeight
        static constexpr const int PoserWeight = 10;
        // Get static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PoserWeight
        static RootMotion::FinalIK::InteractionObject::WeightCurve::Type _get_PoserWeight();
        // Set static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type PoserWeight
        static void _set_PoserWeight(RootMotion::FinalIK::InteractionObject::WeightCurve::Type value);
        // static field const value: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type BendGoalWeight
        static constexpr const int BendGoalWeight = 11;
        // Get static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type BendGoalWeight
        static RootMotion::FinalIK::InteractionObject::WeightCurve::Type _get_BendGoalWeight();
        // Set static field: static public RootMotion.FinalIK.InteractionObject/WeightCurve/Type BendGoalWeight
        static void _set_BendGoalWeight(RootMotion::FinalIK::InteractionObject::WeightCurve::Type value);
        // Creating value type constructor for type: Type
        Type(int value_ = {}) : value{value_} {}
      }; // RootMotion.FinalIK.InteractionObject/WeightCurve/Type
      // public RootMotion.FinalIK.InteractionObject/WeightCurve/Type type
      // Offset: 0x10
      RootMotion::FinalIK::InteractionObject::WeightCurve::Type type;
      // public UnityEngine.AnimationCurve curve
      // Offset: 0x18
      UnityEngine::AnimationCurve* curve;
      // public System.Single GetValue(System.Single timer)
      // Offset: 0x1436248
      float GetValue(float timer);
      // public System.Void .ctor()
      // Offset: 0x1436DEC
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static InteractionObject::WeightCurve* New_ctor();
    }; // RootMotion.FinalIK.InteractionObject/WeightCurve
    // public UnityEngine.Transform otherLookAtTarget
    // Offset: 0x18
    UnityEngine::Transform* otherLookAtTarget;
    // public UnityEngine.Transform otherTargetsRoot
    // Offset: 0x20
    UnityEngine::Transform* otherTargetsRoot;
    // public UnityEngine.Transform positionOffsetSpace
    // Offset: 0x28
    UnityEngine::Transform* positionOffsetSpace;
    // public RootMotion.FinalIK.InteractionObject/WeightCurve[] weightCurves
    // Offset: 0x30
    ::Array<RootMotion::FinalIK::InteractionObject::WeightCurve*>* weightCurves;
    // public RootMotion.FinalIK.InteractionObject/Multiplier[] multipliers
    // Offset: 0x38
    ::Array<RootMotion::FinalIK::InteractionObject::Multiplier*>* multipliers;
    // public RootMotion.FinalIK.InteractionObject/InteractionEvent[] events
    // Offset: 0x40
    ::Array<RootMotion::FinalIK::InteractionObject::InteractionEvent*>* events;
    // private System.Single <length>k__BackingField
    // Offset: 0x48
    float length;
    // private RootMotion.FinalIK.InteractionSystem <lastUsedInteractionSystem>k__BackingField
    // Offset: 0x50
    RootMotion::FinalIK::InteractionSystem* lastUsedInteractionSystem;
    // private RootMotion.FinalIK.InteractionTarget[] targets
    // Offset: 0x58
    ::Array<RootMotion::FinalIK::InteractionTarget*>* targets;
    // private System.Void OpenUserManual()
    // Offset: 0x1435AB0
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x1435AFC
    void OpenScriptReference();
    // private System.Void OpenTutorial1()
    // Offset: 0x1435B48
    void OpenTutorial1();
    // private System.Void OpenTutorial2()
    // Offset: 0x1435B94
    void OpenTutorial2();
    // private System.Void OpenTutorial3()
    // Offset: 0x1435BE0
    void OpenTutorial3();
    // private System.Void OpenTutorial4()
    // Offset: 0x1435C2C
    void OpenTutorial4();
    // private System.Void SupportGroup()
    // Offset: 0x1435C78
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x1435CC4
    void ASThread();
    // public System.Single get_length()
    // Offset: 0x1435D10
    float get_length();
    // private System.Void set_length(System.Single value)
    // Offset: 0x1435D18
    void set_length(float value);
    // public RootMotion.FinalIK.InteractionSystem get_lastUsedInteractionSystem()
    // Offset: 0x1435D20
    RootMotion::FinalIK::InteractionSystem* get_lastUsedInteractionSystem();
    // private System.Void set_lastUsedInteractionSystem(RootMotion.FinalIK.InteractionSystem value)
    // Offset: 0x1435D28
    void set_lastUsedInteractionSystem(RootMotion::FinalIK::InteractionSystem* value);
    // public System.Void Initiate()
    // Offset: 0x1435D30
    void Initiate();
    // public UnityEngine.Transform get_lookAtTarget()
    // Offset: 0x1435F4C
    UnityEngine::Transform* get_lookAtTarget();
    // public RootMotion.FinalIK.InteractionTarget GetTarget(RootMotion.FinalIK.FullBodyBipedEffector effectorType, RootMotion.FinalIK.InteractionSystem interactionSystem)
    // Offset: 0x1435FDC
    RootMotion::FinalIK::InteractionTarget* GetTarget(RootMotion::FinalIK::FullBodyBipedEffector effectorType, RootMotion::FinalIK::InteractionSystem* interactionSystem);
    // public System.Boolean CurveUsed(RootMotion.FinalIK.InteractionObject/WeightCurve/Type type)
    // Offset: 0x143343C
    bool CurveUsed(RootMotion::FinalIK::InteractionObject::WeightCurve::Type type);
    // public RootMotion.FinalIK.InteractionTarget[] GetTargets()
    // Offset: 0x1436160
    ::Array<RootMotion::FinalIK::InteractionTarget*>* GetTargets();
    // public UnityEngine.Transform GetTarget(RootMotion.FinalIK.FullBodyBipedEffector effectorType, System.String tag)
    // Offset: 0x14332F0
    UnityEngine::Transform* GetTarget(RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::Il2CppString* tag);
    // public System.Void OnStartInteraction(RootMotion.FinalIK.InteractionSystem interactionSystem)
    // Offset: 0x1433434
    void OnStartInteraction(RootMotion::FinalIK::InteractionSystem* interactionSystem);
    // public System.Void Apply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, RootMotion.FinalIK.FullBodyBipedEffector effector, RootMotion.FinalIK.InteractionTarget target, System.Single timer, System.Single weight)
    // Offset: 0x1434128
    void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, RootMotion::FinalIK::FullBodyBipedEffector effector, RootMotion::FinalIK::InteractionTarget* target, float timer, float weight);
    // public System.Single GetValue(RootMotion.FinalIK.InteractionObject/WeightCurve/Type weightCurveType, RootMotion.FinalIK.InteractionTarget target, System.Single timer)
    // Offset: 0x1434980
    float GetValue(RootMotion::FinalIK::InteractionObject::WeightCurve::Type weightCurveType, RootMotion::FinalIK::InteractionTarget* target, float timer);
    // public UnityEngine.Transform get_targetsRoot()
    // Offset: 0x14350C8
    UnityEngine::Transform* get_targetsRoot();
    // private System.Void Start()
    // Offset: 0x1436964
    void Start();
    // private System.Void Apply(RootMotion.FinalIK.IKSolverFullBodyBiped solver, RootMotion.FinalIK.FullBodyBipedEffector effector, RootMotion.FinalIK.InteractionObject/WeightCurve/Type type, System.Single value, System.Single weight)
    // Offset: 0x1436264
    void Apply(RootMotion::FinalIK::IKSolverFullBodyBiped* solver, RootMotion::FinalIK::FullBodyBipedEffector effector, RootMotion::FinalIK::InteractionObject::WeightCurve::Type type, float value, float weight);
    // private UnityEngine.Transform GetTarget(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x1436168
    UnityEngine::Transform* GetTarget(RootMotion::FinalIK::FullBodyBipedEffector effectorType);
    // private System.Int32 GetWeightCurveIndex(RootMotion.FinalIK.InteractionObject/WeightCurve/Type weightCurveType)
    // Offset: 0x14368C0
    int GetWeightCurveIndex(RootMotion::FinalIK::InteractionObject::WeightCurve::Type weightCurveType);
    // private System.Int32 GetMultiplierIndex(RootMotion.FinalIK.InteractionObject/WeightCurve/Type weightCurveType)
    // Offset: 0x1436968
    int GetMultiplierIndex(RootMotion::FinalIK::InteractionObject::WeightCurve::Type weightCurveType);
    // public System.Void .ctor()
    // Offset: 0x14369D0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static InteractionObject* New_ctor();
  }; // RootMotion.FinalIK.InteractionObject
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionObject*, "RootMotion.FinalIK", "InteractionObject");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionObject::WeightCurve*, "RootMotion.FinalIK", "InteractionObject/WeightCurve");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionObject::WeightCurve::Type, "RootMotion.FinalIK", "InteractionObject/WeightCurve/Type");
#pragma pack(pop)
