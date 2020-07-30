// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: System.Runtime.Remoting.Lifetime.Lease
#include "System/Runtime/Remoting/Lifetime/Lease.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Skipping declaration: TimeSpan because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Runtime::Remoting::Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Skipping declaration: ILease because it is already included!
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Autogenerated type: System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
  class Lease::RenewalDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x104C2C8
    static Lease::RenewalDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.TimeSpan Invoke(System.Runtime.Remoting.Lifetime.ILease lease)
    // Offset: 0x104C514
    System::TimeSpan Invoke(System::Runtime::Remoting::Lifetime::ILease* lease);
    // public System.IAsyncResult BeginInvoke(System.Runtime.Remoting.Lifetime.ILease lease, System.AsyncCallback callback, System.Object object)
    // Offset: 0x104C2DC
    System::IAsyncResult* BeginInvoke(System::Runtime::Remoting::Lifetime::ILease* lease, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.TimeSpan EndInvoke(System.IAsyncResult result)
    // Offset: 0x104C4E8
    System::TimeSpan EndInvoke(System::IAsyncResult* result);
  }; // System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate*, "System.Runtime.Remoting.Lifetime", "Lease/RenewalDelegate");
#pragma pack(pop)
