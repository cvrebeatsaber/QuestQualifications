#include "web-requestor.hpp"
#include "logging.hpp"
#include "submission-packet.hpp"
#include "webutil.hpp"
#include "manager.hpp"

#define url "https://cvrescores.herokuapp.com/api/scores/submit"

std::string WebRequestor::SubmitScore(bool& outBool, CVRE::Manager* instance, GlobalNamespace::LevelCompletionResults* results, std::string_view pin, GlobalNamespace::GameplayCoreSceneSetupData* map) {
    if (results->levelEndStateType != GlobalNamespace::LevelCompletionResults::LevelEndStateType::Cleared) {
        getLogger().debug("PIN: %s did not clear the level.", pin.data());
        return "Did not clear level!";
    }
    getLogger().debug("Uploading score for: %s", pin.data());
    SubmissionPacket packet(results, pin, map);
    packet.Serialize();
    std::string resp;
    auto responseCode = WebUtil::Post(url, packet.ToJson(), resp);
    if (responseCode == 200) {
        getLogger().debug("Success!");
        outBool = true;
        return "Score submitted successfully!";
    }
    else if (responseCode == 403) {
        getLogger().debug("Lets assume that this was because of an invalid PIN!");
        getLogger().debug("Response failed with response: %s", resp.c_str());
        instance->invalidPin();
    } else {
        getLogger().debug("Score submission failed!");
        getLogger().debug("Response: %s", resp.c_str());
    }
    outBool = false;
    return "Submitting Score...";
}