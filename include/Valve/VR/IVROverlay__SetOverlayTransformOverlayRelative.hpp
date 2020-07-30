// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:08 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_SetOverlayTransformOverlayRelative
  class IVROverlay::_SetOverlayTransformOverlayRelative : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16AC230
    static IVROverlay::_SetOverlayTransformOverlayRelative* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.UInt64 ulOverlayHandleParent, Valve.VR.HmdMatrix34_t pmatParentOverlayToOverlayTransform)
    // Offset: 0x16AC244
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent, Valve::VR::HmdMatrix34_t& pmatParentOverlayToOverlayTransform);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.UInt64 ulOverlayHandleParent, Valve.VR.HmdMatrix34_t pmatParentOverlayToOverlayTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16AC4DC
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent, Valve::VR::HmdMatrix34_t& pmatParentOverlayToOverlayTransform, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(Valve.VR.HmdMatrix34_t pmatParentOverlayToOverlayTransform, System.IAsyncResult result)
    // Offset: 0x16AC5A4
    Valve::VR::EVROverlayError EndInvoke(Valve::VR::HmdMatrix34_t& pmatParentOverlayToOverlayTransform, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_SetOverlayTransformOverlayRelative
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_SetOverlayTransformOverlayRelative*, "Valve.VR", "IVROverlay/_SetOverlayTransformOverlayRelative");
#pragma pack(pop)
