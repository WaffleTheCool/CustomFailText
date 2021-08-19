#include "main.hpp"

using namespace GlobalNamespace;
using namespace TMPro;

#include "SettingsViewController.hpp"
#include "ExtraSettingsViewController.hpp"
#include "SettingsFlowCoordinator.hpp"
#include "MessageSection.hpp"

// Adds the list of level fail messages to the config file
void createConfig() {
    rapidjson::Document::AllocatorType& allocator = getConfig().config.GetAllocator();

    if(!getConfig().config.HasMember("loseMessages"))   {
        getLogger().info("Creating config file . . .");
        getConfig().config.RemoveAllMembers();
        getConfig().config.SetObject();

        // Make a rapidjson array to store our messages
        rapidjson::Value messagesArray(rapidjson::kArrayType);
        // The default message should tell the user to edit the config
        messagesArray.PushBack(rapidjson::Value().SetString("LEVEL\nFAILED"), allocator);
        getConfig().config.AddMember("loseMessages", messagesArray, allocator);

        if(fileexists("sdcard/Android/data/com.beatgames.beatsaber/files/mod_cfgs/custom-fail-text.json")) {
            getLogger().info("Config was successfully created");
        }   else    {
            getLogger().warning("Failed to create config");
        }
    }
    
    if(!getConfig().config.HasMember("showTextOnBailout")) { // This must be done separately since to allow upgrading configs from the old version without this setting
        getLogger().info("Updating config . . .");
        getConfig().config.AddMember("showTextOnBailout", false, allocator);
        getConfig().config.AddMember("bailoutTextDisappearTime", 3.0, allocator);
        getConfig().config.AddMember("textSize", 14.0, allocator);
        getConfig().config.AddMember("cursedMode", false, allocator);
    }

    getConfig().Write();
}

// Removes all GameObjects that are children of the given transform - useful for removing large parts of a UI
void removeAllChildren(UnityEngine::Transform* transform)   {
    Array<UnityEngine::Transform*>* children =  transform->GetComponentsInChildren<UnityEngine::Transform*>();

    for(int i = 0; i < children->Length(); i++)   {
        UnityEngine::Object::Destroy(children->values[i]->get_gameObject());
    }
}

// Chooses a random string from the given list in the config
std::string findRandomFromConfigList(std::string listName)    {
    rapidjson::GenericArray list = getConfig().config[listName].GetArray();
    int index = rand() % list.Size(); // Find a random index

    return list[index].GetString();
}

float getRandomCursedOffset() {
    float offset = (rand() % 1000) / 100.0f;
    if(rand() % 2 == 0) {
        offset *= -1.0f;
    }
    return offset;
}

// Creates a copy of the failed effect and shows it
bool preInstantiate = true; // Avoid recursively doing this!
void createEffectCopy(LevelFailedTextEffect* effect) {
    preInstantiate = false;
    UnityEngine::GameObject* copy = UnityEngine::GameObject::Instantiate(effect->get_gameObject());
    UnityEngine::Transform* transform = copy->get_transform();
    UnityEngine::Vector3 pos = transform->get_position();
    UnityEngine::Vector3 direction = UnityEngine::Random::get_insideUnitSphere();
    direction.Normalize();
    
    getLogger().info("Creating effect copy . . .");
    getLogger().info("Random direction: %f, %f, %f", direction.x, direction.y, direction.z);

    transform->set_rotation(UnityEngine::Quaternion::LookRotation(direction, UnityEngine::Vector3::get_up()));
    pos = pos + (direction * -15);
    pos.z -= 10.0f;

    transform->set_position(pos);

    copy->GetComponent<LevelFailedTextEffect*>()->ShowEffect();
    preInstantiate = true;
}

MAKE_HOOK_MATCH(LevelFailedTextEffect_ShowEffect, &LevelFailedTextEffect::ShowEffect, void, LevelFailedTextEffect* self)    {
    getLogger().info("Setting level failed text . . .");
    
    // Spawn a bunch of failed messages in the case of cursed mode
    if(getConfig().config["cursedMode"].GetBool() && preInstantiate)  { // Avoid recursively doing this!
        for(int i = 0; i < 200; i++) {
            createEffectCopy(self);
        }
    }

    LevelFailedTextEffect_ShowEffect(self);

    UnityEngine::Transform* textTransform = self->get_gameObject()->get_transform()->Find(il2cpp_utils::createcsstr("Text"));
    TextMeshPro* textMesh = textTransform->GetComponent<TextMeshPro*>();

    textTransform->get_gameObject()->set_active(true);

    getLogger().info("Text is enabled: %d", textMesh->get_enabled());
    getLogger().info("Text object is active: %d", textTransform->get_gameObject()->get_active());
    getLogger().info("Current text: %s", to_utf8(csstrtostr(textMesh->get_text())).c_str());
    std::string failMessage = findRandomFromConfigList("loseMessages");
    getLogger().info("Setting to %s", failMessage.c_str());

    textMesh->set_text(il2cpp_utils::createcsstr(failMessage));
    textMesh->set_fontSize(getConfig().config["textSize"].GetFloat());
    textMesh->set_overflowMode(TextOverflowModes::Overflow);
    textMesh->set_enableWordWrapping(false);

    getLogger().info("Text set successfully!");
}

// Show the LevelFailedTextEffect when we bail out if enabled
float energyCounterReachZeroTime = -1.0f;
void onEnergyDidReachZero() {
    energyCounterReachZeroTime = UnityEngine::Time::get_time();

    if(getConfig().config["showTextOnBailout"].GetBool()) {
        LevelFailedTextEffect* textEffect = UnityEngine::Resources::FindObjectsOfTypeAll<LevelFailedTextEffect*>()->values[0];
        textEffect->ShowEffect();
    }
}

// Add an event for whenever the energy reaches zero to allow us to show the text even if bailed out
MAKE_HOOK_MATCH(GameEnergyCounter_Start, &GameEnergyCounter::Start, void, GameEnergyCounter* self) {
    self->add_gameEnergyDidReach0Event(il2cpp_utils::MakeDelegate<System::Action*>(
        classof(System::Action*), (Il2CppObject*) nullptr, onEnergyDidReachZero
    ));

    GameEnergyCounter_Start(self);
}

MAKE_HOOK_MATCH(AudioTimeSyncController_Update, &AudioTimeSyncController::Update, void, AudioTimeSyncController* self) {
    float currentTime = UnityEngine::Time::get_time();
    // Check if it has been long enough to remove the text
    if(currentTime - energyCounterReachZeroTime > getConfig().config["bailoutTextDisappearTime"].GetFloat() && energyCounterReachZeroTime > 0) {
        UnityEngine::Resources::FindObjectsOfTypeAll<LevelFailedTextEffect*>()->values[0]->get_gameObject()->SetActive(false);
        energyCounterReachZeroTime = -1.0f; // Avoid removing it twice
    }

    AudioTimeSyncController_Update(self);
}

static ModInfo modInfo;
Configuration& getConfig() {
    static Configuration config(modInfo);
    config.Load();
    return config;
}

Logger& getLogger() {
    static Logger* logger = new Logger(modInfo);
    return *logger;
}

extern "C" void setup(ModInfo& info) {
    info.id = ID;
    info.version = VERSION;
    modInfo = info;
    getLogger().info("Modloader name: %s", Modloader::getInfo().name.c_str());
    getConfig().Load();
    getLogger().info("Completed setup!");
}

// Installs function hooks and makes sure that the config file has been updated
extern "C" void load() {
    createConfig(); // Add any missing values to the config

    getLogger().info("Installing hooks...");
    il2cpp_functions::Init();
    QuestUI::Init();

    // Register our mod settings menu
    custom_types::Register::AutoRegister();

    QuestUI::Register::RegisterModSettingsFlowCoordinator<CustomFailText::SettingsFlowCoordinator*>(modInfo);

    INSTALL_HOOK(getLogger(), LevelFailedTextEffect_ShowEffect);
    INSTALL_HOOK(getLogger(), GameEnergyCounter_Start);
    INSTALL_HOOK(getLogger(), AudioTimeSyncController_Update);
    getLogger().info("Installed all hooks!");
}