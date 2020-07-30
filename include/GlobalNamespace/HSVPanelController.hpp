// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: ColorChangeUIEventType
#include "GlobalNamespace/ColorChangeUIEventType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSaturationValueSlider
  class ColorSaturationValueSlider;
  // Forward declaring type: ColorHueSlider
  class ColorHueSlider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: HSVPanelController
  class HSVPanelController : public UnityEngine::MonoBehaviour {
    public:
    // private ColorSaturationValueSlider _colorSaturationValueSlider
    // Offset: 0x18
    GlobalNamespace::ColorSaturationValueSlider* colorSaturationValueSlider;
    // private ColorHueSlider _colorHueSlider
    // Offset: 0x20
    GlobalNamespace::ColorHueSlider* colorHueSlider;
    // private System.Action`2<UnityEngine.Color,ColorChangeUIEventType> colorDidChangeEvent
    // Offset: 0x28
    System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* colorDidChangeEvent;
    // private UnityEngine.Vector3 _hsvColor
    // Offset: 0x30
    UnityEngine::Vector3 hsvColor;
    // public System.Void add_colorDidChangeEvent(System.Action`2<UnityEngine.Color,ColorChangeUIEventType> value)
    // Offset: 0xB40D58
    void add_colorDidChangeEvent(System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* value);
    // public System.Void remove_colorDidChangeEvent(System.Action`2<UnityEngine.Color,ColorChangeUIEventType> value)
    // Offset: 0xB40DFC
    void remove_colorDidChangeEvent(System::Action_2<UnityEngine::Color, GlobalNamespace::ColorChangeUIEventType>* value);
    // public UnityEngine.Color get_color()
    // Offset: 0xB40EA0
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0xB40EB0
    void set_color(UnityEngine::Color value);
    // protected System.Void Awake()
    // Offset: 0xB40F78
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xB41058
    void OnDestroy();
    // private System.Void HandleColorSaturationOrValueDidChange(ColorSaturationValueSlider slider, UnityEngine.Vector2 colorSaturationAndValue, ColorChangeUIEventType colorChangeUIEventType)
    // Offset: 0xB411B0
    void HandleColorSaturationOrValueDidChange(GlobalNamespace::ColorSaturationValueSlider* slider, UnityEngine::Vector2 colorSaturationAndValue, GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);
    // private System.Void HandleColorHueDidChange(ColorHueSlider slider, System.Single hue, ColorChangeUIEventType colorChangeUIEventType)
    // Offset: 0xB41248
    void HandleColorHueDidChange(GlobalNamespace::ColorHueSlider* slider, float hue, GlobalNamespace::ColorChangeUIEventType colorChangeUIEventType);
    // private System.Void RefreshSlidersValues()
    // Offset: 0xB40F10
    void RefreshSlidersValues();
    // private System.Void RefreshSlidersColors()
    // Offset: 0xB40EEC
    void RefreshSlidersColors();
    // public System.Void .ctor()
    // Offset: 0xB412D8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static HSVPanelController* New_ctor();
  }; // HSVPanelController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HSVPanelController*, "", "HSVPanelController");
#pragma pack(pop)
