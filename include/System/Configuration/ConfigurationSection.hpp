// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:11 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Configuration.ConfigurationElement
#include "System/Configuration/ConfigurationElement.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlReader
  class XmlReader;
}
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationSaveMode
  struct ConfigurationSaveMode;
}
// Completed forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Autogenerated type: System.Configuration.ConfigurationSection
  class ConfigurationSection : public System::Configuration::ConfigurationElement {
    public:
    // protected internal System.Void DeserializeSection(System.Xml.XmlReader reader)
    // Offset: 0x19643A0
    void DeserializeSection(System::Xml::XmlReader* reader);
    // protected internal System.String SerializeSection(System.Configuration.ConfigurationElement parentElement, System.String name, System.Configuration.ConfigurationSaveMode saveMode)
    // Offset: 0x1964460
    ::Il2CppString* SerializeSection(System::Configuration::ConfigurationElement* parentElement, ::Il2CppString* name, System::Configuration::ConfigurationSaveMode saveMode);
    // protected internal override System.Boolean IsModified()
    // Offset: 0x19643E0
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Boolean ConfigurationElement::IsModified()
    bool IsModified();
    // protected internal override System.Void ResetModified()
    // Offset: 0x1964420
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Void ConfigurationElement::ResetModified()
    void ResetModified();
  }; // System.Configuration.ConfigurationSection
}
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::ConfigurationSection*, "System.Configuration", "ConfigurationSection");
#pragma pack(pop)
