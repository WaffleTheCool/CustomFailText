// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Forward declaring type: TypeInferenceRules
  struct TypeInferenceRules;
}
// Completed forward declares
// Type namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Autogenerated type: UnityEngineInternal.TypeInferenceRuleAttribute
  class TypeInferenceRuleAttribute : public System::Attribute {
    public:
    // private readonly System.String _rule
    // Offset: 0x10
    ::Il2CppString* rule;
    // public System.Void .ctor(UnityEngineInternal.TypeInferenceRules rule)
    // Offset: 0x1384830
    static TypeInferenceRuleAttribute* New_ctor(UnityEngineInternal::TypeInferenceRules rule);
    // public System.Void .ctor(System.String rule)
    // Offset: 0x13848D8
    static TypeInferenceRuleAttribute* New_ctor(::Il2CppString* rule);
    // public override System.String ToString()
    // Offset: 0x138490C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngineInternal.TypeInferenceRuleAttribute
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::TypeInferenceRuleAttribute*, "UnityEngineInternal", "TypeInferenceRuleAttribute");
#pragma pack(pop)
