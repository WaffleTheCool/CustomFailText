// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender
#include "UnityEngine/TestTools/TestRunner/Callbacks/RemoteTestResultSender.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner.Callbacks
namespace UnityEngine::TestTools::TestRunner::Callbacks {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/QueueData
  class RemoteTestResultSender::QueueData : public ::Il2CppObject {
    public:
    // private System.Guid <id>k__BackingField
    // Offset: 0x10
    System::Guid id;
    // private System.Byte[] <data>k__BackingField
    // Offset: 0x20
    ::Array<uint8_t>* data;
    // public System.Guid get_id()
    // Offset: 0xE2ED48
    System::Guid get_id();
    // public System.Void set_id(System.Guid value)
    // Offset: 0xE2ED54
    void set_id(System::Guid value);
    // public System.Byte[] get_data()
    // Offset: 0xE2ED5C
    ::Array<uint8_t>* get_data();
    // public System.Void set_data(System.Byte[] value)
    // Offset: 0xE2ED64
    void set_data(::Array<uint8_t>* value);
    // public System.Void .ctor()
    // Offset: 0xE2E1F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RemoteTestResultSender::QueueData* New_ctor();
  }; // UnityEngine.TestTools.TestRunner.Callbacks.RemoteTestResultSender/QueueData
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::Callbacks::RemoteTestResultSender::QueueData*, "UnityEngine.TestTools.TestRunner.Callbacks", "RemoteTestResultSender/QueueData");
#pragma pack(pop)
