// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:23 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OnlineServices.API.TestApiLeaderboardsModel
#include "OnlineServices/API/TestApiLeaderboardsModel.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: OnlineServices.API.Response
#include "OnlineServices/API/Response.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.TestApiLeaderboardsModel/<SendLevelScoreResultAsync>d__2
  struct TestApiLeaderboardsModel::$SendLevelScoreResultAsync$d__2 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<OnlineServices.API.Response> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::API::Response> $$t__builder;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.API.Response> <>u__1
    // Offset: 0x20
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::API::Response> $$u__1;
    // Creating value type constructor for type: $SendLevelScoreResultAsync$d__2
    $SendLevelScoreResultAsync$d__2(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<OnlineServices::API::Response> $$t__builder_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::API::Response> $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA27E68
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA27E70
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.TestApiLeaderboardsModel/<SendLevelScoreResultAsync>d__2
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::TestApiLeaderboardsModel::$SendLevelScoreResultAsync$d__2, "OnlineServices.API", "TestApiLeaderboardsModel/<SendLevelScoreResultAsync>d__2");
#pragma pack(pop)
