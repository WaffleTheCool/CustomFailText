// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:03 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Oculus.Platform.Models.DeserializableList`1
#include "Oculus/Platform/Models/DeserializableList_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: CalApplicationSuggestion
  class CalApplicationSuggestion;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.CalApplicationSuggestionList
  class CalApplicationSuggestionList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::CalApplicationSuggestion*> {
    public:
    // public System.Void .ctor(System.IntPtr a)
    // Offset: 0xE8B9FC
    static CalApplicationSuggestionList* New_ctor(System::IntPtr a);
  }; // Oculus.Platform.Models.CalApplicationSuggestionList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::CalApplicationSuggestionList*, "Oculus.Platform.Models", "CalApplicationSuggestionList");
#pragma pack(pop)
