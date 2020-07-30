// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:09 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.CVRSystem
#include "Valve/VR/CVRSystem.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRSystem/PollNextEventUnion
  struct CVRSystem::PollNextEventUnion : public System::ValueType {
    public:
    // public Valve.VR.IVRSystem/_PollNextEvent pPollNextEvent
    // Offset: 0x0
    Valve::VR::IVRSystem::_PollNextEvent* pPollNextEvent;
    // public Valve.VR.CVRSystem/_PollNextEventPacked pPollNextEventPacked
    // Offset: 0x0
    Valve::VR::CVRSystem::_PollNextEventPacked* pPollNextEventPacked;
    // Creating value type constructor for type: PollNextEventUnion
    PollNextEventUnion(Valve::VR::IVRSystem::_PollNextEvent* pPollNextEvent_ = {}, Valve::VR::CVRSystem::_PollNextEventPacked* pPollNextEventPacked_ = {}) : pPollNextEvent{pPollNextEvent_}, pPollNextEventPacked{pPollNextEventPacked_} {}
  }; // Valve.VR.CVRSystem/PollNextEventUnion
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRSystem::PollNextEventUnion, "Valve.VR", "CVRSystem/PollNextEventUnion");
#pragma pack(pop)
