// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Including type: UnityEngine.EventSystems.IBeginDragHandler
#include "UnityEngine/EventSystems/IBeginDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IDragHandler
#include "UnityEngine/EventSystems/IDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IInitializePotentialDragHandler
#include "UnityEngine/EventSystems/IInitializePotentialDragHandler.hpp"
// Including type: UnityEngine.UI.ICanvasElement
#include "UnityEngine/UI/ICanvasElement.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.DrivenRectTransformTracker
#include "UnityEngine/DrivenRectTransformTracker.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Skipping declaration: Color because it is already included!
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.Slider2D
  class Slider2D : public UnityEngine::UI::Selectable, public UnityEngine::EventSystems::IBeginDragHandler, public UnityEngine::EventSystems::IEventSystemHandler, public UnityEngine::EventSystems::IDragHandler, public UnityEngine::EventSystems::IInitializePotentialDragHandler, public UnityEngine::UI::ICanvasElement {
    public:
    // private UnityEngine.RectTransform _handleRect
    // Offset: 0xF0
    UnityEngine::RectTransform* handleRect;
    // private UnityEngine.Vector2 _normalizedValue
    // Offset: 0xF8
    UnityEngine::Vector2 normalizedValue;
    // private System.Action`2<HMUI.Slider2D,UnityEngine.Vector2> normalizedValueDidChangeEvent
    // Offset: 0x100
    System::Action_2<HMUI::Slider2D*, UnityEngine::Vector2>* normalizedValueDidChangeEvent;
    // private UnityEngine.RectTransform _containerRect
    // Offset: 0x108
    UnityEngine::RectTransform* containerRect;
    // private UnityEngine.UI.Graphic _handleGraphic
    // Offset: 0x110
    UnityEngine::UI::Graphic* handleGraphic;
    // private UnityEngine.DrivenRectTransformTracker _tracker
    // Offset: 0x118
    UnityEngine::DrivenRectTransformTracker tracker;
    // public UnityEngine.RectTransform get_handleRect()
    // Offset: 0x10CF7B8
    UnityEngine::RectTransform* get_handleRect();
    // public System.Void set_handleRect(UnityEngine.RectTransform value)
    // Offset: 0x10CF7C0
    void set_handleRect(UnityEngine::RectTransform* value);
    // public System.Void set_handleColor(UnityEngine.Color value)
    // Offset: 0x10CF9C4
    void set_handleColor(UnityEngine::Color value);
    // public UnityEngine.Vector2 get_normalizedValue()
    // Offset: 0x10CFA98
    UnityEngine::Vector2 get_normalizedValue();
    // public System.Void set_normalizedValue(UnityEngine.Vector2 value)
    // Offset: 0x10CFAA0
    void set_normalizedValue(UnityEngine::Vector2 value);
    // public System.Void add_normalizedValueDidChangeEvent(System.Action`2<HMUI.Slider2D,UnityEngine.Vector2> value)
    // Offset: 0x10CFBE0
    void add_normalizedValueDidChangeEvent(System::Action_2<HMUI::Slider2D*, UnityEngine::Vector2>* value);
    // public System.Void remove_normalizedValueDidChangeEvent(System.Action`2<HMUI.Slider2D,UnityEngine.Vector2> value)
    // Offset: 0x10CFC88
    void remove_normalizedValueDidChangeEvent(System::Action_2<HMUI::Slider2D*, UnityEngine::Vector2>* value);
    // private System.Void UpdateCachedReferences()
    // Offset: 0x10CF850
    void UpdateCachedReferences();
    // private System.Void SetNormalizedValue(UnityEngine.Vector2 input)
    // Offset: 0x10CFDB8
    void SetNormalizedValue(UnityEngine::Vector2 input);
    // private System.Void SetNormalizedValue(UnityEngine.Vector2 input, System.Boolean sendCallback)
    // Offset: 0x10CFAA8
    void SetNormalizedValue(UnityEngine::Vector2 input, bool sendCallback);
    // protected System.Void UpdateVisuals()
    // Offset: 0x10CFE14
    void UpdateVisuals();
    // private System.Void UpdateDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x10CFFE0
    void UpdateDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Boolean MayDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x10D01A4
    bool MayDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
    // Offset: 0x10CFD30
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::Rebuild(UnityEngine.UI.CanvasUpdate executing)
    void Rebuild(UnityEngine::UI::CanvasUpdate executing);
    // public System.Void LayoutComplete()
    // Offset: 0x10CFD34
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::LayoutComplete()
    void LayoutComplete();
    // public System.Void GraphicUpdateComplete()
    // Offset: 0x10CFD38
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::GraphicUpdateComplete()
    void GraphicUpdateComplete();
    // protected override System.Void OnEnable()
    // Offset: 0x10CFD3C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x10CFD88
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDisable()
    void OnDisable();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x10CFDC0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
    // public System.Void OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x10D020C
    // Implemented from: UnityEngine.EventSystems.IBeginDragHandler
    // Base method: System.Void IBeginDragHandler::OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
    void OnBeginDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x10D02A8
    // Implemented from: UnityEngine.EventSystems.IDragHandler
    // Base method: System.Void IDragHandler::OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
    void OnDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public override System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x10D0354
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerDown(UnityEngine::EventSystems::PointerEventData* eventData);
    // public override System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x10D0410
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData);
    // protected override System.Void DoStateTransition(UnityEngine.UI.Selectable/SelectionState state, System.Boolean instant)
    // Offset: 0x10D0418
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::DoStateTransition(UnityEngine.UI.Selectable/SelectionState state, System.Boolean instant)
    void DoStateTransition(UnityEngine::UI::Selectable::SelectionState state, bool instant);
    // public System.Void OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x10D0424
    // Implemented from: UnityEngine.EventSystems.IInitializePotentialDragHandler
    // Base method: System.Void IInitializePotentialDragHandler::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    void OnInitializePotentialDrag(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x10D043C
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Slider2D* New_ctor();
    // private UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()
    // Offset: 0x10D04A4
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: UnityEngine.Transform ICanvasElement::get_transform()
    UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
  }; // HMUI.Slider2D
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::Slider2D*, "HMUI", "Slider2D");
#pragma pack(pop)
