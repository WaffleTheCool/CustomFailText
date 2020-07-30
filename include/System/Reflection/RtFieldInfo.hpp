// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:31 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Reflection.RuntimeFieldInfo
#include "System/Reflection/RuntimeFieldInfo.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TypedReference
  struct TypedReference;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.RtFieldInfo
  class RtFieldInfo : public System::Reflection::RuntimeFieldInfo {
    public:
    // System.Object UnsafeGetValue(System.Object obj)
    // Offset: 0x1140648
    ::Il2CppObject* UnsafeGetValue(::Il2CppObject* obj);
    // System.Void CheckConsistency(System.Object target)
    // Offset: 0x114064C
    void CheckConsistency(::Il2CppObject* target);
    // System.Void UnsafeSetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Globalization.CultureInfo culture)
    // Offset: 0x1140804
    void UnsafeSetValue(::Il2CppObject* obj, ::Il2CppObject* value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, System::Globalization::CultureInfo* culture);
    // public override System.Void SetValueDirect(System.TypedReference obj, System.Object value)
    // Offset: 0x114086C
    // Implemented from: System.Reflection.FieldInfo
    // Base method: System.Void FieldInfo::SetValueDirect(System.TypedReference obj, System.Object value)
    void SetValueDirect(System::TypedReference obj, ::Il2CppObject* value);
    // protected System.Void .ctor()
    // Offset: 0x113C7C8
    // Implemented from: System.Reflection.RuntimeFieldInfo
    // Base method: System.Void RuntimeFieldInfo::.ctor()
    // Base method: System.Void FieldInfo::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    static RtFieldInfo* New_ctor();
  }; // System.Reflection.RtFieldInfo
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::RtFieldInfo*, "System.Reflection", "RtFieldInfo");
#pragma pack(pop)
