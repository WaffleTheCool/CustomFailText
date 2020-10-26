#include "beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "custom-types/shared/macros.hpp"

#include "UnityEngine/UI/Button.hpp"

#include "questui/shared/CustomTypes/Components/Settings/StringSetting.hpp"

DECLARE_CLASS_CODEGEN(CustomFailText, TextRowData, Il2CppObject,
    DECLARE_INSTANCE_FIELD(UnityEngine::UI::Button*, deleteButton);
    DECLARE_INSTANCE_FIELD(QuestUI::StringSetting*, messageSetting);

    REGISTER_FUNCTION(TextRowData,
        REGISTER_FIELD(deleteButton);
        REGISTER_FIELD(messageSetting);
    )
)