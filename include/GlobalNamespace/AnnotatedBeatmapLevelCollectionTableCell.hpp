// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:17 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AnnotatedBeatmapLevelCollectionTableCell
  class AnnotatedBeatmapLevelCollectionTableCell : public HMUI::TableCell {
    public:
    // Nested type: GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell::$RefreshAvailabilityAsync$d__14
    struct $RefreshAvailabilityAsync$d__14;
    // private TMPro.TextMeshProUGUI _infoText
    // Offset: 0x50
    TMPro::TextMeshProUGUI* infoText;
    // private UnityEngine.UI.Image _coverImage
    // Offset: 0x58
    UnityEngine::UI::Image* coverImage;
    // private UnityEngine.UI.Image _selectionImage
    // Offset: 0x60
    UnityEngine::UI::Image* selectionImage;
    // private UnityEngine.GameObject[] _newPromoRibbonObjects
    // Offset: 0x68
    ::Array<UnityEngine::GameObject*>* newPromoRibbonObjects;
    // private IAnnotatedBeatmapLevelCollection _annotatedBeatmapLevelCollection
    // Offset: 0x70
    GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection;
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Offset: 0x78
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // public System.Void set_showNewRibbon(System.Boolean value)
    // Offset: 0x196A854
    void set_showNewRibbon(bool value);
    // public System.Void SetData(IAnnotatedBeatmapLevelCollection annotatedBeatmapLevelCollection)
    // Offset: 0x196A8D0
    void SetData(GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection);
    // private System.Void RefreshVisuals()
    // Offset: 0x196AC18
    void RefreshVisuals();
    // private System.String GetInfoText(System.String name, System.Int32 songs, System.Int32 purchased)
    // Offset: 0x196AB2C
    ::Il2CppString* GetInfoText(::Il2CppString* name, int songs, int purchased);
    // public System.Void RefreshAvailabilityAsync(AdditionalContentModel contentModel)
    // Offset: 0x196ACF4
    void RefreshAvailabilityAsync(GlobalNamespace::AdditionalContentModel* contentModel);
    // public System.Void CancelAsyncOperations()
    // Offset: 0x196ACE0
    void CancelAsyncOperations();
    // protected override System.Void SelectionDidChange(HMUI.TableCell/TransitionType transitionType)
    // Offset: 0x196AC14
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::SelectionDidChange(HMUI.TableCell/TransitionType transitionType)
    void SelectionDidChange(HMUI::TableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.TableCell/TransitionType transitionType)
    // Offset: 0x196ACC8
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::HighlightDidChange(HMUI.TableCell/TransitionType transitionType)
    void HighlightDidChange(HMUI::TableCell::TransitionType transitionType);
    // protected override System.Void WasPreparedForReuse()
    // Offset: 0x196ACCC
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::WasPreparedForReuse()
    void WasPreparedForReuse();
    // public System.Void .ctor()
    // Offset: 0x196ADE4
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AnnotatedBeatmapLevelCollectionTableCell* New_ctor();
  }; // AnnotatedBeatmapLevelCollectionTableCell
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AnnotatedBeatmapLevelCollectionTableCell*, "", "AnnotatedBeatmapLevelCollectionTableCell");
#pragma pack(pop)
