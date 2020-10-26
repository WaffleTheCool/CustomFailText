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

Configuration& getConfig();
const Logger& getLogger();