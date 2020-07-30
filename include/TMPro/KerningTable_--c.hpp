// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:19 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: TMPro.KerningTable
#include "TMPro/KerningTable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: KerningPair
  class KerningPair;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.KerningTable/<>c
  class KerningTable::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly TMPro.KerningTable/<>c <>9
    static TMPro::KerningTable::$$c* _get_$$9();
    // Set static field: static public readonly TMPro.KerningTable/<>c <>9
    static void _set_$$9(TMPro::KerningTable::$$c* value);
    // Get static field: static public System.Func`2<TMPro.KerningPair,System.UInt32> <>9__7_0
    static System::Func_2<TMPro::KerningPair*, uint>* _get_$$9__7_0();
    // Set static field: static public System.Func`2<TMPro.KerningPair,System.UInt32> <>9__7_0
    static void _set_$$9__7_0(System::Func_2<TMPro::KerningPair*, uint>* value);
    // Get static field: static public System.Func`2<TMPro.KerningPair,System.UInt32> <>9__7_1
    static System::Func_2<TMPro::KerningPair*, uint>* _get_$$9__7_1();
    // Set static field: static public System.Func`2<TMPro.KerningPair,System.UInt32> <>9__7_1
    static void _set_$$9__7_1(System::Func_2<TMPro::KerningPair*, uint>* value);
    // static private System.Void .cctor()
    // Offset: 0xB65948
    static void _cctor();
    // System.UInt32 <SortKerningPairs>b__7_0(TMPro.KerningPair s)
    // Offset: 0xB659B8
    uint $SortKerningPairs$b__7_0(TMPro::KerningPair* s);
    // System.UInt32 <SortKerningPairs>b__7_1(TMPro.KerningPair s)
    // Offset: 0xB659D0
    uint $SortKerningPairs$b__7_1(TMPro::KerningPair* s);
    // public System.Void .ctor()
    // Offset: 0xB659B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static KerningTable::$$c* New_ctor();
  }; // TMPro.KerningTable/<>c
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::KerningTable::$$c*, "TMPro", "KerningTable/<>c");
#pragma pack(pop)
