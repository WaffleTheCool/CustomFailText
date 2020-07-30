// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:19 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TextCore::LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Forward declaring type: GlyphValueRecord
  struct GlyphValueRecord;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.GlyphValueRecord_Legacy
  struct GlyphValueRecord_Legacy : public System::ValueType {
    public:
    // public System.Single xPlacement
    // Offset: 0x0
    float xPlacement;
    // public System.Single yPlacement
    // Offset: 0x4
    float yPlacement;
    // public System.Single xAdvance
    // Offset: 0x8
    float xAdvance;
    // public System.Single yAdvance
    // Offset: 0xC
    float yAdvance;
    // Creating value type constructor for type: GlyphValueRecord_Legacy
    GlyphValueRecord_Legacy(float xPlacement_ = {}, float yPlacement_ = {}, float xAdvance_ = {}, float yAdvance_ = {}) : xPlacement{xPlacement_}, yPlacement{yPlacement_}, xAdvance{xAdvance_}, yAdvance{yAdvance_} {}
    // System.Void .ctor(UnityEngine.TextCore.LowLevel.GlyphValueRecord valueRecord)
    // Offset: 0xA26F80
    static GlyphValueRecord_Legacy* New_ctor(UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord);
  }; // TMPro.GlyphValueRecord_Legacy
  // static public TMPro.GlyphValueRecord_Legacy op_Addition(TMPro.GlyphValueRecord_Legacy a, TMPro.GlyphValueRecord_Legacy b)
  // Offset: 0xB64F88
  TMPro::GlyphValueRecord_Legacy operator+(const TMPro::GlyphValueRecord_Legacy& a, const TMPro::GlyphValueRecord_Legacy& b);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::GlyphValueRecord_Legacy, "TMPro", "GlyphValueRecord_Legacy");
#pragma pack(pop)
