// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:06 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRApplications
#include "Valve/VR/IVRApplications.hpp"
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRApplications/_GetApplicationProcessId
  class IVRApplications::_GetApplicationProcessId : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFD1F44
    static IVRApplications::_GetApplicationProcessId* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.UInt32 Invoke(System.String pchAppKey)
    // Offset: 0xFC6AF8
    uint Invoke(::Il2CppString* pchAppKey);
    // public System.IAsyncResult BeginInvoke(System.String pchAppKey, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFD1F58
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchAppKey, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.UInt32 EndInvoke(System.IAsyncResult result)
    // Offset: 0xFD1F7C
    uint EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRApplications/_GetApplicationProcessId
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRApplications::_GetApplicationProcessId*, "Valve.VR", "IVRApplications/_GetApplicationProcessId");
#pragma pack(pop)
