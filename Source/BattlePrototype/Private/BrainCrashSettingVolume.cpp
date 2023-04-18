#include "BrainCrashSettingVolume.h"

FTransform ABrainCrashSettingVolume::GetTriggerTransformWS() const {
    return FTransform{};
}

void ABrainCrashSettingVolume::FitGroundTriggerTransform() {
}

ABrainCrashSettingVolume::ABrainCrashSettingVolume() {
    this->Priority = 0;
    this->bEnabled = true;
    this->bUnbound = false;
}

