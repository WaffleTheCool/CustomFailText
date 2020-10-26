#include "CustomFailTextViewController.hpp"

#include "questui/shared/BeatSaberUI.hpp"
#include "questui/shared/CustomTypes/Components/Backgroundable.hpp"

#include "UnityEngine/Vector2.hpp"
#include "UnityEngine/Events/UnityAction.hpp"

#include <string>
#include <string_view>
#include <set>

#include "TextRowData.hpp"
#include "main.hpp"

using namespace CustomFailText;
using namespace QuestUI;

DEFINE_CLASS(CustomFailTextViewController);
DEFINE_CLASS(TextRowData);

static std::set<TextRowData*> currentRows;

// Called when the user presses the delete button for one fail message in the UI
void onDeleteButtonPress(TextRowData* data)    {
    // Destroy both the string setting and the delete button
    UnityEngine::Object::Destroy(data->deleteButton);
    UnityEngine::Object::Destroy(data->messageSetting);
    currentRows.erase(data); // Remove the message from our set
}

void onTextChange(TextRowData* data, Il2CppString* newValue)    {

}

void CustomFailTextViewController::DidActivate(bool firstActivation, HMUI::ViewController::ActivationType activationType)    {
    if(activationType == HMUI::ViewController::ActivationType::AddedToHierarchy && firstActivation) {   

        UnityEngine::UI::HorizontalLayoutGroup* mainLayout = QuestUI::BeatSaberUI::CreateHorizontalLayoutGroup(get_rectTransform());

        UnityEngine::UI::VerticalLayoutGroup* messageEditLayout = QuestUI::BeatSaberUI::CreateVerticalLayoutGroup(mainLayout->get_rectTransform());
        UnityEngine::UI::VerticalLayoutGroup* messageDeleteButtonLayout = QuestUI::BeatSaberUI::CreateVerticalLayoutGroup(mainLayout->get_rectTransform());

        rapidjson::GenericArray loseMessages = getConfig().config["loseMessages"].GetArray();
        for(rapidjson::Value& value : loseMessages) {
            std::string message = value.GetString();

            TextRowData* rowData = CRASH_UNLESS(il2cpp_utils::New<TextRowData*>());

            auto textChangeAction = il2cpp_utils::MakeAction<UnityEngine::Events::UnityAction_1<Il2CppString*>>(
                il2cpp_functions::class_get_type(classof(UnityEngine::Events::UnityAction_1<Il2CppString*>*)), 
                rowData, onTextChange);

            auto deleteButtonPressAction = il2cpp_utils::MakeAction<UnityEngine::Events::UnityAction>(
                il2cpp_functions::class_get_type(classof(UnityEngine::Events::UnityAction*)),
                rowData, onDeleteButtonPress);
            
            rowData->messageSetting = BeatSaberUI::CreateStringSetting(messageEditLayout->get_rectTransform(), "", message, textChangeAction);
            rowData->deleteButton = BeatSaberUI::CreateUIButton(messageDeleteButtonLayout->get_rectTransform(), "OkButton", deleteButtonPressAction, "Delete", nullptr);
            currentRows.insert(rowData);
        }
    }
}

// Upon deactivation, we sabe all messages in the UI back to the config
void CustomFailTextViewController::DidDeactivate(HMUI::ViewController::DeactivationType deactivationType)    {
    rapidjson::Document::AllocatorType& allocator = getConfig().config.GetAllocator();
    rapidjson::Value messagesArray(rapidjson::kArrayType);

    // Loop through each row in the UI
    for(TextRowData* row : currentRows) {
        Il2CppString* value = row->messageSetting->CurrentValue;
        std::string cppValue = to_utf8(csstrtostr(value));
        // Add each message to the array
        messagesArray.PushBack(rapidjson::Value().SetString(cppValue.c_str(), cppValue.length()), allocator);
    }

    // Set the array in the config and write it to disk
    getConfig().config["loseMessages"] = messagesArray;
    getConfig().Write();
}