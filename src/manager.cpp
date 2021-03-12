#include "System/Action.hpp"
#include "System/Action_1.hpp"
#include "GlobalNamespace/GameplayModifiers.hpp"
#include "GlobalNamespace/IDifficultyBeatmapSet.hpp"
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
#include "GlobalNamespace/PlayerSpecificSettings.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "manager.hpp"
#include "questui/shared/BeatSaberUI.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-functions.hpp"
#include "waitCoro.hpp"
#include "util.hpp"
#include "logging.hpp"
#include "submission-packet.hpp"
#include "web-requestor.hpp"
#include "packet.hpp"
#include <fstream>
#include <chrono>

DEFINE_CLASS(CVRE::Manager);

inline TournamentAssistantShared::Models::Characteristic* CreateCharacteristic(GlobalNamespace::IDifficultyBeatmap* level) {
    // Create characteristic
    auto* characteristic = new TournamentAssistantShared::Models::Characteristic();
    auto* parentBeatmapSet = CRASH_UNLESS(il2cpp_utils::RunMethod(level, "get_parentDifficultyBeatmapSet"));
    auto* beatmapChar = CRASH_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapCharacteristicSO*>(parentBeatmapSet, "get_beatmapCharacteristic"));

    characteristic->set_serialized_name(to_utf8(csstrtostr(beatmapChar->get_serializedName())));
    auto* arr = CRASH_UNLESS(il2cpp_utils::RunMethod<Array<GlobalNamespace::IDifficultyBeatmap*>*>(parentBeatmapSet, "get_difficultyBeatmaps"));

    for (int i = 0; i < arr->Length(); i++) {
        auto innerDiffRank = CRASH_UNLESS(il2cpp_utils::RunMethod<int>(arr->values[i], "get_difficultyRank"));
        characteristic->add_difficulties((TournamentAssistantShared::Models::BeatmapDifficulty)innerDiffRank);
    }
    return characteristic;
}

inline TournamentAssistantShared::Models::GameplayModifiers* CreateModifiers(GlobalNamespace::GameplayModifiers* params) {
    // Create gameplay modifiers
    auto* modifiers = new TournamentAssistantShared::Models::GameplayModifiers();
    int val = 0;
    val |= params->get_noFailOn0Energy() ? 1 : 0;
    val |= params->get_noBombs() ? 2 : 0;
    val |= params->get_noArrows() ? 4 : 0;
    val |= params->get_enabledObstacleType() == GlobalNamespace::GameplayModifiers::EnabledObstacleType::NoObstacles ? 8 : 0;
    val |= params->get_songSpeed() == GlobalNamespace::GameplayModifiers::SongSpeed::Slower ? 16 : 0;
    val |= params->get_instaFail() ? 32 : 0;
    val |= params->get_failOnSaberClash() ? 64 : 0;
    val |= params->get_energyType() == GlobalNamespace::GameplayModifiers::EnergyType::Battery ? 128 : 0;
    val |= params->get_fastNotes() ? 256 : 0;
    val |= params->get_songSpeed() == GlobalNamespace::GameplayModifiers::SongSpeed::Faster ? 512 : 0;
    val |= params->get_disappearingArrows() ? 1024 : 0;
    val |= params->get_ghostNotes() ? 2048 : 0;
    val |= params->get_demoNoFail() ? 4096 : 0;
    val |= params->get_demoNoObstacles() ? 8192 : 0;
    val |= params->get_strictAngles() ? 16384 : 0;
    modifiers->set_options((TournamentAssistantShared::Models::GameplayModifiers_GameOptions)val);
    return modifiers;
}

inline TournamentAssistantShared::Models::PlayerSpecificSettings* CreatePlayerSettings(GlobalNamespace::PlayerSpecificSettings* settings) {
    // Create player settings
    auto* outp = new TournamentAssistantShared::Models::PlayerSpecificSettings();
    outp->set_note_jump_start_beat_offset(settings->get_noteJumpStartBeatOffset());
    outp->set_player_height(settings->get_playerHeight());
    outp->set_saber_trail_intensity(settings->get_saberTrailIntensity());
    outp->set_sfx_volume(settings->get_sfxVolume());
    int val = 0;
    val |= settings->get_leftHanded() ? 1 : 0;
    val |= settings->get_staticLights() ? 2 : 0;
    val |= settings->get_noTextsAndHuds() ? 4 : 0;
    val |= settings->get_advancedHud() ? 8 : 0;
    val |= settings->get_reduceDebris() ? 16 : 0;
    val |= settings->get_automaticPlayerHeight() ? 32 : 0;
    val |= settings->get_noFailEffects() ? 64 : 0;
    val |= settings->get_autoRestart() ? 128 : 0;
    val |= settings->get_hideNoteSpawnEffect() ? 256 : 0;
    val |= settings->get_adaptiveSfx() ? 512 : 0;
    outp->set_options((TournamentAssistantShared::Models::PlayerSpecificSettings_PlayerOptions)val);
    return outp;
}

void CVRE::Manager::submitScore() {
    getLogger().info("Attempting to submit score to CVRE Score Server!");
    SubmissionPacket packet(wrappedResults, "", gameplayCoreSceneSetupData);
    packet.Serialize();
    auto secret = Util::ReadSecret();
    if (!secret) {
        if (notificationBox) {
            notificationBox->DisplayNotification("Installation invalid! Contact Sc2ad#8836 on Discord ASAP!");
        }
        getLogger().critical("Secret could not be read!");
        return;
    }
    // TODO: Ensure ResultsViewController exists here
    
    // TODO: SUBMIT PACKET TO SPECIFIC EVENT ID HERE
    auto* subScore = new TournamentAssistantShared::Models::Packets::SubmitScore();
    auto* scoreM = new TournamentAssistantShared::Models::Score();
    scoreM->set_score(wrappedResults->modifiedScore);
    scoreM->set_color("#ffffff");
    scoreM->set_full_combo(wrappedResults->fullCombo);
    // CVRE: b69ce5f6-f5f2-4865-aa8d-f50a9dfa9b6f
    // TEST: f86bff90-9cf7-460d-a2ef-87b1b1c5db44
    scoreM->set_event_id("b69ce5f6-f5f2-4865-aa8d-f50a9dfa9b6f");
    auto* params = new TournamentAssistantShared::Models::GameplayParameters();
    // Create beatmap
    auto* beatmap = new TournamentAssistantShared::Models::Beatmap();
    auto* difficultyBeatmap = gameplayCoreSceneSetupData->difficultyBeatmap;
    auto* level = CRASH_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IPreviewBeatmapLevel*>(difficultyBeatmap, "get_level"));
    auto* id = CRASH_UNLESS(il2cpp_utils::RunMethod<Il2CppString*>(level, "get_levelID"));
    auto* name = CRASH_UNLESS(il2cpp_utils::RunMethod<Il2CppString*>(level, "get_songName"));
    beatmap->set_name(to_utf8(csstrtostr(name)));
    beatmap->set_level_id(to_utf8(csstrtostr(id)));
    auto diffRank = CRASH_UNLESS(il2cpp_utils::RunMethod<int>(difficultyBeatmap, "get_difficultyRank"));
    beatmap->set_difficulty((TournamentAssistantShared::Models::BeatmapDifficulty)diffRank);
    
    auto* characteristic = CreateCharacteristic(difficultyBeatmap);
    beatmap->set_allocated_characteristic(characteristic);
    params->set_allocated_beatmap(beatmap);

    auto* modifiers = CreateModifiers(wrappedResults->gameplayModifiers);
    params->set_allocated_gameplay_modifiers(modifiers);

    auto* playerSettings = CreatePlayerSettings(gameplayCoreSceneSetupData->playerSpecificSettings);
    params->set_allocated_player_settings(playerSettings);
    scoreM->set_allocated_parameters(params);
    // Read user ID, cache and place here
    auto userId = Util::ReadUID();
    if (!userId) {
        if (notificationBox) {
            notificationBox->DisplayNotification("Missing user ID file! Download it from BeatKhana and try again!");
        }
        getLogger().critical("Could not read user ID!");
    }
    scoreM->set_user_id(*userId);
    // Either read username from C# call, or just arbitrarily determine.
    scoreM->set_username(*userId);
    subScore->set_allocated_score(scoreM);
    TournamentAssistantShared::Models::Packet pkt(TournamentAssistantShared::Models::PacketType::SubmitScore, subScore);

    auto pktDir = Util::GetPacketDir();
    auto path = string_format(pktDir + "packet_%s_%u_%s_%u.dat", to_utf8(csstrtostr(name)).c_str(), wrappedResults->modifiedScore, userId->c_str(), packet.timestamp);
    std::ofstream outputStream(path.c_str(), std::ios::binary);
    if (!outputStream.is_open()) {
        getLogger().error("Could not open output stream! location: %s", path.c_str());
    } else {
        pkt.ToBytes(outputStream);
        outputStream.close();
        getLogger().debug("Wrote packet to file: %s", path.c_str());
    }
}

void CVRE::Manager::toDestroy(CVRE::WaitFor* instance) {
    // Destroy instance, caller cleanup.
    UnityEngine::Object::Destroy(instance->get_gameObject());
    UnityEngine::Object::Destroy(instance);
    // We should also destroy CVRE::Manager here
}

void CVRE::Manager::invalidPinWaitOver(CVRE::WaitFor* instance) {
    submitScore();
    // Destroy instance, caller cleanup.
    UnityEngine::Object::Destroy(instance->get_gameObject());
    UnityEngine::Object::Destroy(instance);
}

void CVRE::Manager::invalidPin() {
    getLogger().debug("Invalid PIN!");
    if (notificationBox) {
        notificationBox->DisplayNotification("Invalid PIN!");
    }
    // Create wait coro
    auto* go = UnityEngine::GameObject::New_ctor();
    auto* instance = reinterpret_cast<CVRE::WaitFor*>(go->AddComponent(csTypeOf(CVRE::WaitFor*)));
    instance->callback = reinterpret_cast<System::Action_1<System::Object*>*>(RET_V_UNLESS(getLogger(), 
        il2cpp_utils::MakeDelegate(il2cpp_functions::class_get_type(classof(System::Action_1<System::Object*>*)), this, +[](CVRE::Manager* self, System::Object* instance) {
            self->invalidPinWaitOver(reinterpret_cast<CVRE::WaitFor*>(instance));
        })
    ));
}

void CVRE::Manager::continuePressed() {
    // From the manager, we have whatever context variables we want.
    // They are also all guaranteed to not have been GC'd
    // If we no longer need manager, we should destroy the gameobject we created with it.
    getLogger().debug("Continue pressed!");
    validModifiers = checkModifiers();
    if (validModifiers) {
        if (wrappedResults->levelEndStateType == GlobalNamespace::LevelCompletionResults::LevelEndStateType::Cleared) {
            if (notificationBox) {
                notificationBox->AddNotification("\nConfirmed that a valid CVRE score was completed!");
            }
            submitScore();
        }
    }
}

bool CVRE::Manager::checkModifiers() {
    getLogger().debug("Checking modifiers!");
    if (!wrappedResults || !wrappedResults->gameplayModifiers) {
        return false;
    }
    auto* gm = wrappedResults->gameplayModifiers;
    // True iff NF
    // TODO: Hackfix
    return gm->get_noFailOn0Energy() &&
            !gm->get_demoNoFail() &&
            !gm->get_demoNoObstacles() &&
            gm->get_energyType() == GlobalNamespace::GameplayModifiers::EnergyType::Bar &&
            !gm->get_instaFail() &&
            !gm->get_failOnSaberClash() &&
            gm->get_enabledObstacleType() == GlobalNamespace::GameplayModifiers::EnabledObstacleType::All &&
            !gm->get_noBombs() &&
            !gm->get_fastNotes() &&
            !gm->get_strictAngles() &&
            !gm->get_disappearingArrows() &&
            gm->get_songSpeed() == GlobalNamespace::GameplayModifiers::SongSpeed::Normal &&
            !gm->get_noArrows() &&
            !gm->get_ghostNotes();
}