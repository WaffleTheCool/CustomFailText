// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PoolExpandMethods
  struct PoolExpandMethods : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Zenject.PoolExpandMethods OneAtATime
    static constexpr const int OneAtATime = 0;
    // Get static field: static public Zenject.PoolExpandMethods OneAtATime
    static Zenject::PoolExpandMethods _get_OneAtATime();
    // Set static field: static public Zenject.PoolExpandMethods OneAtATime
    static void _set_OneAtATime(Zenject::PoolExpandMethods value);
    // static field const value: static public Zenject.PoolExpandMethods Double
    static constexpr const int Double = 1;
    // Get static field: static public Zenject.PoolExpandMethods Double
    static Zenject::PoolExpandMethods _get_Double();
    // Set static field: static public Zenject.PoolExpandMethods Double
    static void _set_Double(Zenject::PoolExpandMethods value);
    // static field const value: static public Zenject.PoolExpandMethods Disabled
    static constexpr const int Disabled = 2;
    // Get static field: static public Zenject.PoolExpandMethods Disabled
    static Zenject::PoolExpandMethods _get_Disabled();
    // Set static field: static public Zenject.PoolExpandMethods Disabled
    static void _set_Disabled(Zenject::PoolExpandMethods value);
    // Creating value type constructor for type: PoolExpandMethods
    PoolExpandMethods(int value_ = {}) : value{value_} {}
  }; // Zenject.PoolExpandMethods
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PoolExpandMethods, "Zenject", "PoolExpandMethods");
#pragma pack(pop)
