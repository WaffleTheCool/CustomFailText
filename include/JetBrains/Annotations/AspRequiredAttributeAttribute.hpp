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
  // Autogenerated type: JetBrains.Annotations.AspRequiredAttributeAttribute
  class AspRequiredAttributeAttribute : public System::Attribute {
    public:
    // private System.String <Attribute>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Attribute;
    // public System.Void .ctor(System.String attribute)
    // Offset: 0x19451A0
    static AspRequiredAttributeAttribute* New_ctor(::Il2CppString* attribute);
    // public System.String get_Attribute()
    // Offset: 0x19451D4
    ::Il2CppString* get_Attribute();
    // private System.Void set_Attribute(System.String value)
    // Offset: 0x19451DC
    void set_Attribute(::Il2CppString* value);
  }; // JetBrains.Annotations.AspRequiredAttributeAttribute
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspRequiredAttributeAttribute*, "JetBrains.Annotations", "AspRequiredAttributeAttribute");
#pragma pack(pop)
