#include "HitBitComponent.h"

class AActor;

bool UHitBitComponent::IsHit(int32 HitBit) const {
    return false;
}

int32 UHitBitComponent::CalcDamageHitBit(AActor* Actor) {
    return 0;
}

int32 UHitBitComponent::CalcAttackHitBit(const FHCCollisionCommonInfo& commonInfo) {
    return 0;
}

UHitBitComponent::UHitBitComponent() {
    this->_bAutoInitHitBit = true;
}

