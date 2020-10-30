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

        // Create a layout for storing our list of messages (inside a scroll view so we can fit as many as we want)
        UnityEngine::UI::VerticalLayoutGroup* mainLayout = QuestUI::BeatSaberUI::CreateVerticalLayoutGroup(get_rectTransform());

        // Make an action for when the add message button is pressed
        auto addMessageButtonClickAction = il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction*>(
                classof(UnityEngine::Events::UnityAction*),
                this, onAddMessageButtonClick);

        // Button to add a new message
        UnityEngine::UI::HorizontalLayoutGroup* addMesssageLayout = QuestUI::BeatSaberUI::CreateHorizontalLayoutGroup(mainLayout->get_rectTransform());
        UnityEngine::UI::LayoutElement* element = addMesssageLayout->GetComponent<UnityEngine::UI::LayoutElement*>();
        element->set_preferredWidth(8.0);
        element->set_preferredHeight(8.0);

        this->addMessageButton = QuestUI::BeatSaberUI::CreateUIButton(addMesssageLayout->get_rectTransform(), "Add Message", "OkButton", addMessageButtonClickAction);
        
        this->messagesLayout = QuestUI::BeatSaberUI::CreateGridLayoutGroup(mainLayout->get_rectTransform());
        messagesLayout->set_cellSize(UnityEngine::Vector2(60.0, 35.0));
        messagesLayout->set_constraint(UnityEngine::UI::GridLayoutGroup::Constraint::FixedColumnCount);
        messagesLayout->set_constraintCount(3);
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
    MessageSection* section = CRASH_UNLESS(il2cpp_utils::New<MessageSection*>(this, messagesLayout->get_rectTransform(), message));
    messages->Add(section);
    
    CheckMessageCount();
}

// Enables/Disables the "Add Message" button depending on if we've reached the message limit
void CustomFailTextViewController::CheckMessageCount()  {
    addMessageButton->get_gameObject()->SetActive(messages->size < UI_MESSAGE_LIMIT);
    // Add a generic message if there are no messages left
    if(messages->size == 0) {
        onAddMessageButtonClick(this);
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
            HMUI::InputFieldView* line = reinterpret_cast<TextLineData*>(section->lines->get_Item(j))->lineSetting;

            // Find the text of this line
            std::string text = to_utf8(csstrtostr(line->text));

            if(result != "" && text != "") {text = "\n" + text;}
            result += text;
        }

        getLogger().info("Adding fail message \"" + result + "\"");
        // Add each message to the array
        messagesArray.PushBack(rapidjson::Value().SetString(result, allocator), allocator);
    }

    // Set the array in the config and write it to disk
    getConfig().config["loseMessages"] = messagesArray;
    getConfig().Write();
}