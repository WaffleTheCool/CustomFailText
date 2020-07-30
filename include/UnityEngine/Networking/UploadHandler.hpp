// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Autogenerated type: UnityEngine.Networking.UploadHandler
  class UploadHandler : public ::Il2CppObject, public System::IDisposable {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // private System.Void Release()
    // Offset: 0x192E518
    void Release();
    // public System.Void set_contentType(System.String value)
    // Offset: 0x192E36C
    void set_contentType(::Il2CppString* value);
    // System.Void SetContentType(System.String newContentType)
    // Offset: 0x192E5C8
    void SetContentType(::Il2CppString* newContentType);
    // private System.Void InternalSetContentType(System.String newContentType)
    // Offset: 0x192E618
    void InternalSetContentType(::Il2CppString* newContentType);
    // System.Void .ctor()
    // Offset: 0x192E558
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static UploadHandler* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x192E560
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void Dispose()
    // Offset: 0x192CF48
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // UnityEngine.Networking.UploadHandler
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UploadHandler*, "UnityEngine.Networking", "UploadHandler");
#pragma pack(pop)
