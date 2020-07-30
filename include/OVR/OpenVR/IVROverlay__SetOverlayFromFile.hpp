// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:55 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay/_SetOverlayFromFile
  class IVROverlay::_SetOverlayFromFile : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x168EFD8
    static IVROverlay::_SetOverlayFromFile* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, System.String pchFilePath)
    // Offset: 0x168EFEC
    OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ::Il2CppString* pchFilePath);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, System.String pchFilePath, System.AsyncCallback callback, System.Object object)
    // Offset: 0x168F270
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ::Il2CppString* pchFilePath, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(System.IAsyncResult result)
    // Offset: 0x168F304
    OVR::OpenVR::EVROverlayError EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_SetOverlayFromFile
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_SetOverlayFromFile*, "OVR.OpenVR", "IVROverlay/_SetOverlayFromFile");
#pragma pack(pop)
