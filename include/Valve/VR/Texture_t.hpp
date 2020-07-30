// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.ETextureType
#include "Valve/VR/ETextureType.hpp"
// Including type: Valve.VR.EColorSpace
#include "Valve/VR/EColorSpace.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.Texture_t
  struct Texture_t : public System::ValueType {
    public:
    // public System.IntPtr handle
    // Offset: 0x0
    System::IntPtr handle;
    // public Valve.VR.ETextureType eType
    // Offset: 0x8
    Valve::VR::ETextureType eType;
    // public Valve.VR.EColorSpace eColorSpace
    // Offset: 0xC
    Valve::VR::EColorSpace eColorSpace;
    // Creating value type constructor for type: Texture_t
    Texture_t(System::IntPtr handle_ = {}, Valve::VR::ETextureType eType_ = {}, Valve::VR::EColorSpace eColorSpace_ = {}) : handle{handle_}, eType{eType_}, eColorSpace{eColorSpace_} {}
  }; // Valve.VR.Texture_t
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::Texture_t, "Valve.VR", "Texture_t");
#pragma pack(pop)
