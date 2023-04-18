#include "BlownAwayComponent.h"

class AActor;
class UBlownAwayComponent;

void UBlownAwayComponent::SetIsBlowOnDamage(bool blowEnable) {
}

UBlownAwayComponent* UBlownAwayComponent::GetBlownAwayComponentFromActor(AActor* Actor) {
    return NULL;
}

FVector UBlownAwayComponent::GetBlowImpulse(const AActor* attackActor, FRotator blowAngle, float blowPower) const {
    return FVector{};
}

void UBlownAwayComponent::AddDamageBlowImpulse(const FHCHitResult& HitResult, bool IsGuard) {
}

UBlownAwayComponent::UBlownAwayComponent() {
    this->_isBlowOnDamage = true;
    this->_guardBlowPowerRate = 0.50f;
}

