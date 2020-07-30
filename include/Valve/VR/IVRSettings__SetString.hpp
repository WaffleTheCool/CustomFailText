// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:09 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRSettings
#include "Valve/VR/IVRSettings.hpp"
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
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRSettings/_SetString
  class IVRSettings::_SetString : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x16B863C
    static IVRSettings::_SetString* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(System.String pchSection, System.String pchSettingsKey, System.String pchValue, Valve.VR.EVRSettingsError peError)
    // Offset: 0x16B8650
    void Invoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, ::Il2CppString* pchValue, Valve::VR::EVRSettingsError& peError);
    // public System.IAsyncResult BeginInvoke(System.String pchSection, System.String pchSettingsKey, System.String pchValue, Valve.VR.EVRSettingsError peError, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16B8A9C
    System::IAsyncResult* BeginInvoke(::Il2CppString* pchSection, ::Il2CppString* pchSettingsKey, ::Il2CppString* pchValue, Valve::VR::EVRSettingsError& peError, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(Valve.VR.EVRSettingsError peError, System.IAsyncResult result)
    // Offset: 0x16B8B4C
    void EndInvoke(Valve::VR::EVRSettingsError& peError, System::IAsyncResult* result);
  }; // Valve.VR.IVRSettings/_SetString
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSettings::_SetString*, "Valve.VR", "IVRSettings/_SetString");
#pragma pack(pop)
