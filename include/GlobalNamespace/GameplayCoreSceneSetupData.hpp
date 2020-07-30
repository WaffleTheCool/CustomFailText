// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:21 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
  // Forward declaring type: PlayerSpecificSettings
  class PlayerSpecificSettings;
  // Forward declaring type: PracticeSettings
  class PracticeSettings;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayCoreSceneSetupData
  class GameplayCoreSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // private IDifficultyBeatmap <difficultyBeatmap>k__BackingField
    // Offset: 0x10
    GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap;
    // private GameplayModifiers <gameplayModifiers>k__BackingField
    // Offset: 0x18
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // private PlayerSpecificSettings <playerSpecificSettings>k__BackingField
    // Offset: 0x20
    GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;
    // private PracticeSettings <practiceSettings>k__BackingField
    // Offset: 0x28
    GlobalNamespace::PracticeSettings* practiceSettings;
    // private System.Boolean <useTestNoteCutSoundEffects>k__BackingField
    // Offset: 0x30
    bool useTestNoteCutSoundEffects;
    // public IDifficultyBeatmap get_difficultyBeatmap()
    // Offset: 0xB3E280
    GlobalNamespace::IDifficultyBeatmap* get_difficultyBeatmap();
    // private System.Void set_difficultyBeatmap(IDifficultyBeatmap value)
    // Offset: 0xB3E288
    void set_difficultyBeatmap(GlobalNamespace::IDifficultyBeatmap* value);
    // public GameplayModifiers get_gameplayModifiers()
    // Offset: 0xB3E290
    GlobalNamespace::GameplayModifiers* get_gameplayModifiers();
    // private System.Void set_gameplayModifiers(GameplayModifiers value)
    // Offset: 0xB3E298
    void set_gameplayModifiers(GlobalNamespace::GameplayModifiers* value);
    // public PlayerSpecificSettings get_playerSpecificSettings()
    // Offset: 0xB3E2A0
    GlobalNamespace::PlayerSpecificSettings* get_playerSpecificSettings();
    // private System.Void set_playerSpecificSettings(PlayerSpecificSettings value)
    // Offset: 0xB3E2A8
    void set_playerSpecificSettings(GlobalNamespace::PlayerSpecificSettings* value);
    // public PracticeSettings get_practiceSettings()
    // Offset: 0xB3E2B0
    GlobalNamespace::PracticeSettings* get_practiceSettings();
    // private System.Void set_practiceSettings(PracticeSettings value)
    // Offset: 0xB3E2B8
    void set_practiceSettings(GlobalNamespace::PracticeSettings* value);
    // public System.Boolean get_useTestNoteCutSoundEffects()
    // Offset: 0xB3E2C0
    bool get_useTestNoteCutSoundEffects();
    // private System.Void set_useTestNoteCutSoundEffects(System.Boolean value)
    // Offset: 0xB3E2C8
    void set_useTestNoteCutSoundEffects(bool value);
    // public System.Void .ctor(IDifficultyBeatmap difficultyBeatmap, GameplayModifiers gameplayModifiers, PlayerSpecificSettings playerSpecificSettings, PracticeSettings practiceSettings, System.Boolean useTestNoteCutSoundEffects)
    // Offset: 0xB3E2D4
    static GameplayCoreSceneSetupData* New_ctor(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, bool useTestNoteCutSoundEffects);
  }; // GameplayCoreSceneSetupData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayCoreSceneSetupData*, "", "GameplayCoreSceneSetupData");
#pragma pack(pop)
