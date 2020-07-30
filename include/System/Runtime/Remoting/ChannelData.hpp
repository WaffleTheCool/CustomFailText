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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.ChannelData
  class ChannelData : public ::Il2CppObject {
    public:
    // System.String Ref
    // Offset: 0x10
    ::Il2CppString* Ref;
    // System.String Type
    // Offset: 0x18
    ::Il2CppString* Type;
    // System.String Id
    // Offset: 0x20
    ::Il2CppString* Id;
    // System.String DelayLoadAsClientChannel
    // Offset: 0x28
    ::Il2CppString* DelayLoadAsClientChannel;
    // private System.Collections.ArrayList _serverProviders
    // Offset: 0x30
    System::Collections::ArrayList* serverProviders;
    // private System.Collections.ArrayList _clientProviders
    // Offset: 0x38
    System::Collections::ArrayList* clientProviders;
    // private System.Collections.Hashtable _customProperties
    // Offset: 0x40
    System::Collections::Hashtable* customProperties;
    // System.Collections.ArrayList get_ServerProviders()
    // Offset: 0x103F118
    System::Collections::ArrayList* get_ServerProviders();
    // public System.Collections.ArrayList get_ClientProviders()
    // Offset: 0x103F190
    System::Collections::ArrayList* get_ClientProviders();
    // public System.Collections.Hashtable get_CustomProperties()
    // Offset: 0x103F208
    System::Collections::Hashtable* get_CustomProperties();
    // public System.Void CopyFrom(System.Runtime.Remoting.ChannelData other)
    // Offset: 0x103F280
    void CopyFrom(System::Runtime::Remoting::ChannelData* other);
    // public System.Void .ctor()
    // Offset: 0x103FAE8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ChannelData* New_ctor();
  }; // System.Runtime.Remoting.ChannelData
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ChannelData*, "System.Runtime.Remoting", "ChannelData");
#pragma pack(pop)
