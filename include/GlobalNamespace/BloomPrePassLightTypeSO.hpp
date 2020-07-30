// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:03 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BloomPrePassLightTypeSO
  class BloomPrePassLightTypeSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.Int32 _renderingPriority
    // Offset: 0x18
    int renderingPriority;
    // private UnityEngine.Material _material
    // Offset: 0x20
    UnityEngine::Material* material;
    // public System.Int32 get_renderingPriority()
    // Offset: 0x180DD68
    int get_renderingPriority();
    // public UnityEngine.Material get_material()
    // Offset: 0x180DD70
    UnityEngine::Material* get_material();
    // public System.Void .ctor()
    // Offset: 0x180DD78
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BloomPrePassLightTypeSO* New_ctor();
  }; // BloomPrePassLightTypeSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassLightTypeSO*, "", "BloomPrePassLightTypeSO");
#pragma pack(pop)
