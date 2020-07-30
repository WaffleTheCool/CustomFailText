// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Object
  class Object {
    public:
    // public System.Boolean Equals(System.Object obj)
    // Offset: 0x1346F5C
    bool Equals(::Il2CppObject* obj);
    // static public System.Boolean Equals(System.Object objA, System.Object objB)
    // Offset: 0x1346F68
    static bool Equals(::Il2CppObject* objA, ::Il2CppObject* objB);
    // public System.Void .ctor()
    // Offset: 0x1342478
    static ::Il2CppObject* New_ctor();
    // protected System.Void Finalize()
    // Offset: 0x1346F94
    void Finalize();
    // public System.Int32 GetHashCode()
    // Offset: 0x1346F98
    int GetHashCode();
    // public System.Type GetType()
    // Offset: 0x1346FA0
    System::Type* GetType();
    // protected System.Object MemberwiseClone()
    // Offset: 0x1346F44
    ::Il2CppObject* MemberwiseClone();
    // public System.String ToString()
    // Offset: 0x1346FA4
    ::Il2CppString* ToString();
    // static public System.Boolean ReferenceEquals(System.Object objA, System.Object objB)
    // Offset: 0x1346FC8
    static bool ReferenceEquals(::Il2CppObject* objA, ::Il2CppObject* objB);
    // static System.Int32 InternalGetHashCode(System.Object o)
    // Offset: 0x1346F9C
    static int InternalGetHashCode(::Il2CppObject* o);
    // private System.Void FieldGetter(System.String typeName, System.String fieldName, System.Object val)
    // Offset: 0x1346FD4
    void FieldGetter(::Il2CppString* typeName, ::Il2CppString* fieldName, ::Il2CppObject*& val);
    // private System.Void FieldSetter(System.String typeName, System.String fieldName, System.Object val)
    // Offset: 0x1346FD8
    void FieldSetter(::Il2CppString* typeName, ::Il2CppString* fieldName, ::Il2CppObject* val);
  }; // System.Object
}
DEFINE_IL2CPP_ARG_TYPE(System::Object*, "System", "Object");
#pragma pack(pop)
