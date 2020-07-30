// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.AssemblyLoadEventArgs
  class AssemblyLoadEventArgs : public System::EventArgs {
    public:
    // private System.Reflection.Assembly m_loadedAssembly
    // Offset: 0x10
    System::Reflection::Assembly* m_loadedAssembly;
    // public System.Void .ctor(System.Reflection.Assembly loadedAssembly)
    // Offset: 0x13147D0
    static AssemblyLoadEventArgs* New_ctor(System::Reflection::Assembly* loadedAssembly);
  }; // System.AssemblyLoadEventArgs
}
DEFINE_IL2CPP_ARG_TYPE(System::AssemblyLoadEventArgs*, "System", "AssemblyLoadEventArgs");
#pragma pack(pop)
