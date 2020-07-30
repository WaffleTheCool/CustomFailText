// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.FontStyle
#include "UnityEngine/FontStyle.hpp"
// Including type: UnityEngine.TextAnchor
#include "UnityEngine/TextAnchor.hpp"
// Including type: UnityEngine.VerticalWrapMode
#include "UnityEngine/VerticalWrapMode.hpp"
// Including type: UnityEngine.HorizontalWrapMode
#include "UnityEngine/HorizontalWrapMode.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Font
  class Font;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.TextGenerationSettings
  struct TextGenerationSettings : public System::ValueType {
    public:
    // public UnityEngine.Font font
    // Offset: 0x0
    UnityEngine::Font* font;
    // public UnityEngine.Color color
    // Offset: 0x8
    UnityEngine::Color color;
    // public System.Int32 fontSize
    // Offset: 0x18
    int fontSize;
    // public System.Single lineSpacing
    // Offset: 0x1C
    float lineSpacing;
    // public System.Boolean richText
    // Offset: 0x20
    bool richText;
    // public System.Single scaleFactor
    // Offset: 0x24
    float scaleFactor;
    // public UnityEngine.FontStyle fontStyle
    // Offset: 0x28
    UnityEngine::FontStyle fontStyle;
    // public UnityEngine.TextAnchor textAnchor
    // Offset: 0x2C
    UnityEngine::TextAnchor textAnchor;
    // public System.Boolean alignByGeometry
    // Offset: 0x30
    bool alignByGeometry;
    // public System.Boolean resizeTextForBestFit
    // Offset: 0x31
    bool resizeTextForBestFit;
    // public System.Int32 resizeTextMinSize
    // Offset: 0x34
    int resizeTextMinSize;
    // public System.Int32 resizeTextMaxSize
    // Offset: 0x38
    int resizeTextMaxSize;
    // public System.Boolean updateBounds
    // Offset: 0x3C
    bool updateBounds;
    // public UnityEngine.VerticalWrapMode verticalOverflow
    // Offset: 0x40
    UnityEngine::VerticalWrapMode verticalOverflow;
    // public UnityEngine.HorizontalWrapMode horizontalOverflow
    // Offset: 0x44
    UnityEngine::HorizontalWrapMode horizontalOverflow;
    // public UnityEngine.Vector2 generationExtents
    // Offset: 0x48
    UnityEngine::Vector2 generationExtents;
    // public UnityEngine.Vector2 pivot
    // Offset: 0x50
    UnityEngine::Vector2 pivot;
    // public System.Boolean generateOutOfBounds
    // Offset: 0x58
    bool generateOutOfBounds;
    // Creating value type constructor for type: TextGenerationSettings
    TextGenerationSettings(UnityEngine::Font* font_ = {}, UnityEngine::Color color_ = {}, int fontSize_ = {}, float lineSpacing_ = {}, bool richText_ = {}, float scaleFactor_ = {}, UnityEngine::FontStyle fontStyle_ = {}, UnityEngine::TextAnchor textAnchor_ = {}, bool alignByGeometry_ = {}, bool resizeTextForBestFit_ = {}, int resizeTextMinSize_ = {}, int resizeTextMaxSize_ = {}, bool updateBounds_ = {}, UnityEngine::VerticalWrapMode verticalOverflow_ = {}, UnityEngine::HorizontalWrapMode horizontalOverflow_ = {}, UnityEngine::Vector2 generationExtents_ = {}, UnityEngine::Vector2 pivot_ = {}, bool generateOutOfBounds_ = {}) : font{font_}, color{color_}, fontSize{fontSize_}, lineSpacing{lineSpacing_}, richText{richText_}, scaleFactor{scaleFactor_}, fontStyle{fontStyle_}, textAnchor{textAnchor_}, alignByGeometry{alignByGeometry_}, resizeTextForBestFit{resizeTextForBestFit_}, resizeTextMinSize{resizeTextMinSize_}, resizeTextMaxSize{resizeTextMaxSize_}, updateBounds{updateBounds_}, verticalOverflow{verticalOverflow_}, horizontalOverflow{horizontalOverflow_}, generationExtents{generationExtents_}, pivot{pivot_}, generateOutOfBounds{generateOutOfBounds_} {}
    // private System.Boolean CompareColors(UnityEngine.Color left, UnityEngine.Color right)
    // Offset: 0xA5B754
    bool CompareColors(UnityEngine::Color left, UnityEngine::Color right);
    // private System.Boolean CompareVector2(UnityEngine.Vector2 left, UnityEngine.Vector2 right)
    // Offset: 0xA5B758
    bool CompareVector2(UnityEngine::Vector2 left, UnityEngine::Vector2 right);
    // public System.Boolean Equals(UnityEngine.TextGenerationSettings other)
    // Offset: 0xA5B75C
    bool Equals(UnityEngine::TextGenerationSettings other);
  }; // UnityEngine.TextGenerationSettings
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TextGenerationSettings, "UnityEngine", "TextGenerationSettings");
#pragma pack(pop)
