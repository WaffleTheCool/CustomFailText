// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: HMUI.TextSlider
#include "HMUI/TextSlider.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.RangeValuesTextSlider
  class RangeValuesTextSlider : public HMUI::TextSlider {
    public:
    // private System.Single _minValue
    // Offset: 0x134
    float minValue;
    // private System.Single _maxValue
    // Offset: 0x138
    float maxValue;
    // private UnityEngine.UI.Button _decButton
    // Offset: 0x140
    UnityEngine::UI::Button* decButton;
    // private UnityEngine.UI.Button _incButton
    // Offset: 0x148
    UnityEngine::UI::Button* incButton;
    // private System.Action`2<HMUI.RangeValuesTextSlider,System.Single> valueDidChangeEvent
    // Offset: 0x150
    System::Action_2<HMUI::RangeValuesTextSlider*, float>* valueDidChangeEvent;
    // private HMUI.ButtonBinder _buttonBinder
    // Offset: 0x158
    HMUI::ButtonBinder* buttonBinder;
    // public System.Single get_minValue()
    // Offset: 0x10C9C80
    float get_minValue();
    // public System.Void set_minValue(System.Single value)
    // Offset: 0x10C9C88
    void set_minValue(float value);
    // public System.Single get_maxValue()
    // Offset: 0x10C9D10
    float get_maxValue();
    // public System.Void set_maxValue(System.Single value)
    // Offset: 0x10C9D18
    void set_maxValue(float value);
    // public System.Void set_value(System.Single value)
    // Offset: 0x10C9DA0
    void set_value(float value);
    // public System.Single get_value()
    // Offset: 0x10C9DDC
    float get_value();
    // public System.Void add_valueDidChangeEvent(System.Action`2<HMUI.RangeValuesTextSlider,System.Single> value)
    // Offset: 0x10C9F34
    void add_valueDidChangeEvent(System::Action_2<HMUI::RangeValuesTextSlider*, float>* value);
    // public System.Void remove_valueDidChangeEvent(System.Action`2<HMUI.RangeValuesTextSlider,System.Single> value)
    // Offset: 0x10C9FDC
    void remove_valueDidChangeEvent(System::Action_2<HMUI::RangeValuesTextSlider*, float>* value);
    // private System.Void HandleNormalizedValueDidChange(HMUI.TextSlider slider, System.Single normalizedValue)
    // Offset: 0x10CA440
    void HandleNormalizedValueDidChange(HMUI::TextSlider* slider, float normalizedValue);
    // public System.Single ConvertFromNormalizedValue(System.Single normalizedValue)
    // Offset: 0x10C9F1C
    float ConvertFromNormalizedValue(float normalizedValue);
    // public System.Single NormalizeValue(System.Single rangeValue)
    // Offset: 0x10C9DBC
    float NormalizeValue(float rangeValue);
    // protected System.String TextForValue(System.Single value)
    // Offset: 0x10CA4EC
    ::Il2CppString* TextForValue(float value);
    // private System.Void <Awake>b__17_0()
    // Offset: 0x10CA59C
    void $Awake$b__17_0();
    // private System.Void <Awake>b__17_1()
    // Offset: 0x10CA5F4
    void $Awake$b__17_1();
    // protected override System.Void Awake()
    // Offset: 0x10CA084
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::Awake()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0x10CA300
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDestroy()
    void OnDestroy();
    // protected override System.String TextForNormalizedValue(System.Single normalizedValue)
    // Offset: 0x10CA4C8
    // Implemented from: HMUI.TextSlider
    // Base method: System.String TextSlider::TextForNormalizedValue(System.Single normalizedValue)
    ::Il2CppString* TextForNormalizedValue(float normalizedValue);
    // public System.Void .ctor()
    // Offset: 0x10C9C74
    // Implemented from: HMUI.TextSlider
    // Base method: System.Void TextSlider::.ctor()
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RangeValuesTextSlider* New_ctor();
  }; // HMUI.RangeValuesTextSlider
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::RangeValuesTextSlider*, "HMUI", "RangeValuesTextSlider");
#pragma pack(pop)
