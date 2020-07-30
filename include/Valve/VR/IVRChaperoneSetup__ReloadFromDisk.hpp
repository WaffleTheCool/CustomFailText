// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:07 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
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
  // Forward declaring type: EChaperoneConfigFile
  struct EChaperoneConfigFile;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_ReloadFromDisk
  class IVRChaperoneSetup::_ReloadFromDisk : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15E5C14
    static IVRChaperoneSetup::_ReloadFromDisk* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(Valve.VR.EChaperoneConfigFile configFile)
    // Offset: 0x15E5C28
    void Invoke(Valve::VR::EChaperoneConfigFile configFile);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EChaperoneConfigFile configFile, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15E5E94
    System::IAsyncResult* BeginInvoke(Valve::VR::EChaperoneConfigFile configFile, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x15E5F20
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_ReloadFromDisk
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_ReloadFromDisk*, "Valve.VR", "IVRChaperoneSetup/_ReloadFromDisk");
#pragma pack(pop)
