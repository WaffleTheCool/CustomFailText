// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: JetBrains.Annotations.ImplicitUseKindFlags
#include "JetBrains/Annotations/ImplicitUseKindFlags.hpp"
// Including type: JetBrains.Annotations.ImplicitUseTargetFlags
#include "JetBrains/Annotations/ImplicitUseTargetFlags.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.UsedImplicitlyAttribute
  class UsedImplicitlyAttribute : public System::Attribute {
    public:
    // private JetBrains.Annotations.ImplicitUseKindFlags <UseKindFlags>k__BackingField
    // Offset: 0x10
    JetBrains::Annotations::ImplicitUseKindFlags UseKindFlags;
    // private JetBrains.Annotations.ImplicitUseTargetFlags <TargetFlags>k__BackingField
    // Offset: 0x14
    JetBrains::Annotations::ImplicitUseTargetFlags TargetFlags;
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseKindFlags useKindFlags, JetBrains.Annotations.ImplicitUseTargetFlags targetFlags)
    // Offset: 0x12E6C30
    static UsedImplicitlyAttribute* New_ctor(JetBrains::Annotations::ImplicitUseKindFlags useKindFlags, JetBrains::Annotations::ImplicitUseTargetFlags targetFlags);
    // private System.Void set_UseKindFlags(JetBrains.Annotations.ImplicitUseKindFlags value)
    // Offset: 0x12E6C68
    void set_UseKindFlags(JetBrains::Annotations::ImplicitUseKindFlags value);
    // private System.Void set_TargetFlags(JetBrains.Annotations.ImplicitUseTargetFlags value)
    // Offset: 0x12E6C70
    void set_TargetFlags(JetBrains::Annotations::ImplicitUseTargetFlags value);
    // public System.Void .ctor()
    // Offset: 0x12E6C00
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static UsedImplicitlyAttribute* New_ctor();
  }; // JetBrains.Annotations.UsedImplicitlyAttribute
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::UsedImplicitlyAttribute*, "JetBrains.Annotations", "UsedImplicitlyAttribute");
#pragma pack(pop)
