#pragma once

#include "UnityEngine/Sprite.hpp"
#include "TMPro/TextMeshProUGUI.hpp"
#include "HMUI/ViewController.hpp"
#include "System/Collections/Generic/List_1.hpp"

#include "custom-types/shared/macros.hpp"
#include "MessageSection.hpp"

#include "main.hpp"
#include <vector>

using namespace System::Collections::Generic;

DECLARE_CLASS_CODEGEN(CustomFailText, CustomFailTextViewController, HMUI::ViewController,
    DECLARE_INSTANCE_FIELD(UnityEngine::UI::GridLayoutGroup*, messagesLayout);
    DECLARE_INSTANCE_FIELD(List<CustomFailText::MessageSection*>*, messages);
    DECLARE_INSTANCE_FIELD(UnityEngine::UI::Button*, addMessageButton);

    DECLARE_OVERRIDE_METHOD(void, DidActivate, il2cpp_utils::FindMethodUnsafe("HMUI", "ViewController", "DidActivate", 3), bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    DECLARE_OVERRIDE_METHOD(void, DidDeactivate, il2cpp_utils::FindMethodUnsafe("HMUI", "ViewController", "DidDeactivate", 2), bool removedFromHierarchy, bool systemScreenDisabling);
    DECLARE_METHOD(void, AddMessage, Il2CppString* message);
    DECLARE_METHOD(void, CheckMessageCount); // Hides the add message button if we have reached the message limit
    
    REGISTER_FUNCTION(CustomFailTextViewController,
        REGISTER_FIELD(messagesLayout);
        REGISTER_FIELD(messages);
        REGISTER_FIELD(addMessageButton);
        REGISTER_METHOD(DidActivate);
        REGISTER_METHOD(DidDeactivate);
        REGISTER_METHOD(AddMessage);
    )
)

