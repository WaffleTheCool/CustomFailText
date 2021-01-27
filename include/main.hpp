#pragma once

#include <string>
#include "modloader/shared/modloader.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/logging.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-functions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/config/config-utils.hpp"

#include "GlobalNamespace/LevelFailedTextEffect.hpp"
#include "GlobalNamespace/StandardLevelDetailView.hpp"
#include "GlobalNamespace/StandardLevelGameplayManager.hpp"
#include "GlobalNamespace/GameEnergyCounter.hpp"
#include "GlobalNamespace/AudioTimeSyncController.hpp"
#include "TMPro/TextMeshPro.hpp"
#include "TMPro/TextMeshProUGUI.hpp"
#include "TMPro/TextOverflowModes.hpp"
#include "UnityEngine/UI/Button.hpp"
#include "UnityEngine/UI/Button.hpp"
#include "UnityEngine/Transform.hpp"
#include "UnityEngine/Resources.hpp"
#include "UnityEngine/Vector3.hpp"
#include "UnityEngine/MonoBehaviour.hpp"
#include "UnityEngine/Time.hpp"
#include "System/Action.hpp"

#include "custom-types/shared/register.hpp"
#include "questui/shared/QuestUI.hpp"
#include "questui/shared/BeatSaberUI.hpp"

#include "UnityEngine/Transform.hpp"
#include "UnityEngine/Object.hpp"

Configuration& getConfig();
Logger& getLogger();

// Removes all the different UI components in the children of this transform
// Useful for removing a large section of the UI
void removeAllChildren(UnityEngine::Transform* transform);

// Constants for limiting the number of messages/lines in the UI
const int UI_MESSAGE_LIMIT = 6;
const int MESSAGE_LINE_LIMIT = 3;
