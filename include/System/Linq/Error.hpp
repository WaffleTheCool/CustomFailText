// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:11 PM
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Linq
namespace System::Linq {
  // Autogenerated type: System.Linq.Error
  class Error : public ::Il2CppObject {
    public:
    // static System.Exception ArgumentNull(System.String s)
    // Offset: 0x1964960
    static System::Exception* ArgumentNull(::Il2CppString* s);
    // static System.Exception ArgumentOutOfRange(System.String s)
    // Offset: 0x19652B8
    static System::Exception* ArgumentOutOfRange(::Il2CppString* s);
    // static System.Exception MoreThanOneElement()
    // Offset: 0x196531C
    static System::Exception* MoreThanOneElement();
    // static System.Exception MoreThanOneMatch()
    // Offset: 0x1965384
    static System::Exception* MoreThanOneMatch();
    // static System.Exception NoElements()
    // Offset: 0x1964C9C
    static System::Exception* NoElements();
    // static System.Exception NoMatch()
    // Offset: 0x19653EC
    static System::Exception* NoMatch();
    // static System.Exception NotSupported()
    // Offset: 0x1965454
    static System::Exception* NotSupported();
  }; // System.Linq.Error
}
DEFINE_IL2CPP_ARG_TYPE(System::Linq::Error*, "System.Linq", "Error");
#pragma pack(pop)
