// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:14 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ComponentModel.Win32Exception
#include "System/ComponentModel/Win32Exception.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: EndPoint
  class EndPoint;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: SocketError
  struct SocketError;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Autogenerated type: System.Net.Sockets.SocketException
  class SocketException : public System::ComponentModel::Win32Exception {
    public:
    // private System.Net.EndPoint m_EndPoint
    // Offset: 0x90
    System::Net::EndPoint* m_EndPoint;
    // static private System.Int32 WSAGetLastError_internal()
    // Offset: 0x1200188
    static int WSAGetLastError_internal();
    // System.Void .ctor(System.Net.Sockets.SocketError socketError)
    // Offset: 0x11FF5F0
    static SocketException* New_ctor(System::Net::Sockets::SocketError socketError);
    // public System.Net.Sockets.SocketError get_SocketErrorCode()
    // Offset: 0x11FDC50
    System::Net::Sockets::SocketError get_SocketErrorCode();
    // public System.Void .ctor()
    // Offset: 0x120018C
    // Implemented from: System.ComponentModel.Win32Exception
    // Base method: System.Void Win32Exception::.ctor()
    // Base method: System.Void ExternalException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static SocketException* New_ctor();
    // System.Void .ctor(System.Int32 error, System.String message)
    // Offset: 0x1200204
    // Implemented from: System.ComponentModel.Win32Exception
    // Base method: System.Void Win32Exception::.ctor(System.Int32 error, System.String message)
    static SocketException* New_ctor(int error, ::Il2CppString* message);
    // public System.Void .ctor(System.Int32 errorCode)
    // Offset: 0x11FE060
    // Implemented from: System.ComponentModel.Win32Exception
    // Base method: System.Void Win32Exception::.ctor(System.Int32 errorCode)
    static SocketException* New_ctor(int errorCode);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x1200284
    // Implemented from: System.ComponentModel.Win32Exception
    // Base method: System.Void Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void ExternalException::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    static SocketException* New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.String get_Message()
    // Offset: 0x1200314
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::Il2CppString* get_Message();
  }; // System.Net.Sockets.SocketException
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketException*, "System.Net.Sockets", "SocketException");
#pragma pack(pop)
