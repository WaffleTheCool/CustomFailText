// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Func`6
  template<typename TResult, typename T1, typename T2, typename T3, typename T4, typename T5>
  class Func_6 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1265CF4
    static Func_6<TResult, T1, T2, T3, T4, T5>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      return (Func_6<TResult, T1, T2, T3, T4, T5>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Func_6<TResult, T1, T2, T3, T4, T5>*>::get(), object, method));
    }
    // public TResult Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5)
    // Offset: 0x1265D08
    TResult Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TResult>(this, "Invoke", arg1, arg2, arg3, arg4, arg5));
    }
    // public System.IAsyncResult BeginInvoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, System.AsyncCallback callback, System.Object object)
    // Offset: 0x126617C
    System::IAsyncResult* BeginInvoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, System::AsyncCallback* callback, ::Il2CppObject* object) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", arg1, arg2, arg3, arg4, arg5, callback, object));
    }
    // public TResult EndInvoke(System.IAsyncResult result)
    // Offset: 0x12661B0
    TResult EndInvoke(System::IAsyncResult* result) {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<TResult>(this, "EndInvoke", result));
    }
  }; // System.Func`6
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Func_6, "System", "Func`6");
#pragma pack(pop)
