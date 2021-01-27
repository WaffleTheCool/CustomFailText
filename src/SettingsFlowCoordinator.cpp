#include "SettingsFlowCoordinator.hpp"
#include "SettingsViewController.hpp"
#include "ExtraSettingsViewController.hpp"
using namespace CustomFailText;

#include "questui/shared/BeatSaberUI.hpp"
using namespace QuestUI;

#include "HMUI/ViewController_AnimationType.hpp"
#include "HMUI/ViewController_AnimationDirection.hpp"

DEFINE_CLASS(SettingsFlowCoordinator);

void SettingsFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
    if(!firstActivation) {return;}

    this->showBackButton = true;
    this->SetTitle(il2cpp_utils::createcsstr("CustomFailText Settings", il2cpp_utils::StringType::Manual), HMUI::ViewController::AnimationType::In);

    SettingsViewController* mainSettingsView = BeatSaberUI::CreateViewController<SettingsViewController*>();
    ExtraSettingsViewController* extraSettingsView = BeatSaberUI::CreateViewController<ExtraSettingsViewController*>();

    this->ProvideInitialViewControllers(mainSettingsView, nullptr, extraSettingsView, nullptr, nullptr);
}

void SettingsFlowCoordinator::BackButtonWasPressed(HMUI::ViewController* topViewController) {
    getLogger().info("Deactivating flow coordinator!");
    this->parentFlowCoordinator->DismissFlowCoordinator(this, HMUI::ViewController::AnimationDirection::Horizontal, nullptr, false);
}