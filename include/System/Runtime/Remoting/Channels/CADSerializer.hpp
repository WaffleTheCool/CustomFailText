// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMethodCallMessage
  class IMethodCallMessage;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Channels
namespace System::Runtime::Remoting::Channels {
  // Autogenerated type: System.Runtime.Remoting.Channels.CADSerializer
  class CADSerializer : public ::Il2CppObject {
    public:
    // static System.Runtime.Remoting.Messaging.IMessage DeserializeMessage(System.IO.MemoryStream mem, System.Runtime.Remoting.Messaging.IMethodCallMessage msg)
    // Offset: 0x104012C
    static System::Runtime::Remoting::Messaging::IMessage* DeserializeMessage(System::IO::MemoryStream* mem, System::Runtime::Remoting::Messaging::IMethodCallMessage* msg);
    // static System.IO.MemoryStream SerializeMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x104018C
    static System::IO::MemoryStream* SerializeMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // static System.Object DeserializeObjectSafe(System.Byte[] mem)
    // Offset: 0x1040270
    static ::Il2CppObject* DeserializeObjectSafe(::Array<uint8_t>* mem);
    // static System.IO.MemoryStream SerializeObject(System.Object obj)
    // Offset: 0x10403A0
    static System::IO::MemoryStream* SerializeObject(::Il2CppObject* obj);
    // static System.Object DeserializeObject(System.IO.MemoryStream mem)
    // Offset: 0x1040308
    static ::Il2CppObject* DeserializeObject(System::IO::MemoryStream* mem);
  }; // System.Runtime.Remoting.Channels.CADSerializer
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::CADSerializer*, "System.Runtime.Remoting.Channels", "CADSerializer");
#pragma pack(pop)
