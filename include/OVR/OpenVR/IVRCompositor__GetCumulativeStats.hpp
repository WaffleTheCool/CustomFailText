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
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: Compositor_CumulativeStats
  struct Compositor_CumulativeStats;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVRCompositor/_GetCumulativeStats
  class IVRCompositor::_GetCumulativeStats : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x14F9610
    static IVRCompositor::_GetCumulativeStats* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(OVR.OpenVR.Compositor_CumulativeStats pStats, System.UInt32 nStatsSizeInBytes)
    // Offset: 0x14F9624
    void Invoke(OVR::OpenVR::Compositor_CumulativeStats& pStats, uint nStatsSizeInBytes);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.Compositor_CumulativeStats pStats, System.UInt32 nStatsSizeInBytes, System.AsyncCallback callback, System.Object object)
    // Offset: 0x14F9890
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::Compositor_CumulativeStats& pStats, uint nStatsSizeInBytes, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(OVR.OpenVR.Compositor_CumulativeStats pStats, System.IAsyncResult result)
    // Offset: 0x14F9944
    void EndInvoke(OVR::OpenVR::Compositor_CumulativeStats& pStats, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/_GetCumulativeStats
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_GetCumulativeStats*, "OVR.OpenVR", "IVRCompositor/_GetCumulativeStats");
#pragma pack(pop)
