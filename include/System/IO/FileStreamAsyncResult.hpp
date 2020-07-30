// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:32 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.FileStreamAsyncResult
  class FileStreamAsyncResult : public ::Il2CppObject, public System::IAsyncResult {
    public:
    // private System.Object state
    // Offset: 0x10
    ::Il2CppObject* state;
    // private System.Threading.ManualResetEvent wh
    // Offset: 0x18
    System::Threading::ManualResetEvent* wh;
    // private System.AsyncCallback cb
    // Offset: 0x20
    System::AsyncCallback* cb;
    // public System.Int32 Count
    // Offset: 0x28
    int Count;
    // public System.Int32 OriginalCount
    // Offset: 0x2C
    int OriginalCount;
    // public System.Int32 BytesRead
    // Offset: 0x30
    int BytesRead;
    // private System.AsyncCallback realcb
    // Offset: 0x38
    System::AsyncCallback* realcb;
    // public System.Void .ctor(System.AsyncCallback cb, System.Object state)
    // Offset: 0x1122AF4
    static FileStreamAsyncResult* New_ctor(System::AsyncCallback* cb, ::Il2CppObject* state);
    // static private System.Void CBWrapper(System.IAsyncResult ares)
    // Offset: 0x1123F80
    static void CBWrapper(System::IAsyncResult* ares);
    // public System.Object get_AsyncState()
    // Offset: 0x112401C
    // Implemented from: System.IAsyncResult
    // Base method: System.Object IAsyncResult::get_AsyncState()
    ::Il2CppObject* get_AsyncState();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x1124024
    // Implemented from: System.IAsyncResult
    // Base method: System.Threading.WaitHandle IAsyncResult::get_AsyncWaitHandle()
    System::Threading::WaitHandle* get_AsyncWaitHandle();
    // Creating proxy method: System_IAsyncResult_get_AsyncWaitHandle
    // Maps to method: get_AsyncWaitHandle
    System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle();
  }; // System.IO.FileStreamAsyncResult
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileStreamAsyncResult*, "System.IO", "FileStreamAsyncResult");
#pragma pack(pop)
