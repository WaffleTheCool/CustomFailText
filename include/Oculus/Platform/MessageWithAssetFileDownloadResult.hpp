// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:00 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AssetFileDownloadResult
  class AssetFileDownloadResult;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithAssetFileDownloadResult
  class MessageWithAssetFileDownloadResult : public Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadResult*> {
    public:
    // protected Oculus.Platform.Models.AssetFileDownloadResult GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xE8B2DC
    Oculus::Platform::Models::AssetFileDownloadResult* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xE88140
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message`1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithAssetFileDownloadResult* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.AssetFileDownloadResult GetAssetFileDownloadResult()
    // Offset: 0xE8B298
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.AssetFileDownloadResult Message::GetAssetFileDownloadResult()
    Oculus::Platform::Models::AssetFileDownloadResult* GetAssetFileDownloadResult();
  }; // Oculus.Platform.MessageWithAssetFileDownloadResult
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithAssetFileDownloadResult*, "Oculus.Platform", "MessageWithAssetFileDownloadResult");
#pragma pack(pop)
