// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:09 PM
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
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_ReleaseNativeOverlayHandle
  class IVROverlay::_ReleaseNativeOverlayHandle : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15FB7C4
    static IVROverlay::_ReleaseNativeOverlayHandle* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.IntPtr pNativeTextureHandle)
    // Offset: 0x15FB7D8
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, System::IntPtr pNativeTextureHandle);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.IntPtr pNativeTextureHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15FBA5C
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, System::IntPtr pNativeTextureHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x15FBB04
    Valve::VR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_ReleaseNativeOverlayHandle
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_ReleaseNativeOverlayHandle*, "Valve.VR", "IVROverlay/_ReleaseNativeOverlayHandle");
#pragma pack(pop)
