// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:47 PM
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
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Autogenerated type: NUnit.Framework.Internal.Commands.SetUpTearDownItem
  class SetUpTearDownItem : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.IList`1<System.Reflection.MethodInfo> _setUpMethods
    // Offset: 0x10
    System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* setUpMethods;
    // private System.Collections.Generic.IList`1<System.Reflection.MethodInfo> _tearDownMethods
    // Offset: 0x18
    System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* tearDownMethods;
    // private System.Boolean _setUpWasRun
    // Offset: 0x20
    bool setUpWasRun;
    // public System.Void .ctor(System.Collections.Generic.IList`1<System.Reflection.MethodInfo> setUpMethods, System.Collections.Generic.IList`1<System.Reflection.MethodInfo> tearDownMethods)
    // Offset: 0x1073348
    static SetUpTearDownItem* New_ctor(System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* setUpMethods, System::Collections::Generic::IList_1<System::Reflection::MethodInfo*>* tearDownMethods);
    // public System.Boolean get_HasMethods()
    // Offset: 0x1073398
    bool get_HasMethods();
    // public System.Void RunSetUp(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x10726E0
    void RunSetUp(NUnit::Framework::Internal::ITestExecutionContext* context);
    // public System.Void RunTearDown(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x1073024
    void RunTearDown(NUnit::Framework::Internal::ITestExecutionContext* context);
    // private System.Void RunSetUpOrTearDownMethod(NUnit.Framework.Internal.ITestExecutionContext context, System.Reflection.MethodInfo method)
    // Offset: 0x10734D4
    void RunSetUpOrTearDownMethod(NUnit::Framework::Internal::ITestExecutionContext* context, System::Reflection::MethodInfo* method);
    // private System.Object RunNonAsyncMethod(System.Reflection.MethodInfo method, NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x10734E4
    ::Il2CppObject* RunNonAsyncMethod(System::Reflection::MethodInfo* method, NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // NUnit.Framework.Internal.Commands.SetUpTearDownItem
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Commands::SetUpTearDownItem*, "NUnit.Framework.Internal.Commands", "SetUpTearDownItem");
#pragma pack(pop)
