#include "EnemyCheckDodgeJustComponent.h"

class UHitCheckComponent;

bool UEnemyCheckDodgeJustComponent::CheckEnableDodgeJust(const FVector& Location, const FVector& UpDir, const FVector& Offset, float Height, float Radius, UHitCheckComponent* HitCheck, float CheckScale, float CheckRangeScale) {
    return false;
}

UEnemyCheckDodgeJustComponent::UEnemyCheckDodgeJustComponent() {
    this->mDodgeRadius = 0.00f;
    this->mDodgeRadiusRangeAttack = 0.00f;
}

