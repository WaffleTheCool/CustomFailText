#include "MessageSection.hpp"

#include "UnityEngine/Events/UnityAction.hpp"
#include "UnityEngine/RectOffset.hpp"

#include "questui/shared/CustomTypes/Components/Backgroundable.hpp"

using namespace CustomFailText;

DEFINE_CLASS(MessageSection);
DEFINE_CLASS(LineTextChangeData);

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

void MessageSection::ctor(UnityEngine::RectTransform* parentTransform, Il2CppString* messageCSharp) {
    // Create a layout for the whole section, then a layout for the lines
    this->layout = QuestUI::BeatSaberUI::CreateVerticalLayoutGroup(parentTransform);
    layout->GetComponent<UnityEngine::UI::LayoutElement*>()->set_preferredHeight(70.0);
    layout->set_padding(UnityEngine::RectOffset::New_ctor(3, 3, 3, 3));

    // Make it have a nice panel background
    layout->get_gameObject()->AddComponent<QuestUI::Backgroundable*>()->ApplyBackground(il2cpp_utils::createcsstr("round-rect-panel"));

    this->linesLayout = QuestUI::BeatSaberUI::CreateVerticalLayoutGroup(layout->get_rectTransform());
    linesLayout->GetComponent<UnityEngine::UI::LayoutElement*>()->set_preferredHeight(55.0);

    auto lineAddButtonClickAction = il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction*>(
                classof(UnityEngine::Events::UnityAction*),
                this, onLineAddButtonClick);

    // Make a button to add additional lines of text
    QuestUI::BeatSaberUI::CreateUIButton(layout->get_rectTransform(), "Add Line", "OkButton", lineAddButtonClickAction);

    this->lines = List<HMUI::InputFieldView*>::New_ctor();
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

void onLineTextChange(LineTextChangeData* data, Il2CppString* newValue) {
    // Change the string to upper case
    std::string newValueString = to_utf8(csstrtostr(newValue));
    std::string result = "";
    for(char letter : newValueString)   {
        result += std::toupper(letter);
    }

    // Set the value back
    data->lineSetting->SetText(il2cpp_utils::createcsstr(result));
}

// Adds a line to this fail message
void MessageSection::AddLine(Il2CppString* line)  {
    LineTextChangeData* changeData = CRASH_UNLESS(il2cpp_utils::New<LineTextChangeData*>());
    changeData->message = this;

    // Action for when the text changes
    auto textChangeAction = il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction_1<Il2CppString*>*>(
        classof(UnityEngine::Events::UnityAction_1<Il2CppString*>*), changeData, onLineTextChange);

    // Make a string setting and add it to the list
    changeData->lineSetting = QuestUI::BeatSaberUI::CreateStringSetting(linesLayout->get_rectTransform(), "", to_utf8(csstrtostr(line)), textChangeAction);
    // Set the width
    changeData->lineSetting->GetComponent<UnityEngine::UI::LayoutElement*>()->set_preferredWidth(50.0f);

    lines->Add(changeData->lineSetting);
}