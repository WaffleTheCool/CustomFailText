#include "MessageSection.hpp"

#include "UnityEngine/Events/UnityAction.hpp"
#include "UnityEngine/RectOffset.hpp"

#include "questui/shared/CustomTypes/Components/Backgroundable.hpp"

#include "SettingsViewController.hpp"
using namespace CustomFailText;

DEFINE_CLASS(MessageSection);
DEFINE_CLASS(TextLineData);

// Splits a string into a vector of strings by whenever splitCharacter is seen
std::vector<std::string> split(const std::string str, char splitCharacter) {
    std::vector<std::string> strings;
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(splitCharacter, end)) != std::string::npos) {
        end = str.find(splitCharacter, start);
        strings.push_back(str.substr(start, end - start));
    }
    return strings;
}

// Add a black line when the user presses the add line button
void onLineAddButtonClick(MessageSection* self)   {
    self->AddLine(il2cpp_utils::createcsstr(""));
}

void MessageSection::ctor(Il2CppObject* parent, UnityEngine::RectTransform* parentTransform, Il2CppString* messageCSharp) {
    this->parent = parent;
    
    // Create a layout for the whole section, then a layout for the lines
    this->layout = QuestUI::BeatSaberUI::CreateVerticalLayoutGroup(parentTransform);
    layout->set_padding(UnityEngine::RectOffset::New_ctor(1, 1, 1, 1));
    // Give it a nice panel background
    layout->get_gameObject()->AddComponent<QuestUI::Backgroundable*>()->ApplyBackground(il2cpp_utils::createcsstr("round-rect-panel"));

    this->linesLayout = QuestUI::BeatSaberUI::CreateVerticalLayoutGroup(layout->get_rectTransform());

    auto lineAddButtonClickAction = il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction*>(
                classof(UnityEngine::Events::UnityAction*),
                this, onLineAddButtonClick);

    UnityEngine::UI::HorizontalLayoutGroup* lineAddButtonLayout = QuestUI::BeatSaberUI::CreateHorizontalLayoutGroup(layout->get_rectTransform());
    this->addLineButtonObj = lineAddButtonLayout->get_gameObject();
    
    UnityEngine::UI::LayoutElement* addButtonElement = lineAddButtonLayout->GetComponent<UnityEngine::UI::LayoutElement*>();
    addButtonElement->set_preferredWidth(8.0);
    addButtonElement->set_preferredHeight(8.0);

    // Make a button to add additional lines of text
    QuestUI::BeatSaberUI::CreateUIButton(lineAddButtonLayout->get_rectTransform(), "Add Line", "OkButton", lineAddButtonClickAction);

    this->lines = List<Il2CppObject*>::New_ctor();
    // Add each line in the message
    std::string message = to_utf8(csstrtostr(messageCSharp));
    for(std::string line : split(message, '\n'))    {
        AddLine(il2cpp_utils::createcsstr(line));
    }

    // Add a blank line if this message has no lines
    if(lines->size == 0)    {
        AddLine(il2cpp_utils::createcsstr(""));
    }
}

void onLineTextChange(TextLineData* data, Il2CppString* newValue) {
    // Change the string to upper case
    std::string newValueString = to_utf8(csstrtostr(newValue));
    std::string result = "";
    for(char letter : newValueString)   {
        result += std::toupper(letter);
    }

    // Set the value back
    data->lineSetting->SetText(il2cpp_utils::createcsstr(result));
}

void onLineDeleteButtonPress(TextLineData* data)    {
    removeAllChildren(data->transform); // Remove this section of the UI
    data->message->lines->Remove(data); // Remove the line from the list

    data->message->CheckLineCount();

    int numberOfLines = data->message->lines->size;
    // Remove this whole message if there are no lines left
    if(numberOfLines == 0) {
        removeAllChildren(data->message->layout->get_rectTransform()); // Remove the UI section

        SettingsViewController* parent = reinterpret_cast<SettingsViewController*>(data->message->parent);
        parent->messages->Remove(data->message); // Remove the message from the list

        parent->CheckMessageCount();
    }
}

// Enables the line button if we have fewer than the limit of lines
void MessageSection::CheckLineCount()   {
    addLineButtonObj->SetActive(lines->size < MESSAGE_LINE_LIMIT);
}

// Adds a line to this fail message
void MessageSection::AddLine(Il2CppString* line)  {
    getLogger().info("Adding line to mesage section . . .");
    TextLineData* changeData = CRASH_UNLESS(il2cpp_utils::New<TextLineData*>());
    changeData->message = this;

    // Make a layout and store the transform in the line data
    UnityEngine::UI::HorizontalLayoutGroup* lineLayout = QuestUI::BeatSaberUI::CreateHorizontalLayoutGroup(linesLayout->get_rectTransform());
    changeData->transform = lineLayout->get_rectTransform();

    // Action for when the text changes
    auto textChangeAction = il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction_1<Il2CppString*>*>(
        classof(UnityEngine::Events::UnityAction_1<Il2CppString*>*), changeData, onLineTextChange);

    getLogger().info("Creating string setting . . .");
    // Make a string setting and add it to the list
    changeData->lineSetting = QuestUI::BeatSaberUI::CreateStringSetting(changeData->transform, "", to_utf8(csstrtostr(line)), textChangeAction);
    changeData->lineSetting->GetComponent<UnityEngine::UI::LayoutElement*>()->set_preferredWidth(30.0f);

    // Action for when the delete button is pressed
    auto buttonClickAction = il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction*>(
        classof(UnityEngine::Events::UnityAction*), changeData, onLineDeleteButtonPress);

    getLogger().info("Creating delete button . . .");
    // Make a button with a limited width
    UnityEngine::UI::Button* button = QuestUI::BeatSaberUI::CreateUIButton(changeData->transform, "Delete", buttonClickAction);
    button->GetComponent<UnityEngine::UI::LayoutElement*>()->set_preferredWidth(6.0f);

    lines->Add(changeData);
    CheckLineCount(); // Make sure to hide the add line button if we've reached the limit
}