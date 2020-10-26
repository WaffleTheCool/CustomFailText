#include "main.hpp"

using namespace GlobalNamespace;
using namespace TMPro;

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
        messagesArray.PushBack(rapidjson::Value().SetString("<EDIT>\n<CONFIG>"), allocator);
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

// Chooses a random string from the given list in the config
std::string findRandomFromConfigList(std::string listName)    {
    rapidjson::GenericArray list = getConfig().config[listName].GetArray();
    int index = rand() % list.Size(); // Find a random index

    return list[index].GetString();
}

MAKE_HOOK_OFFSETLESS(LevelFailedTextEffect_ShowEffect, void, LevelFailedTextEffect* self)    {
    getLogger().info("Setting level failed text . . .");
    TextMeshPro* textMesh = self->GetComponent<TextMeshPro*>();
    
    std::string failMessage = findRandomFromConfigList("loseMessages");
    textMesh->SetText(il2cpp_utils::createcsstr(failMessage));
    textMesh->set_overflowMode(TextOverflowModes::Overflow);
    textMesh->set_enableWordWrapping(false);
    getLogger().info("Text set successfully!");

    LevelFailedTextEffect_ShowEffect(self);
}

static ModInfo modInfo;
Configuration& getConfig() {
    static Configuration config(modInfo);
    config.Load();
    return config;
}

const Logger& getLogger() {
    static const Logger logger(modInfo);
    return logger;
}

extern "C" void setup(ModInfo& info) {
    info.id = "custom-fail-text";
    info.version = "0.1.3";
    modInfo = info;
    getLogger().info("Modloader name: %s", Modloader::getInfo().name.c_str());
    getConfig().Load();
    getLogger().info("Completed setup!");
}

// Installs function hooks and makes sure that the config file has been updated
extern "C" void load() {
    createConfig(); // Add any missing values to the config

    getLogger().info("Installing hooks...");
    //il2cpp_functions::Init();
    //custom_types::Init();
    //custom_types::RegisterType<CustomFailTextViewController*>()

    INSTALL_HOOK_OFFSETLESS(LevelFailedTextEffect_ShowEffect, il2cpp_utils::FindMethodUnsafe("", "LevelFailedTextEffect", "ShowEffect", 0));
    getLogger().info("Installed all hooks!");
}