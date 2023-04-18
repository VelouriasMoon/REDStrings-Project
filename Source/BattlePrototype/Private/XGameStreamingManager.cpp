#include "XGameStreamingManager.h"

void UXGameStreamingManager::SetNonSkipEventFlag(bool Flag) {
}

void UXGameStreamingManager::SetFixedLayout(ETouchControlLayout layout, float sec) {
}

void UXGameStreamingManager::SetEventPauseFlag(bool Flag) {
}

bool UXGameStreamingManager::IsStreaming() {
    return false;
}

UXGameStreamingManager::UXGameStreamingManager() {
    this->_gameInstance = NULL;
}

