// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::WSA
namespace UnityEngine::XR::WSA {
}
// Completed forward declares
// Type namespace: UnityEngine.XR.WSA
namespace UnityEngine::XR::WSA {
  // Autogenerated type: UnityEngine.XR.WSA.WorldAnchor
  class WorldAnchor : public UnityEngine::Component {
    public:
    // Nested type: UnityEngine::XR::WSA::WorldAnchor::OnTrackingChangedDelegate
    class OnTrackingChangedDelegate;
    // private UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate OnTrackingChanged
    // Offset: 0x18
    UnityEngine::XR::WSA::WorldAnchor::OnTrackingChangedDelegate* OnTrackingChanged;
    // static private System.Void Internal_TriggerEventOnTrackingLost(UnityEngine.XR.WSA.WorldAnchor worldAnchor, System.Boolean located)
    // Offset: 0x19621F0
    static void Internal_TriggerEventOnTrackingLost(UnityEngine::XR::WSA::WorldAnchor* worldAnchor, bool located);
  }; // UnityEngine.XR.WSA.WorldAnchor
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::WSA::WorldAnchor*, "UnityEngine.XR.WSA", "WorldAnchor");
#pragma pack(pop)
