// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:29 PM
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
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: PersistentCall
  class PersistentCall;
  // Forward declaring type: InvokableCallList
  class InvokableCallList;
  // Forward declaring type: UnityEventBase
  class UnityEventBase;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Autogenerated type: UnityEngine.Events.PersistentCallGroup
  class PersistentCallGroup : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> m_Calls
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Events::PersistentCall*>* m_Calls;
    // public System.Void Initialize(UnityEngine.Events.InvokableCallList invokableList, UnityEngine.Events.UnityEventBase unityEventBase)
    // Offset: 0x12F4360
    void Initialize(UnityEngine::Events::InvokableCallList* invokableList, UnityEngine::Events::UnityEventBase* unityEventBase);
    // public System.Void .ctor()
    // Offset: 0x12F42E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PersistentCallGroup* New_ctor();
  }; // UnityEngine.Events.PersistentCallGroup
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::PersistentCallGroup*, "UnityEngine.Events", "PersistentCallGroup");
#pragma pack(pop)
