#include "ASCharacterMovementComponent.h"

void UASCharacterMovementComponent::SetImpulse(FVector Impulse, bool bVelocityChange) {
}

void UASCharacterMovementComponent::SetDirectMove(FVector MoveVelocity, bool bForceMaxSpeed) {
}

void UASCharacterMovementComponent::SendAnimCommand(const FString& Command, bool Force) {
}

bool UASCharacterMovementComponent::HasAnimTag(FName Tag) const {
    return false;
}

FVector UASCharacterMovementComponent::GetLastNavMoveVelocity() const {
    return FVector{};
}

void UASCharacterMovementComponent::ClearCurveMove() {
}

UASCharacterMovementComponent::UASCharacterMovementComponent() {
}

