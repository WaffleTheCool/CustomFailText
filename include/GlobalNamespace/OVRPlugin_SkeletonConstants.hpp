// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:50 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/SkeletonConstants
  struct OVRPlugin::SkeletonConstants : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public OVRPlugin/SkeletonConstants MaxBones
    static constexpr const int MaxBones = 24;
    // Get static field: static public OVRPlugin/SkeletonConstants MaxBones
    static GlobalNamespace::OVRPlugin::SkeletonConstants _get_MaxBones();
    // Set static field: static public OVRPlugin/SkeletonConstants MaxBones
    static void _set_MaxBones(GlobalNamespace::OVRPlugin::SkeletonConstants value);
    // static field const value: static public OVRPlugin/SkeletonConstants MaxBoneCapsules
    static constexpr const int MaxBoneCapsules = 19;
    // Get static field: static public OVRPlugin/SkeletonConstants MaxBoneCapsules
    static GlobalNamespace::OVRPlugin::SkeletonConstants _get_MaxBoneCapsules();
    // Set static field: static public OVRPlugin/SkeletonConstants MaxBoneCapsules
    static void _set_MaxBoneCapsules(GlobalNamespace::OVRPlugin::SkeletonConstants value);
    // Creating value type constructor for type: SkeletonConstants
    SkeletonConstants(int value_ = {}) : value{value_} {}
  }; // OVRPlugin/SkeletonConstants
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::SkeletonConstants, "", "OVRPlugin/SkeletonConstants");
#pragma pack(pop)
