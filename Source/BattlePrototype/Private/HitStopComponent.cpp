#include "HitStopComponent.h"

class AActor;
class UHitStopComponent;

void UHitStopComponent::StartHitStopByType(HCRestictedHitStopType HitStopType, bool bCritical) {
}

void UHitStopComponent::StartHitStop(float HitStopSec, float actionSpeedRate) {
}

void UHitStopComponent::SetActiveHitStop(bool activeHitStop) {
}

UHitStopComponent* UHitStopComponent::GetHitStopComponent(AActor* Actor) {
    return NULL;
}

void UHitStopComponent::EndHitStop() {
}

UHitStopComponent::UHitStopComponent() {
    this->HitStopTime_Short = 0.10f;
    this->HitStopTime_Middle = 0.20f;
    this->HitStopTime_Large = 0.30f;
    this->HitStopTime_XLarge = 0.30f;
    this->HitStopTime_XXLarge = 0.30f;
    this->HitStopRate_Short = 0.05f;
    this->HitStopRate_Middle = 0.05f;
    this->HitStopRate_Large = 0.05f;
    this->HitStopRate_XLarge = 0.05f;
    this->HitStopRate_XXLarge = 0.05f;
    this->HitStopDelay = 0.00f;
}

