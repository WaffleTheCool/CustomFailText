// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.EventSystems.IEventSystemHandler
#include "UnityEngine/EventSystems/IEventSystemHandler.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.ICancelHandler
  class ICancelHandler : public UnityEngine::EventSystems::IEventSystemHandler {
    public:
    // public System.Void OnCancel(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0xFFFFFFFF
    void OnCancel(UnityEngine::EventSystems::BaseEventData* eventData);
  }; // UnityEngine.EventSystems.ICancelHandler
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::ICancelHandler*, "UnityEngine.EventSystems", "ICancelHandler");
#pragma pack(pop)
