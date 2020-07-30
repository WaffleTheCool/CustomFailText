// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:16 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: Cutter
  class Cutter : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::Cutter::CuttableBySaberSortParams
    class CuttableBySaberSortParams;
    // Nested type: GlobalNamespace::Cutter::CuttableBySaberSortParamsComparer
    class CuttableBySaberSortParamsComparer;
    // static field const value: static private System.Int32 kMaxNumberOfColliders
    static constexpr const int kMaxNumberOfColliders = 16;
    // Get static field: static private System.Int32 kMaxNumberOfColliders
    static int _get_kMaxNumberOfColliders();
    // Set static field: static private System.Int32 kMaxNumberOfColliders
    static void _set_kMaxNumberOfColliders(int value);
    // private UnityEngine.Collider[] _colliders
    // Offset: 0x10
    ::Array<UnityEngine::Collider*>* colliders;
    // private Cutter/CuttableBySaberSortParams[] _cuttableBySaberSortParams
    // Offset: 0x18
    ::Array<GlobalNamespace::Cutter::CuttableBySaberSortParams*>* cuttableBySaberSortParams;
    // private Cutter/CuttableBySaberSortParamsComparer _comparer
    // Offset: 0x20
    GlobalNamespace::Cutter::CuttableBySaberSortParamsComparer* comparer;
    // public System.Void Cut(Saber saber, UnityEngine.Vector3 topPos, UnityEngine.Vector3 bottomPos, UnityEngine.Vector3 prevTopPos, UnityEngine.Vector3 prevBottomPos)
    // Offset: 0xBCFE40
    void Cut(GlobalNamespace::Saber* saber, UnityEngine::Vector3 topPos, UnityEngine::Vector3 bottomPos, UnityEngine::Vector3 prevTopPos, UnityEngine::Vector3 prevBottomPos);
    // public System.Void .ctor()
    // Offset: 0xBCFCCC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Cutter* New_ctor();
  }; // Cutter
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Cutter*, "", "Cutter");
#pragma pack(pop)
