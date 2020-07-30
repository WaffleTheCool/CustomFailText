// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:07 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRChaperone
#include "Valve/VR/IVRChaperone.hpp"
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
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRChaperone/_GetBoundsColor
  class IVRChaperone::_GetBoundsColor : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFD304C
    static IVRChaperone::_GetBoundsColor* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(Valve.VR.HmdColor_t pOutputColorArray, System.Int32 nNumOutputColors, System.Single flCollisionBoundsFadeDistance, Valve.VR.HmdColor_t pOutputCameraColor)
    // Offset: 0xFCBEB0
    void Invoke(Valve::VR::HmdColor_t& pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, Valve::VR::HmdColor_t& pOutputCameraColor);
    // public System.IAsyncResult BeginInvoke(Valve.VR.HmdColor_t pOutputColorArray, System.Int32 nNumOutputColors, System.Single flCollisionBoundsFadeDistance, Valve.VR.HmdColor_t pOutputCameraColor, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFD3060
    System::IAsyncResult* BeginInvoke(Valve::VR::HmdColor_t& pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, Valve::VR::HmdColor_t& pOutputCameraColor, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(Valve.VR.HmdColor_t pOutputColorArray, Valve.VR.HmdColor_t pOutputCameraColor, System.IAsyncResult result)
    // Offset: 0xFD314C
    void EndInvoke(Valve::VR::HmdColor_t& pOutputColorArray, Valve::VR::HmdColor_t& pOutputCameraColor, System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperone/_GetBoundsColor
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperone::_GetBoundsColor*, "Valve.VR", "IVRChaperone/_GetBoundsColor");
#pragma pack(pop)
