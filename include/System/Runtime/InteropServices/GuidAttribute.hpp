// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:40 PM
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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.GuidAttribute
  class GuidAttribute : public System::Attribute {
    public:
    // System.String _val
    // Offset: 0x10
    ::Il2CppString* val;
    // public System.Void .ctor(System.String guid)
    // Offset: 0x103B6A4
    static GuidAttribute* New_ctor(::Il2CppString* guid);
  }; // System.Runtime.InteropServices.GuidAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::GuidAttribute*, "System.Runtime.InteropServices", "GuidAttribute");
#pragma pack(pop)
