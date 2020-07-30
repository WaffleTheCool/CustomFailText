// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Nullable`1
  template<typename T>
  struct Nullable_1 : public System::ValueType {
    public:
    // T value
    // Offset: 0x0
    T value;
    // System.Boolean has_value
    // Offset: 0x0
    bool has_value;
    // Creating value type constructor for type: Nullable_1
    Nullable_1(T value_ = {}, bool has_value_ = {}) : value{value_}, has_value{has_value_} {}
    // public System.Void .ctor(T value)
    // Offset: 0xA40070
    static Nullable_1<T>* New_ctor(T value) {
      return (Nullable_1<T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Nullable_1<T>>::get(), value));
    }
    // public System.Boolean get_HasValue()
    // Offset: 0xA4008C
    bool get_HasValue() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "get_HasValue"));
    }
    // public T get_Value()
    // Offset: 0xA400E8
    T get_Value() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<T>(*this, "get_Value"));
    }
    // private System.Boolean Equals(System.Nullable`1<T> other)
    // Offset: 0xA401DC
    bool Equals(System::Nullable_1<T> other) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", other));
    }
    // public T GetValueOrDefault()
    // Offset: 0xA4056C
    T GetValueOrDefault() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<T>(*this, "GetValueOrDefault"));
    }
    // static private System.Object Box(System.Nullable`1<T> o)
    // Offset: 0x12C8FF8
    static ::Il2CppObject* Box(System::Nullable_1<T> o) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Nullable_1<T>>::get(), "Box", o));
    }
    // static private System.Nullable`1<T> Unbox(System.Object o)
    // Offset: 0x12C9070
    static System::Nullable_1<T> Unbox(::Il2CppObject* o) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Nullable_1<T>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Nullable_1<T>>::get(), "Unbox", o));
    }
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xA40160
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Equals", other));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xA40264
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<int>(*this, "GetHashCode"));
    }
    // public override System.String ToString()
    // Offset: 0xA40334
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(*this, "ToString"));
    }
  }; // System.Nullable`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Nullable_1, "System", "Nullable`1");
#pragma pack(pop)
