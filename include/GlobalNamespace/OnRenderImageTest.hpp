// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:06 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OnRenderImageTest
  class OnRenderImageTest : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.RenderTexture _rt
    // Offset: 0x18
    UnityEngine::RenderTexture* rt;
    // private UnityEngine.Material _stereoCopyMaterial
    // Offset: 0x20
    UnityEngine::Material* stereoCopyMaterial;
    // private System.Void Start()
    // Offset: 0xC29318
    void Start();
    // private System.Void OnRenderImage(UnityEngine.RenderTexture source, UnityEngine.RenderTexture destination)
    // Offset: 0xC293FC
    void OnRenderImage(UnityEngine::RenderTexture* source, UnityEngine::RenderTexture* destination);
    // public System.Void .ctor()
    // Offset: 0xC29498
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OnRenderImageTest* New_ctor();
  }; // OnRenderImageTest
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OnRenderImageTest*, "", "OnRenderImageTest");
#pragma pack(pop)
