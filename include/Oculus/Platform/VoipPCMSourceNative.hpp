// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:02 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Oculus.Platform.IVoipPCMSource
#include "Oculus/Platform/IVoipPCMSource.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.VoipPCMSourceNative
  class VoipPCMSourceNative : public ::Il2CppObject, public Oculus::Platform::IVoipPCMSource {
    public:
    // private System.UInt64 senderID
    // Offset: 0x10
    uint64_t senderID;
    // public System.Int32 GetPCM(System.Single[] dest, System.Int32 length)
    // Offset: 0x1951498
    // Implemented from: Oculus.Platform.IVoipPCMSource
    // Base method: System.Int32 IVoipPCMSource::GetPCM(System.Single[] dest, System.Int32 length)
    int GetPCM(::Array<float>* dest, int length);
    // public System.Void SetSenderID(System.UInt64 senderID)
    // Offset: 0x1951558
    // Implemented from: Oculus.Platform.IVoipPCMSource
    // Base method: System.Void IVoipPCMSource::SetSenderID(System.UInt64 senderID)
    void SetSenderID(uint64_t senderID);
    // public System.Int32 PeekSizeElements()
    // Offset: 0x1951560
    // Implemented from: Oculus.Platform.IVoipPCMSource
    // Base method: System.Int32 IVoipPCMSource::PeekSizeElements()
    int PeekSizeElements();
    // public System.Void Update()
    // Offset: 0x1951600
    // Implemented from: Oculus.Platform.IVoipPCMSource
    // Base method: System.Void IVoipPCMSource::Update()
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1950930
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static VoipPCMSourceNative* New_ctor();
  }; // Oculus.Platform.VoipPCMSourceNative
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::VoipPCMSourceNative*, "Oculus.Platform", "VoipPCMSourceNative");
#pragma pack(pop)
