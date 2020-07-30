// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:47 PM
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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.IdBinder
  class IdBinder : public ::Il2CppObject {
    public:
    // private Zenject.BindInfo _bindInfo
    // Offset: 0x10
    Zenject::BindInfo* bindInfo;
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0xF24EB4
    static IdBinder* New_ctor(Zenject::BindInfo* bindInfo);
    // public System.Void WithId(System.Object identifier)
    // Offset: 0xF24EE8
    void WithId(::Il2CppObject* identifier);
  }; // Zenject.IdBinder
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::IdBinder*, "Zenject", "IdBinder");
#pragma pack(pop)
