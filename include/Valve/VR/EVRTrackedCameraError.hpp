// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.EVRTrackedCameraError
  struct EVRTrackedCameraError : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Valve.VR.EVRTrackedCameraError None
    static constexpr const int None = 0;
    // Get static field: static public Valve.VR.EVRTrackedCameraError None
    static Valve::VR::EVRTrackedCameraError _get_None();
    // Set static field: static public Valve.VR.EVRTrackedCameraError None
    static void _set_None(Valve::VR::EVRTrackedCameraError value);
    // static field const value: static public Valve.VR.EVRTrackedCameraError OperationFailed
    static constexpr const int OperationFailed = 100;
    // Get static field: static public Valve.VR.EVRTrackedCameraError OperationFailed
    static Valve::VR::EVRTrackedCameraError _get_OperationFailed();
    // Set static field: static public Valve.VR.EVRTrackedCameraError OperationFailed
    static void _set_OperationFailed(Valve::VR::EVRTrackedCameraError value);
    // static field const value: static public Valve.VR.EVRTrackedCameraError InvalidHandle
    static constexpr const int InvalidHandle = 101;
    // Get static field: static public Valve.VR.EVRTrackedCameraError InvalidHandle
    static Valve::VR::EVRTrackedCameraError _get_InvalidHandle();
    // Set static field: static public Valve.VR.EVRTrackedCameraError InvalidHandle
    static void _set_InvalidHandle(Valve::VR::EVRTrackedCameraError value);
    // static field const value: static public Valve.VR.EVRTrackedCameraError InvalidFrameHeaderVersion
    static constexpr const int InvalidFrameHeaderVersion = 102;
    // Get static field: static public Valve.VR.EVRTrackedCameraError InvalidFrameHeaderVersion
    static Valve::VR::EVRTrackedCameraError _get_InvalidFrameHeaderVersion();
    // Set static field: static public Valve.VR.EVRTrackedCameraError InvalidFrameHeaderVersion
    static void _set_InvalidFrameHeaderVersion(Valve::VR::EVRTrackedCameraError value);
    // static field const value: static public Valve.VR.EVRTrackedCameraError OutOfHandles
    static constexpr const int OutOfHandles = 103;
    // Get static field: static public Valve.VR.EVRTrackedCameraError OutOfHandles
    static Valve::VR::EVRTrackedCameraError _get_OutOfHandles();
    // Set static field: static public Valve.VR.EVRTrackedCameraError OutOfHandles
    static void _set_OutOfHandles(Valve::VR::EVRTrackedCameraError value);
    // static field const value: static public Valve.VR.EVRTrackedCameraError IPCFailure
    static constexpr const int IPCFailure = 104;
    // Get static field: static public Valve.VR.EVRTrackedCameraError IPCFailure
    static Valve::VR::EVRTrackedCameraError _get_IPCFailure();
    // Set static field: static public Valve.VR.EVRTrackedCameraError IPCFailure
    static void _set_IPCFailure(Valve::VR::EVRTrackedCameraError value);
    // static field const value: static public Valve.VR.EVRTrackedCameraError NotSupportedForThisDevice
    static constexpr const int NotSupportedForThisDevice = 105;
    // Get static field: static public Valve.VR.EVRTrackedCameraError NotSupportedForThisDevice
    static Valve::VR::EVRTrackedCameraError _get_NotSupportedForThisDevice();
    // Set static field: static public Valve.VR.EVRTrackedCameraError NotSupportedForThisDevice
    static void _set_NotSupportedForThisDevice(Valve::VR::EVRTrackedCameraError value);
    // static field const value: static public Valve.VR.EVRTrackedCameraError SharedMemoryFailure
    static constexpr const int SharedMemoryFailure = 106;
    // Get static field: static public Valve.VR.EVRTrackedCameraError SharedMemoryFailure
    static Valve::VR::EVRTrackedCameraError _get_SharedMemoryFailure();
    // Set static field: static public Valve.VR.EVRTrackedCameraError SharedMemoryFailure
    static void _set_SharedMemoryFailure(Valve::VR::EVRTrackedCameraError value);
    // static field const value: static public Valve.VR.EVRTrackedCameraError FrameBufferingFailure
    static constexpr const int FrameBufferingFailure = 107;
    // Get static field: static public Valve.VR.EVRTrackedCameraError FrameBufferingFailure
    static Valve::VR::EVRTrackedCameraError _get_FrameBufferingFailure();
    // Set static field: static public Valve.VR.EVRTrackedCameraError FrameBufferingFailure
    static void _set_FrameBufferingFailure(Valve::VR::EVRTrackedCameraError value);
    // static field const value: static public Valve.VR.EVRTrackedCameraError StreamSetupFailure
    static constexpr const int StreamSetupFailure = 108;
    // Get static field: static public Valve.VR.EVRTrackedCameraError StreamSetupFailure
    static Valve::VR::EVRTrackedCameraError _get_StreamSetupFailure();
    // Set static field: static public Valve.VR.EVRTrackedCameraError StreamSetupFailure
    static void _set_StreamSetupFailure(Valve::VR::EVRTrackedCameraError value);
    // static field const value: static public Valve.VR.EVRTrackedCameraError InvalidGLTextureId
    static constexpr const int InvalidGLTextureId = 109;
    // Get static field: static public Valve.VR.EVRTrackedCameraError InvalidGLTextureId
    static Valve::VR::EVRTrackedCameraError _get_InvalidGLTextureId();
    // Set static field: static public Valve.VR.EVRTrackedCameraError InvalidGLTextureId
    static void _set_InvalidGLTextureId(Valve::VR::EVRTrackedCameraError value);
    // static field const value: static public Valve.VR.EVRTrackedCameraError InvalidSharedTextureHandle
    static constexpr const int InvalidSharedTextureHandle = 110;
    // Get static field: static public Valve.VR.EVRTrackedCameraError InvalidSharedTextureHandle
    static Valve::VR::EVRTrackedCameraError _get_InvalidSharedTextureHandle();
    // Set static field: static public Valve.VR.EVRTrackedCameraError InvalidSharedTextureHandle
    static void _set_InvalidSharedTextureHandle(Valve::VR::EVRTrackedCameraError value);
    // static field const value: static public Valve.VR.EVRTrackedCameraError FailedToGetGLTextureId
    static constexpr const int FailedToGetGLTextureId = 111;
    // Get static field: static public Valve.VR.EVRTrackedCameraError FailedToGetGLTextureId
    static Valve::VR::EVRTrackedCameraError _get_FailedToGetGLTextureId();
    // Set static field: static public Valve.VR.EVRTrackedCameraError FailedToGetGLTextureId
    static void _set_FailedToGetGLTextureId(Valve::VR::EVRTrackedCameraError value);
    // static field const value: static public Valve.VR.EVRTrackedCameraError SharedTextureFailure
    static constexpr const int SharedTextureFailure = 112;
    // Get static field: static public Valve.VR.EVRTrackedCameraError SharedTextureFailure
    static Valve::VR::EVRTrackedCameraError _get_SharedTextureFailure();
    // Set static field: static public Valve.VR.EVRTrackedCameraError SharedTextureFailure
    static void _set_SharedTextureFailure(Valve::VR::EVRTrackedCameraError value);
    // static field const value: static public Valve.VR.EVRTrackedCameraError NoFrameAvailable
    static constexpr const int NoFrameAvailable = 113;
    // Get static field: static public Valve.VR.EVRTrackedCameraError NoFrameAvailable
    static Valve::VR::EVRTrackedCameraError _get_NoFrameAvailable();
    // Set static field: static public Valve.VR.EVRTrackedCameraError NoFrameAvailable
    static void _set_NoFrameAvailable(Valve::VR::EVRTrackedCameraError value);
    // static field const value: static public Valve.VR.EVRTrackedCameraError InvalidArgument
    static constexpr const int InvalidArgument = 114;
    // Get static field: static public Valve.VR.EVRTrackedCameraError InvalidArgument
    static Valve::VR::EVRTrackedCameraError _get_InvalidArgument();
    // Set static field: static public Valve.VR.EVRTrackedCameraError InvalidArgument
    static void _set_InvalidArgument(Valve::VR::EVRTrackedCameraError value);
    // static field const value: static public Valve.VR.EVRTrackedCameraError InvalidFrameBufferSize
    static constexpr const int InvalidFrameBufferSize = 115;
    // Get static field: static public Valve.VR.EVRTrackedCameraError InvalidFrameBufferSize
    static Valve::VR::EVRTrackedCameraError _get_InvalidFrameBufferSize();
    // Set static field: static public Valve.VR.EVRTrackedCameraError InvalidFrameBufferSize
    static void _set_InvalidFrameBufferSize(Valve::VR::EVRTrackedCameraError value);
    // Creating value type constructor for type: EVRTrackedCameraError
    EVRTrackedCameraError(int value_ = {}) : value{value_} {}
  }; // Valve.VR.EVRTrackedCameraError
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRTrackedCameraError, "Valve.VR", "EVRTrackedCameraError");
#pragma pack(pop)
