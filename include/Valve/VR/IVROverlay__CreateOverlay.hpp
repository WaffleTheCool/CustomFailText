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
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVROverlay/_CreateOverlay
  class IVROverlay::_CreateOverlay : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15F1D88
    static IVROverlay::_CreateOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVROverlayError Invoke(System.String pchOverlayKey, System.String pchOverlayName, System.UInt64 pOverlayHandle)
    // Offset: 0x15F1D9C
    Valve::VR::EVROverlayError Invoke(::Il2CppString* pchOverlayKey, ::Il2CppString* pchOverlayName, uint64_t& pOverlayHandle);
    // public System.IAsyncResult BeginInvoke(System.String pchOverlayKey, System.String pchOverlayName, System.UInt64 pOverlayHandle, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15F21CC
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchOverlayKey, ::Il2CppString* pchOverlayName, uint64_t& pOverlayHandle, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(System.UInt64 pOverlayHandle, System.IAsyncResult result)
    // Offset: 0x15F2274
    Valve::VR::EVROverlayError EndInvoke(uint64_t& pOverlayHandle, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_CreateOverlay
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_CreateOverlay*, "Valve.VR", "IVROverlay/_CreateOverlay");
#pragma pack(pop)
