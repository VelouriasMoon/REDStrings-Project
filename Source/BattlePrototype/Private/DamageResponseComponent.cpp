#include "DamageResponseComponent.h"

int32 UDamageResponseComponent::OnDamageDirectAttack(bool bUseFixDamage, int32 fixDamage, const FHCHitResult& HitResult, bool isForceCritical) {
    return 0;
}

void UDamageResponseComponent::OnDamageAfter() {
}

int32 UDamageResponseComponent::OnDamageActorHit(const FHCHitResult& HitResult, bool IsGuard, bool isForceCritical, bool IsArmor, bool isRatio, bool isAccumurateRatio, bool isFixCalcCrash) {
    return 0;
}

UDamageResponseComponent::UDamageResponseComponent() {
}

