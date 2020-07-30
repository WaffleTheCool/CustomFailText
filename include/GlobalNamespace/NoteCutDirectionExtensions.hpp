// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:09 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteCutDirection
  struct NoteCutDirection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteCutDirectionExtensions
  class NoteCutDirectionExtensions : public ::Il2CppObject {
    public:
    // static public UnityEngine.Vector2 Direction(NoteCutDirection cutDirection)
    // Offset: 0xBFFE34
    static UnityEngine::Vector2 Direction(GlobalNamespace::NoteCutDirection cutDirection);
    // static public System.Single RotationAngle(NoteCutDirection cutDirection)
    // Offset: 0xBFFF18
    static float RotationAngle(GlobalNamespace::NoteCutDirection cutDirection);
    // static public UnityEngine.Quaternion Rotation(NoteCutDirection cutDirection)
    // Offset: 0xBFFF38
    static UnityEngine::Quaternion Rotation(GlobalNamespace::NoteCutDirection cutDirection);
    // static public System.Boolean IsMainDirection(NoteCutDirection cutDirection)
    // Offset: 0xBFFFC8
    static bool IsMainDirection(GlobalNamespace::NoteCutDirection cutDirection);
  }; // NoteCutDirectionExtensions
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutDirectionExtensions*, "", "NoteCutDirectionExtensions");
#pragma pack(pop)
