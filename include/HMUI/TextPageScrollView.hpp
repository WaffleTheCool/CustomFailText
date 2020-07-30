// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:06 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: VerticalScrollIndicator
  class VerticalScrollIndicator;
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.TextPageScrollView
  class TextPageScrollView : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.RectTransform _viewport
    // Offset: 0x18
    UnityEngine::RectTransform* viewport;
    // private TMPro.TextMeshProUGUI _text
    // Offset: 0x20
    TMPro::TextMeshProUGUI* text;
    // private UnityEngine.UI.Button _pageUpButton
    // Offset: 0x28
    UnityEngine::UI::Button* pageUpButton;
    // private UnityEngine.UI.Button _pageDownButton
    // Offset: 0x30
    UnityEngine::UI::Button* pageDownButton;
    // private HMUI.VerticalScrollIndicator _verticalScrollIndicator
    // Offset: 0x38
    HMUI::VerticalScrollIndicator* verticalScrollIndicator;
    // private System.Single _smooth
    // Offset: 0x40
    float smooth;
    // private UnityEngine.RectTransform _contentRectTransform
    // Offset: 0x48
    UnityEngine::RectTransform* contentRectTransform;
    // private HMUI.ButtonBinder _buttonBinder
    // Offset: 0x50
    HMUI::ButtonBinder* buttonBinder;
    // private System.Single _dstPosY
    // Offset: 0x58
    float dstPosY;
    // private System.Single _scrollPageHeight
    // Offset: 0x5C
    float scrollPageHeight;
    // private System.Single _contentHeight
    // Offset: 0x60
    float contentHeight;
    // protected System.Void Start()
    // Offset: 0x10D3B00
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x10D3C20
    void OnDestroy();
    // public System.Void SetText(System.String text)
    // Offset: 0x10D3C34
    void SetText(::Il2CppString* text);
    // protected System.Void Update()
    // Offset: 0x10D3F60
    void Update();
    // private System.Void PageUpButtonPressed()
    // Offset: 0x10D40F4
    void PageUpButtonPressed();
    // private System.Void PageDownButtonPressed()
    // Offset: 0x10D4188
    void PageDownButtonPressed();
    // private System.Void RefreshButtonsInteractibility()
    // Offset: 0x10D3EC4
    void RefreshButtonsInteractibility();
    // public System.Void .ctor()
    // Offset: 0x10D4264
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TextPageScrollView* New_ctor();
  }; // HMUI.TextPageScrollView
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::TextPageScrollView*, "HMUI", "TextPageScrollView");
#pragma pack(pop)
