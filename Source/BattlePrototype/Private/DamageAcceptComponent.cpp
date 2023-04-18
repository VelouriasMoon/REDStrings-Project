#include "DamageAcceptComponent.h"

void UDamageAcceptComponent::TakeDamageSimple(int32 Damage, int32 ReduceGuard, bool isDispDamagePoint, bool isPercentDamage) {
}

void UDamageAcceptComponent::TakeDamage(const FHCHitResult& HitResult, int32 Damage, float crashDamage, bool isDispDamagePoint, bool IsAnimDamage, bool IsDown) {
}

bool UDamageAcceptComponent::IsStartDamageAnim(const FHCHitResult& HitResult, int32 Damage, bool IsDown) const {
    return false;
}

bool UDamageAcceptComponent::IsEnemy() {
    return false;
}

DamagePointKind UDamageAcceptComponent::DecideDamagePointKind() const {
    return DamagePointKind::Default;
}

UDamageAcceptComponent::UDamageAcceptComponent() {
}

