// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:28 PM
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
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ManagedStreamHelpers
  class ManagedStreamHelpers : public ::Il2CppObject {
    public:
    // static System.Void ValidateLoadFromStream(System.IO.Stream stream)
    // Offset: 0x12FB694
    static void ValidateLoadFromStream(System::IO::Stream* stream);
    // static System.Void ManagedStreamRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.IO.Stream stream, System.IntPtr returnValueAddress)
    // Offset: 0x12FB79C
    static void ManagedStreamRead(::Array<uint8_t>* buffer, int offset, int count, System::IO::Stream* stream, System::IntPtr returnValueAddress);
    // static System.Void ManagedStreamSeek(System.Int64 offset, System.UInt32 origin, System.IO.Stream stream, System.IntPtr returnValueAddress)
    // Offset: 0x12FB89C
    static void ManagedStreamSeek(int64_t offset, uint origin, System::IO::Stream* stream, System::IntPtr returnValueAddress);
    // static System.Void ManagedStreamLength(System.IO.Stream stream, System.IntPtr returnValueAddress)
    // Offset: 0x12FB994
    static void ManagedStreamLength(System::IO::Stream* stream, System::IntPtr returnValueAddress);
  }; // UnityEngine.ManagedStreamHelpers
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ManagedStreamHelpers*, "UnityEngine", "ManagedStreamHelpers");
#pragma pack(pop)
