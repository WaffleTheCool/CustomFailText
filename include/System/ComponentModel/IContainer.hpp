// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:13 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IComponent
  class IComponent;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Autogenerated type: System.ComponentModel.IContainer
  class IContainer : public System::IDisposable {
    public:
    // public System.Void Remove(System.ComponentModel.IComponent component)
    // Offset: 0xFFFFFFFF
    void Remove(System::ComponentModel::IComponent* component);
  }; // System.ComponentModel.IContainer
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::IContainer*, "System.ComponentModel", "IContainer");
#pragma pack(pop)
