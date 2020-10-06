#include "waitCoro.hpp"
#include "logging.hpp"

DEFINE_CLASS(CVRE::WaitFor);

void CVRE::WaitFor::Update() {
    if (complete) {
        return;
    }
    if (counter >= maxCount) {
        complete = true;
        counter = 0;
        getLogger().debug("Completed: %u frames! WaitFor complete!", maxCount);
        callback->Invoke(this);
    } else {
        counter++;
    }
}