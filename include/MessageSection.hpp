#pragma once

#include "custom-types/shared/macros.hpp"
#include "main.hpp"

using namespace System::Collections::Generic;

DECLARE_CLASS_CODEGEN(CustomFailText, MessageSection, Il2CppObject,
    DECLARE_INSTANCE_FIELD(Il2CppObject*, parent);
    // Store each line in the message, as well as the layout they are in
    DECLARE_INSTANCE_FIELD(List<Il2CppObject*>*, lines);
    DECLARE_INSTANCE_FIELD(UnityEngine::UI::VerticalLayoutGroup*, linesLayout);
    DECLARE_INSTANCE_FIELD(UnityEngine::UI::VerticalLayoutGroup*, layout);
    DECLARE_INSTANCE_FIELD(UnityEngine::GameObject*, addLineButtonObj);

    // Methods for adding a line, and a simple constructor
    DECLARE_INSTANCE_METHOD(void, AddLine, Il2CppString* line);
    DECLARE_INSTANCE_METHOD(void, CheckLineCount); // Shows or hides the add line button depending on the line count

    DECLARE_CTOR(ctor, Il2CppObject* parent, UnityEngine::RectTransform* parentTransform, Il2CppString* message);
)

// Used to pass parameters to when one of the lines of text changes
DECLARE_CLASS_CODEGEN(CustomFailText, TextLineData, Il2CppObject,
    DECLARE_INSTANCE_FIELD(UnityEngine::RectTransform*, transform);
    DECLARE_INSTANCE_FIELD(MessageSection*, message);
    DECLARE_INSTANCE_FIELD(HMUI::InputFieldView*, lineSetting);
)