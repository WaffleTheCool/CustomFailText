// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: TMPro.TextElementType
#include "TMPro/TextElementType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TextCore
namespace UnityEngine::TextCore {
  // Forward declaring type: Glyph
  class Glyph;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_TextElement
  class TMP_TextElement : public ::Il2CppObject {
    public:
    // protected TMPro.TextElementType m_ElementType
    // Offset: 0x10
    TMPro::TextElementType m_ElementType;
    // private System.UInt32 m_Unicode
    // Offset: 0x14
    uint m_Unicode;
    // private UnityEngine.TextCore.Glyph m_Glyph
    // Offset: 0x18
    UnityEngine::TextCore::Glyph* m_Glyph;
    // private System.UInt32 m_GlyphIndex
    // Offset: 0x20
    uint m_GlyphIndex;
    // private System.Single m_Scale
    // Offset: 0x24
    float m_Scale;
    // public TMPro.TextElementType get_elementType()
    // Offset: 0xDAADA8
    TMPro::TextElementType get_elementType();
    // public System.UInt32 get_unicode()
    // Offset: 0xDAADB0
    uint get_unicode();
    // public System.Void set_unicode(System.UInt32 value)
    // Offset: 0xDAADB8
    void set_unicode(uint value);
    // public UnityEngine.TextCore.Glyph get_glyph()
    // Offset: 0xDAADC0
    UnityEngine::TextCore::Glyph* get_glyph();
    // public System.Void set_glyph(UnityEngine.TextCore.Glyph value)
    // Offset: 0xDAADC8
    void set_glyph(UnityEngine::TextCore::Glyph* value);
    // public System.UInt32 get_glyphIndex()
    // Offset: 0xDAADD0
    uint get_glyphIndex();
    // public System.Void set_glyphIndex(System.UInt32 value)
    // Offset: 0xDAADD8
    void set_glyphIndex(uint value);
    // public System.Single get_scale()
    // Offset: 0xDAADE0
    float get_scale();
    // public System.Void set_scale(System.Single value)
    // Offset: 0xDAADE8
    void set_scale(float value);
    // public System.Void .ctor()
    // Offset: 0xDAADF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TMP_TextElement* New_ctor();
  }; // TMPro.TMP_TextElement
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_TextElement*, "TMPro", "TMP_TextElement");
#pragma pack(pop)
