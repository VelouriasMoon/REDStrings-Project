#include "PlayerJustDodgeComponent.h"

class UCapsuleComponent;
class UHitCheckComponent;


bool UPlayerJustDodgeComponent::CalcJustDodgeByLocation(const FVector& Location, const FVector& UpDir, const FVector& Offset, float Height, float Radius, UHitCheckComponent* HitCheck, float CheckScale, float CheckRangeScale) {
    return false;
}

bool UPlayerJustDodgeComponent::CalcJustDodge(UCapsuleComponent* BaseCapsule, UHitCheckComponent* HitCheck, const FVector& Offset, float CheckScale, float CheckRangeScale) {
    return false;
}

UPlayerJustDodgeComponent::UPlayerJustDodgeComponent() {
    this->JUST_DODGE_TIME = 0.00f;
    this->JUST_DODGE_GAMESPEED_RATE = 0.00f;
    this->JUST_DODGE_INVINSIBLE_TIME = 0.00f;
    this->JUST_DODGE_RADIUS = 0.00f;
    this->JUST_DODGE_RADIUS_RANGEATTACK = 0.00f;
}

