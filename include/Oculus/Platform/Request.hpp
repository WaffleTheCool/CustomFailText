// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:02 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Oculus.Platform.Message
#include "Oculus/Platform/Message.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Request
  class Request : public ::Il2CppObject {
    public:
    // private Oculus.Platform.Message/Callback callback_
    // Offset: 0x10
    Oculus::Platform::Message::Callback* callback;
    // private System.UInt64 <RequestID>k__BackingField
    // Offset: 0x18
    uint64_t RequestID;
    // public System.Void .ctor(System.UInt64 requestID)
    // Offset: 0xE82CC4
    static Request* New_ctor(uint64_t requestID);
    // public System.UInt64 get_RequestID()
    // Offset: 0xE96744
    uint64_t get_RequestID();
    // public System.Void set_RequestID(System.UInt64 value)
    // Offset: 0xE9674C
    void set_RequestID(uint64_t value);
    // public Oculus.Platform.Request OnComplete(Oculus.Platform.Message/Callback callback)
    // Offset: 0xE96754
    Oculus::Platform::Request* OnComplete(Oculus::Platform::Message::Callback* callback);
    // public System.Void HandleMessage(Oculus.Platform.Message msg)
    // Offset: 0xE967DC
    void HandleMessage(Oculus::Platform::Message* msg);
    // static public System.Void RunCallbacks(System.UInt32 limit)
    // Offset: 0xE813C4
    static void RunCallbacks(uint limit);
  }; // Oculus.Platform.Request
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Request*, "Oculus.Platform", "Request");
#pragma pack(pop)
