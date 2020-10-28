#pragma once

#include "custom-types/shared/macros.hpp"
#include "main.hpp"

using namespace System::Collections::Generic;

DECLARE_CLASS_CODEGEN(CustomFailText, MessageSection, Il2CppObject, 
    // Store each line in the message, as well as the layout they are in
    DECLARE_INSTANCE_FIELD(List<HMUI::InputFieldView*>*, lines);
    DECLARE_INSTANCE_FIELD(UnityEngine::UI::VerticalLayoutGroup*, linesLayout);
    DECLARE_INSTANCE_FIELD(UnityEngine::UI::VerticalLayoutGroup*, layout);

    // Methods for adding a line, and a simple constructor
    DECLARE_METHOD(void, AddLine, Il2CppString* line);

    DECLARE_CTOR(ctor, UnityEngine::RectTransform* parentTransform, Il2CppString* message);

    REGISTER_FUNCTION(MessageSection,
        REGISTER_FIELD(lines);
        REGISTER_FIELD(linesLayout);
        REGISTER_FIELD(layout);
        REGISTER_METHOD(AddLine);
        REGISTER_METHOD(ctor);
    )
)

// Used to pass parameters to when one of the lines of text changes
DECLARE_CLASS_CODEGEN(CustomFailText, LineTextChangeData, Il2CppObject,
    DECLARE_INSTANCE_FIELD(MessageSection*, message);
    DECLARE_INSTANCE_FIELD(HMUI::InputFieldView*, lineSetting);

    REGISTER_FUNCTION(LineTextChangeData,
        REGISTER_FIELD(message);
        REGISTER_FIELD(lineSetting);
    )
)