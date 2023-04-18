#include "BSPPortalBase.h"

class ABSPBlockVolume;

void ABSPPortalBase::SetDistanceFromPlayer(float Distance) {
}

float ABSPPortalBase::GetTotalAttenuationRate() const {
    return 0.0f;
}

void ABSPPortalBase::CheckAndSetUpdateID(int32 ID, bool& IsFirstTime) {
}

void ABSPPortalBase::AddNearVolume(ABSPBlockVolume* BlockVolume) {
}

ABSPPortalBase::ABSPPortalBase() {
    this->AttenuationBaseRate = 1.00f;
    this->DistanceAttenuationRate = 1.00f;
    this->TotalDistanceFromPlayer = -1.00f;
    this->OpenRate = 1.00f;
    this->UpdateID = 9876;
}

