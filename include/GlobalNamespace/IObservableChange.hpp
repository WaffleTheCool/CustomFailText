// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:03 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: IObservableChange
  class IObservableChange {
    public:
    // public System.Void add_didChangeEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_didChangeEvent(System::Action* value);
    // public System.Void remove_didChangeEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_didChangeEvent(System::Action* value);
  }; // IObservableChange
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IObservableChange*, "", "IObservableChange");
#pragma pack(pop)
