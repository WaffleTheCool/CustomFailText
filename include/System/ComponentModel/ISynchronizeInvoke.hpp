// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:13 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Autogenerated type: System.ComponentModel.ISynchronizeInvoke
  class ISynchronizeInvoke {
    public:
    // public System.Boolean get_InvokeRequired()
    // Offset: 0xFFFFFFFF
    bool get_InvokeRequired();
    // public System.IAsyncResult BeginInvoke(System.Delegate method, System.Object[] args)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(System::Delegate* method, ::Array<::Il2CppObject*>* args);
  }; // System.ComponentModel.ISynchronizeInvoke
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ISynchronizeInvoke*, "System.ComponentModel", "ISynchronizeInvoke");
#pragma pack(pop)
