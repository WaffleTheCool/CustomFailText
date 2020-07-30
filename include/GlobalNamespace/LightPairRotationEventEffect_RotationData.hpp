// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:14 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: LightPairRotationEventEffect
#include "GlobalNamespace/LightPairRotationEventEffect.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LightPairRotationEventEffect/RotationData
  class LightPairRotationEventEffect::RotationData : public ::Il2CppObject {
    public:
    // public System.Boolean enabled
    // Offset: 0x10
    bool enabled;
    // public System.Single rotationSpeed
    // Offset: 0x14
    float rotationSpeed;
    // public UnityEngine.Quaternion startRotation
    // Offset: 0x18
    UnityEngine::Quaternion startRotation;
    // public UnityEngine.Transform transform
    // Offset: 0x28
    UnityEngine::Transform* transform;
    // public System.Void .ctor()
    // Offset: 0xBE5060
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LightPairRotationEventEffect::RotationData* New_ctor();
  }; // LightPairRotationEventEffect/RotationData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightPairRotationEventEffect::RotationData*, "", "LightPairRotationEventEffect/RotationData");
#pragma pack(pop)
