// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:37 PM
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
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: IDynamicProperty
  class IDynamicProperty;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Autogenerated type: System.Runtime.Remoting.Contexts.DynamicPropertyCollection
  class DynamicPropertyCollection : public ::Il2CppObject {
    public:
    // Nested type: System::Runtime::Remoting::Contexts::DynamicPropertyCollection::DynamicPropertyReg
    class DynamicPropertyReg;
    // private System.Collections.ArrayList _properties
    // Offset: 0x10
    System::Collections::ArrayList* properties;
    // public System.Boolean get_HasProperties()
    // Offset: 0x10488C8
    bool get_HasProperties();
    // public System.Boolean RegisterDynamicProperty(System.Runtime.Remoting.Contexts.IDynamicProperty prop)
    // Offset: 0x1048B88
    bool RegisterDynamicProperty(System::Runtime::Remoting::Contexts::IDynamicProperty* prop);
    // public System.Boolean UnregisterDynamicProperty(System.String name)
    // Offset: 0x1048EE4
    bool UnregisterDynamicProperty(::Il2CppString* name);
    // public System.Void NotifyMessage(System.Boolean start, System.Runtime.Remoting.Messaging.IMessage msg, System.Boolean client_site, System.Boolean async)
    // Offset: 0x1049254
    void NotifyMessage(bool start, System::Runtime::Remoting::Messaging::IMessage* msg, bool client_site, bool async);
    // private System.Int32 FindProperty(System.String name)
    // Offset: 0x104B064
    int FindProperty(::Il2CppString* name);
    // public System.Void .ctor()
    // Offset: 0x10490C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DynamicPropertyCollection* New_ctor();
  }; // System.Runtime.Remoting.Contexts.DynamicPropertyCollection
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::DynamicPropertyCollection*, "System.Runtime.Remoting.Contexts", "DynamicPropertyCollection");
#pragma pack(pop)
