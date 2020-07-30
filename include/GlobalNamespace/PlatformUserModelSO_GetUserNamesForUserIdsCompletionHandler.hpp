// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: PlatformUserModelSO
#include "GlobalNamespace/PlatformUserModelSO.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformUserModelSO/GetUserNamesForUserIdsCompletionHandler
  class PlatformUserModelSO::GetUserNamesForUserIdsCompletionHandler : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xBB9AB0
    static PlatformUserModelSO::GetUserNamesForUserIdsCompletionHandler* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(PlatformUserModelSO/GetUserNamesForUserIdsResult result, System.String[] userNames)
    // Offset: 0xBC3AB8
    void Invoke(GlobalNamespace::PlatformUserModelSO::GetUserNamesForUserIdsResult result, ::Array<::Il2CppString*>* userNames);
    // public System.IAsyncResult BeginInvoke(PlatformUserModelSO/GetUserNamesForUserIdsResult result, System.String[] userNames, System.AsyncCallback callback, System.Object object)
    // Offset: 0xBC3D40
    System::IAsyncResult* BeginInvoke(GlobalNamespace::PlatformUserModelSO::GetUserNamesForUserIdsResult result, ::Array<::Il2CppString*>* userNames, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xBC3DD8
    void EndInvoke(System::IAsyncResult* result);
  }; // PlatformUserModelSO/GetUserNamesForUserIdsCompletionHandler
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformUserModelSO::GetUserNamesForUserIdsCompletionHandler*, "", "PlatformUserModelSO/GetUserNamesForUserIdsCompletionHandler");
#pragma pack(pop)
