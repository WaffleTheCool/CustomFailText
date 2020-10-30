#pragma once

#include <string>
#include "modloader/shared/modloader.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/logging.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-functions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/config/config-utils.hpp"

#include "codegen/include/UnityEngine/MonoBehaviour.hpp"
#include "codegen/include/GlobalNamespace/LevelFailedTextEffect.hpp"
#include "codegen/include/GlobalNamespace/StandardLevelDetailView.hpp"
#include "codegen/include/TMPro/TextMeshPro.hpp"
#include "codegen/include/TMPro/TextMeshProUGUI.hpp"
#include "codegen/include/TMPro/TextOverflowModes.hpp"
#include "codegen/include/UnityEngine/UI/Button.hpp"
#include "codegen/include/UnityEngine/UI/Button.hpp"
#include "codegen/include/UnityEngine/Transform.hpp"

#include "custom-types/shared/register.hpp"
#include "questui/shared/QuestUI.hpp"
#include "questui/shared/BeatSaberUI.hpp"

#include "UnityEngine/Transform.hpp"
#include "UnityEngine/Object.hpp"

Configuration& getConfig();
const Logger& getLogger();

// Removes all the different UI components in the children of this transform
// Useful for removing a large section of the UI
void removeAllChildren(UnityEngine::Transform* transform);

// Constants for limiting the number of messages/lines in the UI
const int UI_MESSAGE_LIMIT = 6;
const int MESSAGE_LINE_LIMIT = 3;
