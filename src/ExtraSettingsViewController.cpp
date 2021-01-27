#include "ExtraSettingsViewController.hpp"
#include "questui/shared/BeatSaberUI.hpp"
#include "questui/shared/CustomTypes/Components/Backgroundable.hpp"
using namespace CustomFailText;
using namespace QuestUI;
using namespace UnityEngine::UI;

#include "UnityEngine/Events/UnityAction_1.hpp"
#include "UnityEngine/RectOffset.hpp"
using namespace UnityEngine::Events;

DEFINE_CLASS(ExtraSettingsViewController);

void onShowTextOnBailoutChange(bool newValue) {
    getConfig().config["showTextOnBailout"] = newValue;
}

void onBailoutTextDisappearTimeChange(float newValue) {
    getConfig().config["bailoutTextDisappearTime"] = newValue;
}

void onTextSizeChange(float newValue) {
    getConfig().config["textSize"] = newValue;
}

void onCursedModeChange(bool newValue) {
    getConfig().config["cursedMode"] = newValue;
}

void ExtraSettingsViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool systemScreenEnabling) {
    if(!firstActivation) {return;}

    getLogger().info("Extra settings did activate!");
    VerticalLayoutGroup* layout = BeatSaberUI::CreateVerticalLayoutGroup(get_rectTransform());
    layout->set_padding(UnityEngine::RectOffset::New_ctor(2, 2, 2, 2));
    layout->GetComponent<LayoutElement*>()->set_preferredWidth(90.0);
    layout->get_gameObject()->AddComponent<QuestUI::Backgroundable*>()->ApplyBackground(il2cpp_utils::createcsstr("round-rect-panel"));

    BeatSaberUI::CreateToggle(layout->get_rectTransform(), "Show text on bailout", getConfig().config["showTextOnBailout"].GetBool(), il2cpp_utils::MakeDelegate<UnityAction_1<bool>*>(
        classof(UnityAction_1<bool>*), (Il2CppObject*) nullptr, onShowTextOnBailoutChange
    ));

    BeatSaberUI::CreateIncrementSetting(layout->get_rectTransform(), "Bailout Text Disappear Time (seconds)", 1, 0.1, getConfig().config["bailoutTextDisappearTime"].GetFloat(), 0.1, 20,
        il2cpp_utils::MakeDelegate<UnityAction_1<float>*>(
            classof(UnityAction_1<float>*), (Il2CppObject*) nullptr, onBailoutTextDisappearTimeChange
        )
    );

    BeatSaberUI::CreateIncrementSetting(layout->get_rectTransform(), "Text Size (default 14)", 1, 0.5, getConfig().config["textSize"].GetFloat(), 1, 20,
        il2cpp_utils::MakeDelegate<UnityAction_1<float>*>(
            classof(UnityAction_1<float>*), (Il2CppObject*) nullptr, onTextSizeChange
        )
    );

    UnityEngine::GameObject* curseModeObj = BeatSaberUI::CreateToggle(layout->get_rectTransform(), "Cursed Mode", getConfig().config["cursedMode"].GetBool(), il2cpp_utils::MakeDelegate<UnityAction_1<bool>*>(
        classof(UnityAction_1<bool>*), (Il2CppObject*) nullptr, onCursedModeChange
    ))->get_gameObject();

    BeatSaberUI::AddHoverHint(curseModeObj, "I guess you'll have to find out");
}

void ExtraSettingsViewController::DidDeactivate(bool removedFromHierarchy, bool systemScreenDisabling) {
    getLogger().info("Saving config on DidDeactivate");
    getConfig().Write();
}