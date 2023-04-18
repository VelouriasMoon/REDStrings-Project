#include "DamageArrayComponent.h"

bool UDamageArrayComponent::IsRangeCheck(FVector vecStart, FVector vecEnd, FVector vecForward, float Range) const {
    return false;
}

TArray<FHCHitResult> UDamageArrayComponent::HitResultMaxDamagePriorityMultiActor(const TArray<FHCHitResult>& HitResult, bool& IsPartsInvinsible) const {
    return TArray<FHCHitResult>();
}

TArray<FHCHitResult> UDamageArrayComponent::HitResultMaxDamageMultiActor(const TArray<FHCHitResult>& HitResult) const {
    return TArray<FHCHitResult>();
}

FHCHitResult UDamageArrayComponent::HitResultMaxDamage(const TArray<FHCHitResult>& HitResult) const {
    return FHCHitResult{};
}

TArray<FHCHitResult> UDamageArrayComponent::HitResultDamageSort(const TArray<FHCHitResult>& HitResult, bool isDes) const {
    return TArray<FHCHitResult>();
}

UDamageArrayComponent::UDamageArrayComponent() {
}

