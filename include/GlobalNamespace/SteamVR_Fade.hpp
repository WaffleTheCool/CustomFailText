// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:05 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
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
  // Autogenerated type: SteamVR_Fade
  class SteamVR_Fade : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Color currentColor
    // Offset: 0x18
    UnityEngine::Color currentColor;
    // private UnityEngine.Color targetColor
    // Offset: 0x28
    UnityEngine::Color targetColor;
    // private UnityEngine.Color deltaColor
    // Offset: 0x38
    UnityEngine::Color deltaColor;
    // private System.Boolean fadeOverlay
    // Offset: 0x48
    bool fadeOverlay;
    // Get static field: static private UnityEngine.Material fadeMaterial
    static UnityEngine::Material* _get_fadeMaterial();
    // Set static field: static private UnityEngine.Material fadeMaterial
    static void _set_fadeMaterial(UnityEngine::Material* value);
    // Get static field: static private System.Int32 fadeMaterialColorID
    static int _get_fadeMaterialColorID();
    // Set static field: static private System.Int32 fadeMaterialColorID
    static void _set_fadeMaterialColorID(int value);
    // static public System.Void Start(UnityEngine.Color newColor, System.Single duration, System.Boolean fadeOverlay)
    // Offset: 0xD6E314
    static void Start(UnityEngine::Color newColor, float duration, bool fadeOverlay);
    // static public System.Void View(UnityEngine.Color newColor, System.Single duration)
    // Offset: 0xD6E3D8
    static void View(UnityEngine::Color newColor, float duration);
    // public System.Void OnStartFade(UnityEngine.Color newColor, System.Single duration, System.Boolean fadeOverlay)
    // Offset: 0xD6E4A0
    void OnStartFade(UnityEngine::Color newColor, float duration, bool fadeOverlay);
    // private System.Void OnEnable()
    // Offset: 0xD6E508
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0xD6E6D0
    void OnDisable();
    // private System.Void OnPostRender()
    // Offset: 0xD6E794
    void OnPostRender();
    // public System.Void .ctor()
    // Offset: 0xD6EABC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SteamVR_Fade* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xD6EB64
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // SteamVR_Fade
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Fade*, "", "SteamVR_Fade");
#pragma pack(pop)
