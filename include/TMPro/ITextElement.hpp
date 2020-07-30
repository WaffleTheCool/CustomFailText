// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.ITextElement
  class ITextElement {
    public:
    // public UnityEngine.Material get_sharedMaterial()
    // Offset: 0xFFFFFFFF
    UnityEngine::Material* get_sharedMaterial();
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate update)
    // Offset: 0xFFFFFFFF
    void Rebuild(UnityEngine::UI::CanvasUpdate update);
    // public System.Int32 GetInstanceID()
    // Offset: 0xFFFFFFFF
    int GetInstanceID();
  }; // TMPro.ITextElement
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::ITextElement*, "TMPro", "ITextElement");
#pragma pack(pop)
