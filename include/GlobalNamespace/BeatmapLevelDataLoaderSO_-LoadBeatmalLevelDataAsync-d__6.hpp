// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:09 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: BeatmapLevelDataLoaderSO
#include "GlobalNamespace/BeatmapLevelDataLoaderSO.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelDataSO
  class BeatmapLevelDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelDataLoaderSO/<LoadBeatmalLevelDataAsync>d__6
  struct BeatmapLevelDataLoaderSO::$LoadBeatmalLevelDataAsync$d__6 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<BeatmapLevelDataSO> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelDataSO*> $$t__builder;
    // public System.String levelDataAssetName
    // Offset: 0x20
    ::Il2CppString* levelDataAssetName;
    // public System.String assetBundlePath
    // Offset: 0x28
    ::Il2CppString* assetBundlePath;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<BeatmapLevelDataSO> <>u__1
    // Offset: 0x30
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO*> $$u__1;
    // Creating value type constructor for type: $LoadBeatmalLevelDataAsync$d__6
    $LoadBeatmalLevelDataAsync$d__6(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelDataSO*> $$t__builder_ = {}, ::Il2CppString* levelDataAssetName_ = {}, ::Il2CppString* assetBundlePath_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelDataSO*> $$u__1_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, levelDataAssetName{levelDataAssetName_}, assetBundlePath{assetBundlePath_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA2688C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA26894
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BeatmapLevelDataLoaderSO/<LoadBeatmalLevelDataAsync>d__6
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataLoaderSO::$LoadBeatmalLevelDataAsync$d__6, "", "BeatmapLevelDataLoaderSO/<LoadBeatmalLevelDataAsync>d__6");
#pragma pack(pop)
