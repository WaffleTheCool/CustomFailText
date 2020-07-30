// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:21 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelParamsPanel
  class LevelParamsPanel;
  // Forward declaring type: BeatmapDifficultySegmentedControlController
  class BeatmapDifficultySegmentedControlController;
  // Forward declaring type: BeatmapCharacteristicSegmentedControlController
  class BeatmapCharacteristicSegmentedControlController;
  // Forward declaring type: KawaseBlurRendererSO
  class KawaseBlurRendererSO;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: IBeatmapLevel
  class IBeatmapLevel;
  // Forward declaring type: PlayerData
  class PlayerData;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
  // Forward declaring type: RawImage
  class RawImage;
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardLevelDetailView
  class StandardLevelDetailView : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::StandardLevelDetailView::$SetTextureAsync$d__42
    struct $SetTextureAsync$d__42;
    // private UnityEngine.UI.Button _playButton
    // Offset: 0x18
    UnityEngine::UI::Button* playButton;
    // private UnityEngine.UI.Button _practiceButton
    // Offset: 0x20
    UnityEngine::UI::Button* practiceButton;
    // private TMPro.TextMeshProUGUI _songNameText
    // Offset: 0x28
    TMPro::TextMeshProUGUI* songNameText;
    // private LevelParamsPanel _levelParamsPanel
    // Offset: 0x30
    GlobalNamespace::LevelParamsPanel* levelParamsPanel;
    // private TMPro.TextMeshProUGUI _highScoreText
    // Offset: 0x38
    TMPro::TextMeshProUGUI* highScoreText;
    // private TMPro.TextMeshProUGUI _maxComboText
    // Offset: 0x40
    TMPro::TextMeshProUGUI* maxComboText;
    // private TMPro.TextMeshProUGUI _maxRankText
    // Offset: 0x48
    TMPro::TextMeshProUGUI* maxRankText;
    // private UnityEngine.UI.RawImage _coverImage
    // Offset: 0x50
    UnityEngine::UI::RawImage* coverImage;
    // private BeatmapDifficultySegmentedControlController _beatmapDifficultySegmentedControlController
    // Offset: 0x58
    GlobalNamespace::BeatmapDifficultySegmentedControlController* beatmapDifficultySegmentedControlController;
    // private BeatmapCharacteristicSegmentedControlController _beatmapCharacteristicSegmentedControlController
    // Offset: 0x60
    GlobalNamespace::BeatmapCharacteristicSegmentedControlController* beatmapCharacteristicSegmentedControlController;
    // private UnityEngine.GameObject _playerStatsContainer
    // Offset: 0x68
    UnityEngine::GameObject* playerStatsContainer;
    // private UnityEngine.GameObject _separator
    // Offset: 0x70
    UnityEngine::GameObject* separator;
    // private UnityEngine.UI.Toggle _favoriteToggle
    // Offset: 0x78
    UnityEngine::UI::Toggle* favoriteToggle;
    // private KawaseBlurRendererSO _kawaseBlurRenderer
    // Offset: 0x80
    GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer;
    // private System.Action`2<StandardLevelDetailView,IDifficultyBeatmap> didChangeDifficultyBeatmapEvent
    // Offset: 0x88
    System::Action_2<GlobalNamespace::StandardLevelDetailView*, GlobalNamespace::IDifficultyBeatmap*>* didChangeDifficultyBeatmapEvent;
    // private System.Action`2<StandardLevelDetailView,UnityEngine.UI.Toggle> didFavoriteToggleChangeEvent
    // Offset: 0x90
    System::Action_2<GlobalNamespace::StandardLevelDetailView*, UnityEngine::UI::Toggle*>* didFavoriteToggleChangeEvent;
    // private System.Boolean _showPlayerStats
    // Offset: 0x98
    bool showPlayerStats;
    // private IBeatmapLevel _level
    // Offset: 0xA0
    GlobalNamespace::IBeatmapLevel* level;
    // private PlayerData _playerData
    // Offset: 0xA8
    GlobalNamespace::PlayerData* playerData;
    // private IDifficultyBeatmap _selectedDifficultyBeatmap
    // Offset: 0xB0
    GlobalNamespace::IDifficultyBeatmap* selectedDifficultyBeatmap;
    // private System.String _settingTextureForLevelId
    // Offset: 0xB8
    ::Il2CppString* settingTextureForLevelId;
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Offset: 0xC0
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // private HMUI.ToggleBinder _toggleBinder
    // Offset: 0xC8
    HMUI::ToggleBinder* toggleBinder;
    // private UnityEngine.Texture2D _blurredCoverTexture
    // Offset: 0xD0
    UnityEngine::Texture2D* blurredCoverTexture;
    // public System.Void add_didChangeDifficultyBeatmapEvent(System.Action`2<StandardLevelDetailView,IDifficultyBeatmap> value)
    // Offset: 0xB89300
    void add_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void remove_didChangeDifficultyBeatmapEvent(System.Action`2<StandardLevelDetailView,IDifficultyBeatmap> value)
    // Offset: 0xB893A4
    void remove_didChangeDifficultyBeatmapEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView*, GlobalNamespace::IDifficultyBeatmap*>* value);
    // public System.Void add_didFavoriteToggleChangeEvent(System.Action`2<StandardLevelDetailView,UnityEngine.UI.Toggle> value)
    // Offset: 0xB89448
    void add_didFavoriteToggleChangeEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView*, UnityEngine::UI::Toggle*>* value);
    // public System.Void remove_didFavoriteToggleChangeEvent(System.Action`2<StandardLevelDetailView,UnityEngine.UI.Toggle> value)
    // Offset: 0xB894EC
    void remove_didFavoriteToggleChangeEvent(System::Action_2<GlobalNamespace::StandardLevelDetailView*, UnityEngine::UI::Toggle*>* value);
    // public IDifficultyBeatmap get_selectedDifficultyBeatmap()
    // Offset: 0xB89590
    GlobalNamespace::IDifficultyBeatmap* get_selectedDifficultyBeatmap();
    // public UnityEngine.UI.Button get_playButton()
    // Offset: 0xB89598
    UnityEngine::UI::Button* get_playButton();
    // public UnityEngine.UI.Button get_practiceButton()
    // Offset: 0xB895A0
    UnityEngine::UI::Button* get_practiceButton();
    // public System.Void set_hidePracticeButton(System.Boolean value)
    // Offset: 0xB895A8
    void set_hidePracticeButton(bool value);
    // public System.Void SetContent(IBeatmapLevel level, BeatmapDifficulty defaultDifficulty, BeatmapCharacteristicSO defaultBeatmapCharacteristic, PlayerData playerData, System.Boolean showPlayerStats)
    // Offset: 0xB895E8
    void SetContent(GlobalNamespace::IBeatmapLevel* level, GlobalNamespace::BeatmapDifficulty defaultDifficulty, GlobalNamespace::BeatmapCharacteristicSO* defaultBeatmapCharacteristic, GlobalNamespace::PlayerData* playerData, bool showPlayerStats);
    // protected System.Void Awake()
    // Offset: 0xB8A350
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xB8A4B4
    void OnDestroy();
    // private System.Void HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty(BeatmapDifficultySegmentedControlController controller, BeatmapDifficulty difficulty)
    // Offset: 0xB8A698
    void HandleBeatmapDifficultySegmentedControlControllerDidSelectDifficulty(GlobalNamespace::BeatmapDifficultySegmentedControlController* controller, GlobalNamespace::BeatmapDifficulty difficulty);
    // private System.Void HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic(BeatmapCharacteristicSegmentedControlController controller, BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0xB8A708
    void HandleBeatmapCharacteristicSegmentedControlControllerDidSelectBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSegmentedControlController* controller, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // public System.Void RefreshContent()
    // Offset: 0xB89908
    void RefreshContent();
    // public System.Void SetTextureAsync(IPreviewBeatmapLevel level)
    // Offset: 0xB8A8A4
    void SetTextureAsync(GlobalNamespace::IPreviewBeatmapLevel* level);
    // private System.Void <Awake>b__37_0(System.Boolean on)
    // Offset: 0xB8A998
    void $Awake$b__37_0(bool on);
    // public System.Void .ctor()
    // Offset: 0xB8A990
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static StandardLevelDetailView* New_ctor();
  }; // StandardLevelDetailView
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelDetailView*, "", "StandardLevelDetailView");
#pragma pack(pop)
