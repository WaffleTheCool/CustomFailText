// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Remoting.IChannelInfo
#include "System/Runtime/Remoting/IChannelInfo.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.ChannelInfo
  class ChannelInfo : public ::Il2CppObject, public System::Runtime::Remoting::IChannelInfo {
    public:
    // private System.Object[] channelData
    // Offset: 0x10
    ::Array<::Il2CppObject*>* channelData;
    // public System.Void .ctor(System.Object remoteChannelData)
    // Offset: 0x1040008
    static ChannelInfo* New_ctor(::Il2CppObject* remoteChannelData);
    // public System.Void .ctor()
    // Offset: 0x103FBB4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ChannelInfo* New_ctor();
    // public System.Object[] get_ChannelData()
    // Offset: 0x10400D4
    // Implemented from: System.Runtime.Remoting.IChannelInfo
    // Base method: System.Object[] IChannelInfo::get_ChannelData()
    ::Array<::Il2CppObject*>* get_ChannelData();
  }; // System.Runtime.Remoting.ChannelInfo
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ChannelInfo*, "System.Runtime.Remoting", "ChannelInfo");
#pragma pack(pop)
