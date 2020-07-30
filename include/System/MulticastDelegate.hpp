// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Delegate
#include "System/Delegate.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.MulticastDelegate
  class MulticastDelegate : public System::Delegate {
    public:
    // private System.Delegate[] delegates
    // Offset: 0x68
    ::Array<System::Delegate*>* delegates;
    // private System.Int32 LastIndexOf(System.Delegate[] haystack, System.Delegate[] needle)
    // Offset: 0x100365C
    int LastIndexOf(::Array<System::Delegate*>* haystack, ::Array<System::Delegate*>* needle);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x10030AC
    // Implemented from: System.Delegate
    // Base method: System.Void Delegate::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x10030B4
    // Implemented from: System.Delegate
    // Base method: System.Boolean Delegate::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x100322C
    // Implemented from: System.Delegate
    // Base method: System.Int32 Delegate::GetHashCode()
    int GetHashCode();
    // protected override System.Reflection.MethodInfo GetMethodImpl()
    // Offset: 0x1003234
    // Implemented from: System.Delegate
    // Base method: System.Reflection.MethodInfo Delegate::GetMethodImpl()
    System::Reflection::MethodInfo* GetMethodImpl();
    // public override System.Delegate[] GetInvocationList()
    // Offset: 0x1003288
    // Implemented from: System.Delegate
    // Base method: System.Delegate[] Delegate::GetInvocationList()
    ::Array<System::Delegate*>* GetInvocationList();
    // protected override System.Delegate CombineImpl(System.Delegate follow)
    // Offset: 0x1003380
    // Implemented from: System.Delegate
    // Base method: System.Delegate Delegate::CombineImpl(System.Delegate follow)
    System::Delegate* CombineImpl(System::Delegate* follow);
    // protected override System.Delegate RemoveImpl(System.Delegate value)
    // Offset: 0x100379C
    // Implemented from: System.Delegate
    // Base method: System.Delegate Delegate::RemoveImpl(System.Delegate value)
    System::Delegate* RemoveImpl(System::Delegate* value);
  }; // System.MulticastDelegate
}
DEFINE_IL2CPP_ARG_TYPE(System::MulticastDelegate*, "System", "MulticastDelegate");
#pragma pack(pop)
