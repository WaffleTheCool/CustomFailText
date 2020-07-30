// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:13 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: SaberSwingRatingCounter
#include "GlobalNamespace/SaberSwingRatingCounter.hpp"
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
  // Autogenerated type: SaberSwingRatingCounter/DidFinishDelegate
  class SaberSwingRatingCounter::DidFinishDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xC14A3C
    static SaberSwingRatingCounter::DidFinishDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(SaberSwingRatingCounter afterCutRating)
    // Offset: 0xC141A8
    void Invoke(GlobalNamespace::SaberSwingRatingCounter* afterCutRating);
    // public System.IAsyncResult BeginInvoke(SaberSwingRatingCounter afterCutRating, System.AsyncCallback callback, System.Object object)
    // Offset: 0xC14A50
    System::IAsyncResult* BeginInvoke(GlobalNamespace::SaberSwingRatingCounter* afterCutRating, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xC14A74
    void EndInvoke(System::IAsyncResult* result);
  }; // SaberSwingRatingCounter/DidFinishDelegate
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberSwingRatingCounter::DidFinishDelegate*, "", "SaberSwingRatingCounter/DidFinishDelegate");
#pragma pack(pop)
