// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:34 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ParticleSystemStopBehavior
  struct ParticleSystemStopBehavior : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.ParticleSystemStopBehavior StopEmittingAndClear
    static constexpr const int StopEmittingAndClear = 0;
    // Get static field: static public UnityEngine.ParticleSystemStopBehavior StopEmittingAndClear
    static UnityEngine::ParticleSystemStopBehavior _get_StopEmittingAndClear();
    // Set static field: static public UnityEngine.ParticleSystemStopBehavior StopEmittingAndClear
    static void _set_StopEmittingAndClear(UnityEngine::ParticleSystemStopBehavior value);
    // static field const value: static public UnityEngine.ParticleSystemStopBehavior StopEmitting
    static constexpr const int StopEmitting = 1;
    // Get static field: static public UnityEngine.ParticleSystemStopBehavior StopEmitting
    static UnityEngine::ParticleSystemStopBehavior _get_StopEmitting();
    // Set static field: static public UnityEngine.ParticleSystemStopBehavior StopEmitting
    static void _set_StopEmitting(UnityEngine::ParticleSystemStopBehavior value);
    // Creating value type constructor for type: ParticleSystemStopBehavior
    ParticleSystemStopBehavior(int value_ = {}) : value{value_} {}
  }; // UnityEngine.ParticleSystemStopBehavior
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystemStopBehavior, "UnityEngine", "ParticleSystemStopBehavior");
#pragma pack(pop)
