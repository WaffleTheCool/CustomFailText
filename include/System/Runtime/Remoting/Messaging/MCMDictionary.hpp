// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:39 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.MessageDictionary
#include "System/Runtime/Remoting/Messaging/MessageDictionary.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMethodMessage
  class IMethodMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.MCMDictionary
  class MCMDictionary : public System::Runtime::Remoting::Messaging::MessageDictionary {
    public:
    // Get static field: static public System.String[] InternalKeys
    static ::Array<::Il2CppString*>* _get_InternalKeys();
    // Set static field: static public System.String[] InternalKeys
    static void _set_InternalKeys(::Array<::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x105587C
    static void _cctor();
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMethodMessage message)
    // Offset: 0x10557E0
    // Implemented from: System.Runtime.Remoting.Messaging.MessageDictionary
    // Base method: System.Void MessageDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage message)
    static MCMDictionary* New_ctor(System::Runtime::Remoting::Messaging::IMethodMessage* message);
  }; // System.Runtime.Remoting.Messaging.MCMDictionary
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MCMDictionary*, "System.Runtime.Remoting.Messaging", "MCMDictionary");
#pragma pack(pop)
