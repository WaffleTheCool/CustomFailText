// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:05 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.UI.MaskableGraphic
#include "UnityEngine/UI/MaskableGraphic.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: UnityEngine.UI.ILayoutElement
#include "UnityEngine/UI/ILayoutElement.hpp"
// Including type: UnityEngine.ICanvasRaycastFilter
#include "UnityEngine/ICanvasRaycastFilter.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: Sprite
  class Sprite;
  // Skipping declaration: Vector4 because it is already included!
  // Skipping declaration: Color32 because it is already included!
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Skipping declaration: Type because it is already included!
  // Skipping declaration: FillMethod because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.GradientImage
  class GradientImage : public UnityEngine::UI::MaskableGraphic, public UnityEngine::ISerializationCallbackReceiver, public UnityEngine::UI::ILayoutElement, public UnityEngine::ICanvasRaycastFilter {
    public:
    // Nested type: HMUI::GradientImage::Type
    struct Type;
    // Nested type: HMUI::GradientImage::FillMethod
    struct FillMethod;
    // Nested type: HMUI::GradientImage::OriginHorizontal
    struct OriginHorizontal;
    // Nested type: HMUI::GradientImage::OriginVertical
    struct OriginVertical;
    // Nested type: HMUI::GradientImage::Origin90
    struct Origin90;
    // Nested type: HMUI::GradientImage::Origin180
    struct Origin180;
    // Nested type: HMUI::GradientImage::Origin360
    struct Origin360;
    // Autogenerated type: HMUI.GradientImage/Type
    struct Type : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public HMUI.GradientImage/Type Simple
      static constexpr const int Simple = 0;
      // Get static field: static public HMUI.GradientImage/Type Simple
      static HMUI::GradientImage::Type _get_Simple();
      // Set static field: static public HMUI.GradientImage/Type Simple
      static void _set_Simple(HMUI::GradientImage::Type value);
      // static field const value: static public HMUI.GradientImage/Type Sliced
      static constexpr const int Sliced = 1;
      // Get static field: static public HMUI.GradientImage/Type Sliced
      static HMUI::GradientImage::Type _get_Sliced();
      // Set static field: static public HMUI.GradientImage/Type Sliced
      static void _set_Sliced(HMUI::GradientImage::Type value);
      // static field const value: static public HMUI.GradientImage/Type Tiled
      static constexpr const int Tiled = 2;
      // Get static field: static public HMUI.GradientImage/Type Tiled
      static HMUI::GradientImage::Type _get_Tiled();
      // Set static field: static public HMUI.GradientImage/Type Tiled
      static void _set_Tiled(HMUI::GradientImage::Type value);
      // static field const value: static public HMUI.GradientImage/Type Filled
      static constexpr const int Filled = 3;
      // Get static field: static public HMUI.GradientImage/Type Filled
      static HMUI::GradientImage::Type _get_Filled();
      // Set static field: static public HMUI.GradientImage/Type Filled
      static void _set_Filled(HMUI::GradientImage::Type value);
      // Creating value type constructor for type: Type
      Type(int value_ = {}) : value{value_} {}
    }; // HMUI.GradientImage/Type
    // Autogenerated type: HMUI.GradientImage/FillMethod
    struct FillMethod : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public HMUI.GradientImage/FillMethod Horizontal
      static constexpr const int Horizontal = 0;
      // Get static field: static public HMUI.GradientImage/FillMethod Horizontal
      static HMUI::GradientImage::FillMethod _get_Horizontal();
      // Set static field: static public HMUI.GradientImage/FillMethod Horizontal
      static void _set_Horizontal(HMUI::GradientImage::FillMethod value);
      // static field const value: static public HMUI.GradientImage/FillMethod Vertical
      static constexpr const int Vertical = 1;
      // Get static field: static public HMUI.GradientImage/FillMethod Vertical
      static HMUI::GradientImage::FillMethod _get_Vertical();
      // Set static field: static public HMUI.GradientImage/FillMethod Vertical
      static void _set_Vertical(HMUI::GradientImage::FillMethod value);
      // static field const value: static public HMUI.GradientImage/FillMethod Radial90
      static constexpr const int Radial90 = 2;
      // Get static field: static public HMUI.GradientImage/FillMethod Radial90
      static HMUI::GradientImage::FillMethod _get_Radial90();
      // Set static field: static public HMUI.GradientImage/FillMethod Radial90
      static void _set_Radial90(HMUI::GradientImage::FillMethod value);
      // static field const value: static public HMUI.GradientImage/FillMethod Radial180
      static constexpr const int Radial180 = 3;
      // Get static field: static public HMUI.GradientImage/FillMethod Radial180
      static HMUI::GradientImage::FillMethod _get_Radial180();
      // Set static field: static public HMUI.GradientImage/FillMethod Radial180
      static void _set_Radial180(HMUI::GradientImage::FillMethod value);
      // static field const value: static public HMUI.GradientImage/FillMethod Radial360
      static constexpr const int Radial360 = 4;
      // Get static field: static public HMUI.GradientImage/FillMethod Radial360
      static HMUI::GradientImage::FillMethod _get_Radial360();
      // Set static field: static public HMUI.GradientImage/FillMethod Radial360
      static void _set_Radial360(HMUI::GradientImage::FillMethod value);
      // Creating value type constructor for type: FillMethod
      FillMethod(int value_ = {}) : value{value_} {}
    }; // HMUI.GradientImage/FillMethod
    // private UnityEngine.Sprite m_Sprite
    // Offset: 0xC0
    UnityEngine::Sprite* m_Sprite;
    // private UnityEngine.Color m_Color0
    // Offset: 0xC8
    UnityEngine::Color m_Color0;
    // private UnityEngine.Color m_Color1
    // Offset: 0xD8
    UnityEngine::Color m_Color1;
    // private UnityEngine.Sprite m_OverrideSprite
    // Offset: 0xE8
    UnityEngine::Sprite* m_OverrideSprite;
    // private HMUI.GradientImage/Type m_Type
    // Offset: 0xF0
    HMUI::GradientImage::Type m_Type;
    // private System.Boolean m_PreserveAspect
    // Offset: 0xF4
    bool m_PreserveAspect;
    // private System.Boolean m_FillCenter
    // Offset: 0xF5
    bool m_FillCenter;
    // private HMUI.GradientImage/FillMethod m_FillMethod
    // Offset: 0xF8
    HMUI::GradientImage::FillMethod m_FillMethod;
    // private System.Single m_FillAmount
    // Offset: 0xFC
    float m_FillAmount;
    // private System.Boolean m_FillClockwise
    // Offset: 0x100
    bool m_FillClockwise;
    // private System.Int32 m_FillOrigin
    // Offset: 0x104
    int m_FillOrigin;
    // private System.Single m_EventAlphaThreshold
    // Offset: 0x108
    float m_EventAlphaThreshold;
    // Get static field: static private readonly UnityEngine.Vector2[] s_VertScratch
    static ::Array<UnityEngine::Vector2>* _get_s_VertScratch();
    // Set static field: static private readonly UnityEngine.Vector2[] s_VertScratch
    static void _set_s_VertScratch(::Array<UnityEngine::Vector2>* value);
    // Get static field: static private readonly UnityEngine.Vector2[] s_UVScratch
    static ::Array<UnityEngine::Vector2>* _get_s_UVScratch();
    // Set static field: static private readonly UnityEngine.Vector2[] s_UVScratch
    static void _set_s_UVScratch(::Array<UnityEngine::Vector2>* value);
    // Get static field: static private readonly UnityEngine.Color[] s_ColorScratch
    static ::Array<UnityEngine::Color>* _get_s_ColorScratch();
    // Set static field: static private readonly UnityEngine.Color[] s_ColorScratch
    static void _set_s_ColorScratch(::Array<UnityEngine::Color>* value);
    // Get static field: static private readonly UnityEngine.Vector3[] s_Xy
    static ::Array<UnityEngine::Vector3>* _get_s_Xy();
    // Set static field: static private readonly UnityEngine.Vector3[] s_Xy
    static void _set_s_Xy(::Array<UnityEngine::Vector3>* value);
    // Get static field: static private readonly UnityEngine.Vector3[] s_Uv
    static ::Array<UnityEngine::Vector3>* _get_s_Uv();
    // Set static field: static private readonly UnityEngine.Vector3[] s_Uv
    static void _set_s_Uv(::Array<UnityEngine::Vector3>* value);
    // public UnityEngine.Sprite get_sprite()
    // Offset: 0xEC5E00
    UnityEngine::Sprite* get_sprite();
    // public System.Void set_sprite(UnityEngine.Sprite value)
    // Offset: 0xEC5E08
    void set_sprite(UnityEngine::Sprite* value);
    // public UnityEngine.Color get_color0()
    // Offset: 0xEC5E90
    UnityEngine::Color get_color0();
    // public System.Void set_color0(UnityEngine.Color value)
    // Offset: 0xEC19B8
    void set_color0(UnityEngine::Color value);
    // public UnityEngine.Color get_color1()
    // Offset: 0xEC5E9C
    UnityEngine::Color get_color1();
    // public System.Void set_color1(UnityEngine.Color value)
    // Offset: 0xEC1A00
    void set_color1(UnityEngine::Color value);
    // public UnityEngine.Sprite get_overrideSprite()
    // Offset: 0xEC5EA8
    UnityEngine::Sprite* get_overrideSprite();
    // public System.Void set_overrideSprite(UnityEngine.Sprite value)
    // Offset: 0xEC5F30
    void set_overrideSprite(UnityEngine::Sprite* value);
    // public HMUI.GradientImage/Type get_type()
    // Offset: 0xEC5FB8
    HMUI::GradientImage::Type get_type();
    // public System.Void set_type(HMUI.GradientImage/Type value)
    // Offset: 0xEC5FC0
    void set_type(HMUI::GradientImage::Type value);
    // public System.Boolean get_preserveAspect()
    // Offset: 0xEC6048
    bool get_preserveAspect();
    // public System.Void set_preserveAspect(System.Boolean value)
    // Offset: 0xEC6050
    void set_preserveAspect(bool value);
    // public System.Boolean get_fillCenter()
    // Offset: 0xEC60D8
    bool get_fillCenter();
    // public System.Void set_fillCenter(System.Boolean value)
    // Offset: 0xEC60E0
    void set_fillCenter(bool value);
    // public HMUI.GradientImage/FillMethod get_fillMethod()
    // Offset: 0xEC6168
    HMUI::GradientImage::FillMethod get_fillMethod();
    // public System.Void set_fillMethod(HMUI.GradientImage/FillMethod value)
    // Offset: 0xEC6170
    void set_fillMethod(HMUI::GradientImage::FillMethod value);
    // public System.Single get_fillAmount()
    // Offset: 0xEC61F0
    float get_fillAmount();
    // public System.Void set_fillAmount(System.Single value)
    // Offset: 0xEC61F8
    void set_fillAmount(float value);
    // public System.Boolean get_fillClockwise()
    // Offset: 0xEC62AC
    bool get_fillClockwise();
    // public System.Void set_fillClockwise(System.Boolean value)
    // Offset: 0xEC62B4
    void set_fillClockwise(bool value);
    // public System.Int32 get_fillOrigin()
    // Offset: 0xEC633C
    int get_fillOrigin();
    // public System.Void set_fillOrigin(System.Int32 value)
    // Offset: 0xEC6344
    void set_fillOrigin(int value);
    // public System.Single get_eventAlphaThreshold()
    // Offset: 0xEC63CC
    float get_eventAlphaThreshold();
    // public System.Void set_eventAlphaThreshold(System.Single value)
    // Offset: 0xEC63D4
    void set_eventAlphaThreshold(float value);
    // public System.Boolean get_hasBorder()
    // Offset: 0xEC65C0
    bool get_hasBorder();
    // public System.Single get_pixelsPerUnit()
    // Offset: 0xEC668C
    float get_pixelsPerUnit();
    // private UnityEngine.Vector4 GetDrawingDimensions(System.Boolean shouldPreserveAspect)
    // Offset: 0xEC684C
    UnityEngine::Vector4 GetDrawingDimensions(bool shouldPreserveAspect);
    // private System.Void GenerateSimpleSprite(UnityEngine.UI.VertexHelper vh, System.Boolean lPreserveAspect)
    // Offset: 0xEC6FB4
    void GenerateSimpleSprite(UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect);
    // private System.Void GenerateSlicedSprite(UnityEngine.UI.VertexHelper toFill)
    // Offset: 0xEC7348
    void GenerateSlicedSprite(UnityEngine::UI::VertexHelper* toFill);
    // private System.Void GenerateTiledSprite(UnityEngine.UI.VertexHelper toFill)
    // Offset: 0xEC7CF0
    void GenerateTiledSprite(UnityEngine::UI::VertexHelper* toFill);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector3[] quadPositions, UnityEngine.Color32 color, UnityEngine.Vector3[] quadUVs)
    // Offset: 0xEC9FD4
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, ::Array<UnityEngine::Vector3>* quadPositions, UnityEngine::Color32 color, ::Array<UnityEngine::Vector3>* quadUVs);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color, UnityEngine.Vector2 uvMin, UnityEngine.Vector2 uvMax)
    // Offset: 0xEC9DC8
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color, UnityEngine::Vector2 uvMin, UnityEngine::Vector2 uvMax);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color0, UnityEngine.Color32 color1, UnityEngine.Vector2 uvMin, UnityEngine.Vector2 uvMax)
    // Offset: 0xEC9BB4
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color0, UnityEngine::Color32 color1, UnityEngine::Vector2 uvMin, UnityEngine::Vector2 uvMax);
    // private UnityEngine.Vector4 GetAdjustedBorders(UnityEngine.Vector4 border, UnityEngine.Rect rect)
    // Offset: 0xEC9A98
    UnityEngine::Vector4 GetAdjustedBorders(UnityEngine::Vector4 border, UnityEngine::Rect rect);
    // private System.Void GenerateFilledSprite(UnityEngine.UI.VertexHelper toFill, System.Boolean preserveAspect)
    // Offset: 0xEC8C64
    void GenerateFilledSprite(UnityEngine::UI::VertexHelper* toFill, bool preserveAspect);
    // static private System.Boolean RadialCut(UnityEngine.Vector3[] xy, UnityEngine.Vector3[] uv, System.Single fill, System.Boolean invert, System.Int32 corner)
    // Offset: 0xECA15C
    static bool RadialCut(::Array<UnityEngine::Vector3>* xy, ::Array<UnityEngine::Vector3>* uv, float fill, bool invert, int corner);
    // static private System.Void RadialCut(UnityEngine.Vector3[] xy, System.Single cos, System.Single sin, System.Boolean invert, System.Int32 corner)
    // Offset: 0xECA2C8
    static void RadialCut(::Array<UnityEngine::Vector3>* xy, float cos, float sin, bool invert, int corner);
    // private UnityEngine.Vector2 MapCoordinate(UnityEngine.Vector2 local, UnityEngine.Rect rect)
    // Offset: 0xECAE68
    UnityEngine::Vector2 MapCoordinate(UnityEngine::Vector2 local, UnityEngine::Rect rect);
    // protected System.Void .ctor()
    // Offset: 0xEC63DC
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GradientImage* New_ctor();
    // public override UnityEngine.Texture get_mainTexture()
    // Offset: 0xEC6424
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.Texture Graphic::get_mainTexture()
    UnityEngine::Texture* get_mainTexture();
    // public System.Void OnBeforeSerialize()
    // Offset: 0xEC6794
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnBeforeSerialize()
    void OnBeforeSerialize();
    // Creating proxy method: UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
    // Maps to method: OnBeforeSerialize
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
    // public System.Void OnAfterDeserialize()
    // Offset: 0xEC6798
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnAfterDeserialize()
    void OnAfterDeserialize();
    // Creating proxy method: UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
    // Maps to method: OnAfterDeserialize
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
    // public override System.Void SetNativeSize()
    // Offset: 0xEC6CDC
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetNativeSize()
    void SetNativeSize();
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper toFill)
    // Offset: 0xEC6E80
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnPopulateMesh(UnityEngine.UI.VertexHelper toFill)
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* toFill);
    // public System.Void CalculateLayoutInputHorizontal()
    // Offset: 0xECA840
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputHorizontal()
    void CalculateLayoutInputHorizontal();
    // public System.Void CalculateLayoutInputVertical()
    // Offset: 0xECA844
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputVertical()
    void CalculateLayoutInputVertical();
    // public System.Single get_minWidth()
    // Offset: 0xECA848
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_minWidth()
    float get_minWidth();
    // public System.Single get_preferredWidth()
    // Offset: 0xECA850
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_preferredWidth()
    float get_preferredWidth();
    // public System.Single get_flexibleWidth()
    // Offset: 0xECA944
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_flexibleWidth()
    float get_flexibleWidth();
    // public System.Single get_minHeight()
    // Offset: 0xECA94C
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_minHeight()
    float get_minHeight();
    // public System.Single get_preferredHeight()
    // Offset: 0xECA954
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_preferredHeight()
    float get_preferredHeight();
    // public System.Single get_flexibleHeight()
    // Offset: 0xECAA48
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Single ILayoutElement::get_flexibleHeight()
    float get_flexibleHeight();
    // public System.Int32 get_layoutPriority()
    // Offset: 0xECAA50
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Int32 ILayoutElement::get_layoutPriority()
    int get_layoutPriority();
    // public System.Boolean IsRaycastLocationValid(UnityEngine.Vector2 screenPoint, UnityEngine.Camera eventCamera)
    // Offset: 0xECAA58
    // Implemented from: UnityEngine.ICanvasRaycastFilter
    // Base method: System.Boolean ICanvasRaycastFilter::IsRaycastLocationValid(UnityEngine.Vector2 screenPoint, UnityEngine.Camera eventCamera)
    bool IsRaycastLocationValid(UnityEngine::Vector2 screenPoint, UnityEngine::Camera* eventCamera);
    // static private System.Void .cctor()
    // Offset: 0xECB34C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // HMUI.GradientImage
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::GradientImage*, "HMUI", "GradientImage");
DEFINE_IL2CPP_ARG_TYPE(HMUI::GradientImage::Type, "HMUI", "GradientImage/Type");
DEFINE_IL2CPP_ARG_TYPE(HMUI::GradientImage::FillMethod, "HMUI", "GradientImage/FillMethod");
#pragma pack(pop)
