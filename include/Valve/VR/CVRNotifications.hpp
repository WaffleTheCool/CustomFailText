// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Valve.VR.IVRNotifications
#include "Valve/VR/IVRNotifications.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRNotificationError
  struct EVRNotificationError;
  // Forward declaring type: EVRNotificationType
  struct EVRNotificationType;
  // Forward declaring type: EVRNotificationStyle
  struct EVRNotificationStyle;
  // Forward declaring type: NotificationBitmap_t
  struct NotificationBitmap_t;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRNotifications
  class CVRNotifications : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRNotifications FnTable
    // Offset: 0x10
    Valve::VR::IVRNotifications FnTable;
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xFCDDA4
    static CVRNotifications* New_ctor(System::IntPtr pInterface);
    // public Valve.VR.EVRNotificationError CreateNotification(System.UInt64 ulOverlayHandle, System.UInt64 ulUserValue, Valve.VR.EVRNotificationType type, System.String pchText, Valve.VR.EVRNotificationStyle style, Valve.VR.NotificationBitmap_t pImage, System.UInt32 pNotificationId)
    // Offset: 0xFCDEAC
    Valve::VR::EVRNotificationError CreateNotification(uint64_t ulOverlayHandle, uint64_t ulUserValue, Valve::VR::EVRNotificationType type, ::Il2CppString* pchText, Valve::VR::EVRNotificationStyle style, Valve::VR::NotificationBitmap_t& pImage, uint& pNotificationId);
    // public Valve.VR.EVRNotificationError RemoveNotification(System.UInt32 notificationId)
    // Offset: 0xFCDED0
    Valve::VR::EVRNotificationError RemoveNotification(uint notificationId);
  }; // Valve.VR.CVRNotifications
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRNotifications*, "Valve.VR", "CVRNotifications");
#pragma pack(pop)
