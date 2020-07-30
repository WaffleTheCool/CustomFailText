// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:36 PM
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions
namespace UnityEngine::TestRunner::NUnitExtensions {
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.TestExtensions
  class TestExtensions : public ::Il2CppObject {
    public:
    // static private System.Collections.Generic.IEnumerable`1<System.String> GetTestCategories(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xE224C0
    static System::Collections::Generic::IEnumerable_1<::Il2CppString*>* GetTestCategories(NUnit::Framework::Interfaces::ITest* test);
    // static public System.Collections.Generic.List`1<System.String> GetAllCategoriesFromTest(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xE22814
    static System::Collections::Generic::List_1<::Il2CppString*>* GetAllCategoriesFromTest(NUnit::Framework::Interfaces::ITest* test);
    // static public System.Void ParseForNameDuplicates(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xE22980
    static void ParseForNameDuplicates(NUnit::Framework::Interfaces::ITest* test);
    // static public System.Int32 GetChildIndex(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xE22E98
    static int GetChildIndex(NUnit::Framework::Interfaces::ITest* test);
    // static public System.Boolean HasChildIndex(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xE23074
    static bool HasChildIndex(NUnit::Framework::Interfaces::ITest* test);
    // static private System.String GetAncestorPath(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xE23228
    static ::Il2CppString* GetAncestorPath(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetUniqueName(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xE234C0
    static ::Il2CppString* GetUniqueName(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetFullName(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xE23610
    static ::Il2CppString* GetFullName(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetSkipReason(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xE23B90
    static ::Il2CppString* GetSkipReason(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetParentId(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xE23DDC
    static ::Il2CppString* GetParentId(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetParentFullName(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xE23F68
    static ::Il2CppString* GetParentFullName(NUnit::Framework::Interfaces::ITest* test);
    // static public System.String GetParentUniqueName(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xE240F8
    static ::Il2CppString* GetParentUniqueName(NUnit::Framework::Interfaces::ITest* test);
  }; // UnityEngine.TestRunner.NUnitExtensions.TestExtensions
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::TestExtensions*, "UnityEngine.TestRunner.NUnitExtensions", "TestExtensions");
#pragma pack(pop)
