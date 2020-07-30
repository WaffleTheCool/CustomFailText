// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:24 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
#include "Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Microsoft.Win32.SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Autogenerated type: Microsoft.Win32.SafeHandles.SafeWaitHandle
  class SafeWaitHandle : public Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
    public:
    // public System.Void .ctor(System.IntPtr existingHandle, System.Boolean ownsHandle)
    // Offset: 0x109768C
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Void SafeHandle::.ctor(System.IntPtr existingHandle, System.Boolean ownsHandle)
    static SafeWaitHandle* New_ctor(System::IntPtr existingHandle, bool ownsHandle);
    // protected override System.Boolean ReleaseHandle()
    // Offset: 0x10976B8
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::ReleaseHandle()
    bool ReleaseHandle();
  }; // Microsoft.Win32.SafeHandles.SafeWaitHandle
}
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::SafeHandles::SafeWaitHandle*, "Microsoft.Win32.SafeHandles", "SafeWaitHandle");
#pragma pack(pop)
