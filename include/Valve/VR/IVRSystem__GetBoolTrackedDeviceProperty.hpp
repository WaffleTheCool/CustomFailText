// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:05 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
  // Forward declaring type: ETrackedDeviceProperty
  struct ETrackedDeviceProperty;
  // Forward declaring type: ETrackedPropertyError
  struct ETrackedPropertyError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSystem/_GetBoolTrackedDeviceProperty
  class IVRSystem::_GetBoolTrackedDeviceProperty : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16BA388
    static IVRSystem::_GetBoolTrackedDeviceProperty* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, Valve.VR.ETrackedPropertyError pError)
    // Offset: 0x16BA39C
    bool Invoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, Valve.VR.ETrackedPropertyError pError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16BA64C
    System::IAsyncResult* BeginInvoke(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(Valve.VR.ETrackedPropertyError pError, System.IAsyncResult result)
    // Offset: 0x16BA720
    bool EndInvoke(Valve::VR::ETrackedPropertyError& pError, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetBoolTrackedDeviceProperty
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetBoolTrackedDeviceProperty*, "Valve.VR", "IVRSystem/_GetBoolTrackedDeviceProperty");
#pragma pack(pop)
