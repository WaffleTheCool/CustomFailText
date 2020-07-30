// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Autogenerated type: NUnit.Framework.Interfaces.ITestCaseBuilder
  class ITestCaseBuilder {
    public:
    // public System.Boolean CanBuildFrom(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test suite)
    // Offset: 0xFFFFFFFF
    bool CanBuildFrom(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* suite);
    // public NUnit.Framework.Internal.Test BuildFrom(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test suite)
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Internal::Test* BuildFrom(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* suite);
  }; // NUnit.Framework.Interfaces.ITestCaseBuilder
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ITestCaseBuilder*, "NUnit.Framework.Interfaces", "ITestCaseBuilder");
#pragma pack(pop)
