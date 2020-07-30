// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:09 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private UnityEngine.Sprite _icon
    // Offset: 0x18
    UnityEngine::Sprite* icon;
    // private System.String _descriptionLocalizationKey
    // Offset: 0x20
    ::Il2CppString* descriptionLocalizationKey;
    // private System.String _characteristicNameLocalizationKey
    // Offset: 0x28
    ::Il2CppString* characteristicNameLocalizationKey;
    // private System.String _serializedName
    // Offset: 0x30
    ::Il2CppString* serializedName;
    // private System.String _compoundIdPartName
    // Offset: 0x38
    ::Il2CppString* compoundIdPartName;
    // private System.Int32 _sortingOrder
    // Offset: 0x40
    int sortingOrder;
    // private System.Boolean _containsRotationEvents
    // Offset: 0x44
    bool containsRotationEvents;
    // private System.Boolean _requires360Movement
    // Offset: 0x45
    bool requires360Movement;
    // public UnityEngine.Sprite get_icon()
    // Offset: 0x1976844
    UnityEngine::Sprite* get_icon();
    // public System.String get_descriptionLocalizationKey()
    // Offset: 0x197684C
    ::Il2CppString* get_descriptionLocalizationKey();
    // public System.String get_characteristicNameLocalizationKey()
    // Offset: 0x1976854
    ::Il2CppString* get_characteristicNameLocalizationKey();
    // public System.String get_serializedName()
    // Offset: 0x197685C
    ::Il2CppString* get_serializedName();
    // public System.String get_compoundIdPartName()
    // Offset: 0x1976864
    ::Il2CppString* get_compoundIdPartName();
    // public System.Int32 get_sortingOrder()
    // Offset: 0x197686C
    int get_sortingOrder();
    // public System.Boolean get_containsRotationEvents()
    // Offset: 0x1976874
    bool get_containsRotationEvents();
    // public System.Boolean get_requires360Movement()
    // Offset: 0x197687C
    bool get_requires360Movement();
    // public System.Void .ctor()
    // Offset: 0x1976884
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapCharacteristicSO* New_ctor();
  }; // BeatmapCharacteristicSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicSO*, "", "BeatmapCharacteristicSO");
#pragma pack(pop)
