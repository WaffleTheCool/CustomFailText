// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:39 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
  class ServerObjectTerminatorSink : public ::Il2CppObject, public System::Runtime::Remoting::Messaging::IMessageSink {
    public:
    // private System.Runtime.Remoting.Messaging.IMessageSink _nextSink
    // Offset: 0x10
    System::Runtime::Remoting::Messaging::IMessageSink* nextSink;
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMessageSink nextSink)
    // Offset: 0xDFBAA8
    static ServerObjectTerminatorSink* New_ctor(System::Runtime::Remoting::Messaging::IMessageSink* nextSink);
    // public System.Runtime.Remoting.Messaging.IMessage SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0xDFBADC
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessage IMessageSink::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0xDFBC4C
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessageCtrl IMessageSink::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
  }; // System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink*, "System.Runtime.Remoting.Messaging", "ServerObjectTerminatorSink");
#pragma pack(pop)
