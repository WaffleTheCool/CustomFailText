#include "CustomFailTextViewController.hpp"

#include "questui/shared/BeatSaberUI.hpp"
#include "questui/shared/CustomTypes/Components/Backgroundable.hpp"

#include "UnityEngine/Vector2.hpp"
#include "UnityEngine/Events/UnityAction.hpp"
#include "UnityEngine/Transform.hpp"

#include <string>
#include <string_view>
#include <vector>

#include "MessageSection.hpp"
#include "main.hpp"

using namespace CustomFailText;
using namespace QuestUI;

DEFINE_CLASS(CustomFailTextViewController);

const char* defaultMessage = "REPLACE THIS";

// Add a new message when the user presses the button
void onAddMessageButtonClick(CustomFailTextViewController* self)    {
    self->AddMessage(il2cpp_utils::createcsstr(defaultMessage));
}

void CustomFailTextViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling)    {
    if(addedToHierarchy && firstActivation) {   
        getLogger().info("Initialising UI . . .");

        // Create a layout for storing our list of messages
        UnityEngine::UI::VerticalLayoutGroup* mainLayout = QuestUI::BeatSaberUI::CreateVerticalLayoutGroup(get_rectTransform());
        
        // Make an action for when the add message button is pressed
        auto addMessageButtonClickAction = il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction*>(
                classof(UnityEngine::Events::UnityAction*),
                this, onAddMessageButtonClick);

        // Button to add a new message
        UnityEngine::UI::Button* addMessageButton = QuestUI::BeatSaberUI::CreateUIButton(mainLayout->get_rectTransform(), "Add Message", "OkButton", addMessageButtonClickAction);

        this->messagesLayout = QuestUI::BeatSaberUI::CreateHorizontalLayoutGroup(mainLayout->get_rectTransform());
        messagesLayout->set_spacing(10.0f);

        getLogger().info("Layouts created");

        this->messages = List<MessageSection*>::New_ctor();
        // Loop through each create each row
        getLogger().info("Creating rows . . .");
        rapidjson::GenericArray loseMessages = getConfig().config["loseMessages"].GetArray();
        for(rapidjson::Value& value : loseMessages) {
            std::string message = value.GetString();

            // Add a message section for each
            this->AddMessage(il2cpp_utils::createcsstr(message));
            getLogger().info("Created fail row with message \"" + message + "\"");
        }
    }
}

// Adds a new message layout to the UI
void CustomFailTextViewController::AddMessage(Il2CppString* message)    {
    MessageSection* section = CRASH_UNLESS(il2cpp_utils::New<MessageSection*>(messagesLayout->get_rectTransform(), message));
    messages->Add(section);
}

// Removes all the different UI components in the children of this transform
// Useful for removing a full message panel
void removeAllChildren(UnityEngine::Transform* transform)   {
    Array<UnityEngine::Transform*>* children =  transform->GetComponentsInChildren<UnityEngine::Transform*>();

    for(int i = 0; i < children->Length(); i++)   {
        UnityEngine::Object::Destroy(children->values[i]->get_gameObject());
    }
}

// Upon deactivation, we sabe all messages in the UI back to the config
void CustomFailTextViewController::DidDeactivate(bool removedFromHierarchy, bool systemScreenDisabling)    {
    getLogger().info("Saving messages . . .");
    rapidjson::Document::AllocatorType& allocator = getConfig().config.GetAllocator();
    rapidjson::Value messagesArray(rapidjson::kArrayType);

    // Loop through each row in the UI
    for(int i = 0; i < messages->size; i++) {
        MessageSection* section = messages->get_Item(i);
        if(!section) {continue;} // Skip if this section has been removed

        std::string result;
        // Loop through each line of each message
        for(int j = 0; j < section->lines->size; j++)    {
            HMUI::InputFieldView* line = section->lines->get_Item(j);

            // Find the text of this line
            std::string text = to_utf8(csstrtostr(line->text));

            if(result != "" && text != "") {text = "\n" + text;}
            result += text;
        }

        // Remove this tab if it was completely empty
        if(result == "") {
            messages->set_Item(i, nullptr); // Set this index to a nullptr to indicate it's been removed
            getLogger().info("Removing section . . .");
            removeAllChildren(section->layout->get_transform());
            continue;
        }
        getLogger().info("Adding fail message \"" + result + "\"");
        // Add each message to the array
        messagesArray.PushBack(rapidjson::Value().SetString(result, allocator), allocator);
    }

    // If there aren't any messages added, add a default one to avoid crashes
    if(messagesArray.Size() == 0) {
        AddMessage(il2cpp_utils::createcsstr(defaultMessage));
        messagesArray.PushBack(rapidjson::Value().SetString(defaultMessage, allocator), allocator);
    }

    // Set the array in the config and write it to disk
    getConfig().config["loseMessages"] = messagesArray;
    getConfig().Write();
}