// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:14 PM
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
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: AddressFamily
  struct AddressFamily;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.SocketAddress
  class SocketAddress : public ::Il2CppObject {
    public:
    // System.Int32 m_Size
    // Offset: 0x10
    int m_Size;
    // System.Byte[] m_Buffer
    // Offset: 0x18
    ::Array<uint8_t>* m_Buffer;
    // private System.Boolean m_changed
    // Offset: 0x20
    bool m_changed;
    // private System.Int32 m_hash
    // Offset: 0x24
    int m_hash;
    // public System.Net.Sockets.AddressFamily get_Family()
    // Offset: 0xF57B9C
    System::Net::Sockets::AddressFamily get_Family();
    // public System.Int32 get_Size()
    // Offset: 0xF57FFC
    int get_Size();
    // public System.Byte get_Item(System.Int32 offset)
    // Offset: 0xF58004
    uint8_t get_Item(int offset);
    // public System.Void .ctor(System.Net.Sockets.AddressFamily family, System.Int32 size)
    // Offset: 0xF580BC
    static SocketAddress* New_ctor(System::Net::Sockets::AddressFamily family, int size);
    // System.Void .ctor(System.Net.IPAddress ipAddress)
    // Offset: 0xF581F0
    static SocketAddress* New_ctor(System::Net::IPAddress* ipAddress);
    // System.Void .ctor(System.Net.IPAddress ipaddress, System.Int32 port)
    // Offset: 0xF57814
    static SocketAddress* New_ctor(System::Net::IPAddress* ipaddress, int port);
    // System.Net.IPAddress GetIPAddress()
    // Offset: 0xF5843C
    System::Net::IPAddress* GetIPAddress();
    // System.Net.IPEndPoint GetIPEndPoint()
    // Offset: 0xF57BE0
    System::Net::IPEndPoint* GetIPEndPoint();
    // public override System.Boolean Equals(System.Object comparand)
    // Offset: 0xF58624
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object comparand)
    bool Equals(::Il2CppObject* comparand);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF58718
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xF58864
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.SocketAddress
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::SocketAddress*, "System.Net", "SocketAddress");
#pragma pack(pop)
