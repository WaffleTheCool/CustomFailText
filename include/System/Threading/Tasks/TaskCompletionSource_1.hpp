// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:34 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.TaskCompletionSource`1
  template<typename TResult>
  class TaskCompletionSource_1 : public ::Il2CppObject {
    public:
    // private readonly System.Threading.Tasks.Task`1<TResult> m_task
    // Offset: 0x0
    System::Threading::Tasks::Task_1<TResult>* m_task;
    // public System.Threading.Tasks.Task`1<TResult> get_Task()
    // Offset: 0x1477B98
    System::Threading::Tasks::Task_1<TResult>* get_Task() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<TResult>*>(this, "get_Task"));
    }
    // private System.Void SpinUntilCompleted()
    // Offset: 0x1476F80
    void SpinUntilCompleted() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "SpinUntilCompleted"));
    }
    // public System.Boolean TrySetResult(TResult result)
    // Offset: 0x1477BEC
    bool TrySetResult(TResult result) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TrySetResult", result));
    }
    // public System.Boolean TrySetCanceled()
    // Offset: 0x147704C
    bool TrySetCanceled() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TrySetCanceled"));
    }
    // public System.Boolean TrySetCanceled(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1477C94
    bool TrySetCanceled(System::Threading::CancellationToken cancellationToken) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TrySetCanceled", cancellationToken));
    }
    // public System.Void .ctor()
    // Offset: 0x1477B18
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TaskCompletionSource_1<TResult>* New_ctor() {
      return (TaskCompletionSource_1<TResult>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TaskCompletionSource_1<TResult>*>::get()));
    }
  }; // System.Threading.Tasks.TaskCompletionSource`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::Tasks::TaskCompletionSource_1, "System.Threading.Tasks", "TaskCompletionSource`1");
#pragma pack(pop)
