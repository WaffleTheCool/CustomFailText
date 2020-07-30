// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:51 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRMeshRenderer
#include "GlobalNamespace/OVRMeshRenderer.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRMeshRenderer/MeshRendererData
  struct OVRMeshRenderer::MeshRendererData : public System::ValueType {
    public:
    // private System.Boolean <IsDataValid>k__BackingField
    // Offset: 0x0
    bool IsDataValid;
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Offset: 0x1
    bool IsDataHighConfidence;
    // private System.Boolean <ShouldUseSystemGestureMaterial>k__BackingField
    // Offset: 0x2
    bool ShouldUseSystemGestureMaterial;
    // Creating value type constructor for type: MeshRendererData
    MeshRendererData(bool IsDataValid_ = {}, bool IsDataHighConfidence_ = {}, bool ShouldUseSystemGestureMaterial_ = {}) : IsDataValid{IsDataValid_}, IsDataHighConfidence{IsDataHighConfidence_}, ShouldUseSystemGestureMaterial{ShouldUseSystemGestureMaterial_} {}
    // public System.Boolean get_IsDataValid()
    // Offset: 0xA34E10
    bool get_IsDataValid();
    // public System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0xA34E18
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0xA34E24
    bool get_IsDataHighConfidence();
    // public System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0xA34E2C
    void set_IsDataHighConfidence(bool value);
    // public System.Boolean get_ShouldUseSystemGestureMaterial()
    // Offset: 0xA34E38
    bool get_ShouldUseSystemGestureMaterial();
    // public System.Void set_ShouldUseSystemGestureMaterial(System.Boolean value)
    // Offset: 0xA34E40
    void set_ShouldUseSystemGestureMaterial(bool value);
  }; // OVRMeshRenderer/MeshRendererData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMeshRenderer::MeshRendererData, "", "OVRMeshRenderer/MeshRendererData");
#pragma pack(pop)
