#include "MovementPropertyMediator.h"

class AActor;
class UMovementPropertyMediator;

void UMovementPropertyMediator::SetStepSpeedRate(const FName& ClaimantName, float Rate) {
}

void UMovementPropertyMediator::SetMovementCollisionIgnorePawn(const FName& ClaimantName) {
}

void UMovementPropertyMediator::SetMaxWalkSpeedRate(const FName& ClaimantName, float Rate) {
}

void UMovementPropertyMediator::SetMaxWalkSpeed(const FName& ClaimantName, float Speed) {
}

void UMovementPropertyMediator::SetMaxFlySpeedRate(const FName& ClaimantName, float Rate) {
}

void UMovementPropertyMediator::SetMaxFlySpeed(const FName& ClaimantName, float Speed) {
}

void UMovementPropertyMediator::SetFlying(const FName& ClaimantName) {
}

void UMovementPropertyMediator::SetActionSpeedRate(const FName& ClaimantName, float SpeedRate) {
}

UMovementPropertyMediator* UMovementPropertyMediator::GetMovementPropertyMediatorComponentFromActor(AActor* Actor) {
    return NULL;
}

void UMovementPropertyMediator::EnableMovement(const FName& ClaimantName) {
}

void UMovementPropertyMediator::DisableMovement(const FName& ClaimantName) {
}

void UMovementPropertyMediator::ClearStepSpeedRate(const FName& ClaimantName) {
}

void UMovementPropertyMediator::ClearMovementCollisionIgnorePawn(const FName& ClaimantName) {
}

void UMovementPropertyMediator::ClearMaxWalkSpeedRate(const FName& ClaimantName) {
}

void UMovementPropertyMediator::ClearMaxFlySpeedRate(const FName& ClaimantName) {
}

void UMovementPropertyMediator::ClearFlyingForce() {
}

void UMovementPropertyMediator::ClearFlying(const FName& ClaimantName) {
}

void UMovementPropertyMediator::ClearActionSpeedRate(const FName& ClaimantName) {
}

bool UMovementPropertyMediator::CheckTouchGround() const {
    return false;
}

float UMovementPropertyMediator::CalcDistanceToGround() const {
    return 0.0f;
}

UMovementPropertyMediator::UMovementPropertyMediator() {
    this->ActionSpeedRateMin = 0.01f;
    this->DefaultMaxWalkSpeed = 0.00f;
    this->DefaultMaxFlySpeed = 0.00f;
    this->MaxWalkSpeedRateMin = 0.01f;
    this->MaxWalkSpeedRateMax = 50.00f;
    this->_defaultStepStartSpeed = 0.00f;
    this->_defaultStepDeclaration = 0.00f;
    this->_stepSpeedRateMin = 0.01f;
    this->_stepSpeedRateMax = 50.00f;
    this->OwnerCharacter = NULL;
    this->OwnerMovement = NULL;
}

