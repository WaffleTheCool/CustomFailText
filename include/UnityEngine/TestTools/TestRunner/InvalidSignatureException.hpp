// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:37 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: NUnit.Framework.ResultStateException
#include "NUnit/Framework/ResultStateException.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.InvalidSignatureException
  class InvalidSignatureException : public NUnit::Framework::ResultStateException {
    public:
    // public System.Void .ctor(System.String message)
    // Offset: 0xE30B28
    // Implemented from: NUnit.Framework.ResultStateException
    // Base method: System.Void ResultStateException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static InvalidSignatureException* New_ctor(::Il2CppString* message);
    // public override NUnit.Framework.Interfaces.ResultState get_ResultState()
    // Offset: 0xE30B30
    // Implemented from: NUnit.Framework.ResultStateException
    // Base method: NUnit.Framework.Interfaces.ResultState ResultStateException::get_ResultState()
    NUnit::Framework::Interfaces::ResultState* get_ResultState();
  }; // UnityEngine.TestTools.TestRunner.InvalidSignatureException
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::InvalidSignatureException*, "UnityEngine.TestTools.TestRunner", "InvalidSignatureException");
#pragma pack(pop)
