// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:54 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
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
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_SuspendRendering
  class IVRCompositor::_SuspendRendering : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14FEFEC
    static IVRCompositor::_SuspendRendering* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Boolean bSuspend)
    // Offset: 0x14FF000
    void Invoke(bool bSuspend);
    // public System.IAsyncResult BeginInvoke(System.Boolean bSuspend, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14FF27C
    System::IAsyncResult* BeginInvoke(bool bSuspend, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x14FF30C
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_SuspendRendering
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_SuspendRendering*, "OVR.OpenVR", "IVRCompositor/_SuspendRendering");
#pragma pack(pop)
