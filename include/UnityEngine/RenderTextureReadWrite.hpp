// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:27 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.RenderTextureReadWrite
  struct RenderTextureReadWrite : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.RenderTextureReadWrite Default
    static constexpr const int Default = 0;
    // Get static field: static public UnityEngine.RenderTextureReadWrite Default
    static UnityEngine::RenderTextureReadWrite _get_Default();
    // Set static field: static public UnityEngine.RenderTextureReadWrite Default
    static void _set_Default(UnityEngine::RenderTextureReadWrite value);
    // static field const value: static public UnityEngine.RenderTextureReadWrite Linear
    static constexpr const int Linear = 1;
    // Get static field: static public UnityEngine.RenderTextureReadWrite Linear
    static UnityEngine::RenderTextureReadWrite _get_Linear();
    // Set static field: static public UnityEngine.RenderTextureReadWrite Linear
    static void _set_Linear(UnityEngine::RenderTextureReadWrite value);
    // static field const value: static public UnityEngine.RenderTextureReadWrite sRGB
    static constexpr const int sRGB = 2;
    // Get static field: static public UnityEngine.RenderTextureReadWrite sRGB
    static UnityEngine::RenderTextureReadWrite _get_sRGB();
    // Set static field: static public UnityEngine.RenderTextureReadWrite sRGB
    static void _set_sRGB(UnityEngine::RenderTextureReadWrite value);
    // Creating value type constructor for type: RenderTextureReadWrite
    RenderTextureReadWrite(int value_ = {}) : value{value_} {}
  }; // UnityEngine.RenderTextureReadWrite
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RenderTextureReadWrite, "UnityEngine", "RenderTextureReadWrite");
#pragma pack(pop)
