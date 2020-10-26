#include <unordered_set>
#include <string>

#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/logging.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-functions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/config/config-utils.hpp"

#include "modloader/shared/modloader.hpp"

static ModInfo modInfo;
static Configuration& getConfig() {
    static Configuration config(modInfo);
    config.Load();
    return config;
}

static const Logger& getLogger() {
    static const Logger logger(modInfo);
    return logger;
}

// Adds the list of level fail messages to the config file
void createConfig() {
    if(!getConfig().config.HasMember("loseMessages"))   {
        getLogger().info("Creating config file . . .");
        getConfig().config.RemoveAllMembers();
        getConfig().config.SetObject();

        // Make a rapidjson array to store our messages
        rapidjson::Document::AllocatorType& allocator = getConfig().config.GetAllocator();
        rapidjson::Value messagesArray(rapidjson::kArrayType);
        // The default message should tell the user to edit the config
        messagesArray.PushBack(rapidjson::Value().SetString("REPLACE THIS"), allocator);
        getConfig().config.AddMember("loseMessages", messagesArray, allocator);

        getConfig().Write();
        if(fileexists("sdcard/Android/data/com.beatgames.beatsaber/files/mod_cfgs/custom-fail-text.json")) {
            getLogger().info("Config was successfully created");
        }   else    {
            getLogger().warning("Failed to create config");
        }
    }   else    {
        getLogger().info("Config file already exists.");
    }
    
}

// Chooses a random "level failed" message from the config
const char* getFailMessage()    {
    rapidjson::GenericArray messages = getConfig().config["loseMessages"].GetArray();
    int index = rand() % messages.Size(); // Find a random index

    return messages[index].GetString();
}

MAKE_HOOK_OFFSETLESS(LevelFailedTextEffect_ShowEffect, void, Il2CppObject* self)    {
    getLogger().info("Setting level failed text . . .");
    Il2CppObject* textMesh = CRASH_UNLESS(il2cpp_utils::RunMethodUnsafe<Il2CppObject*>(self, "GetComponent", il2cpp_utils::GetSystemType("TMPro", "TextMeshPro")));
    CRASH_UNLESS(il2cpp_utils::SetFieldValue(textMesh, "m_text", il2cpp_utils::createcsstr(getFailMessage())));
    CRASH_UNLESS(il2cpp_utils::SetFieldValue(textMesh, "m_overflowMode", 0)); // 0 = TextOverflowModes::Overflow
    CRASH_UNLESS(il2cpp_utils::SetFieldValue(textMesh, "m_enableWordWrapping", false));
    getLogger().info("Text set successfully!");

    LevelFailedTextEffect_ShowEffect(self);
}

extern "C" void setup(ModInfo& info) {
    info.id = "custom-fail-text";
    info.version = "0.1.0";
    modInfo = info;
    getLogger().info("Modloader name: %s", Modloader::getInfo().name.c_str());

    // Create the default config file
    getConfig().Load();
    createConfig();

    getLogger().info("Completed setup!");
}

extern "C" void load() {
    getLogger().info("Installing hooks...");
    il2cpp_functions::Init();
    // Install our hooks
    INSTALL_HOOK_OFFSETLESS(LevelFailedTextEffect_ShowEffect, il2cpp_utils::FindMethodUnsafe("", "LevelFailedTextEffect", "ShowEffect", 0));
    getLogger().info("Installed all hooks!");
}