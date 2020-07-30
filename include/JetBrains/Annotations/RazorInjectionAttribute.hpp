// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:44 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.RazorInjectionAttribute
  class RazorInjectionAttribute : public System::Attribute {
    public:
    // private System.String <Type>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Type;
    // private System.String <FieldName>k__BackingField
    // Offset: 0x18
    ::Il2CppString* FieldName;
    // public System.Void .ctor(System.String type, System.String fieldName)
    // Offset: 0x19457D8
    static RazorInjectionAttribute* New_ctor(::Il2CppString* type, ::Il2CppString* fieldName);
    // public System.String get_Type()
    // Offset: 0x1945828
    ::Il2CppString* get_Type();
    // private System.Void set_Type(System.String value)
    // Offset: 0x1945830
    void set_Type(::Il2CppString* value);
    // public System.String get_FieldName()
    // Offset: 0x1945838
    ::Il2CppString* get_FieldName();
    // private System.Void set_FieldName(System.String value)
    // Offset: 0x1945840
    void set_FieldName(::Il2CppString* value);
  }; // JetBrains.Annotations.RazorInjectionAttribute
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorInjectionAttribute*, "JetBrains.Annotations", "RazorInjectionAttribute");
#pragma pack(pop)
