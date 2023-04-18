#include "ContinualMoveComponent.h"

class AActor;
class UContinualMoveComponent;

void UContinualMoveComponent::UpdateFunction(float DeltaTime) {
}

void UContinualMoveComponent::StartMove(const FName& ClaimantName, FVector frontVector, float initSpeed, float Acceleration, float endSpeed) {
}

void UContinualMoveComponent::SetInvalidMove(bool bInvalid) {
}

UContinualMoveComponent* UContinualMoveComponent::GetContinualMoveComponent(AActor* Actor) {
    return NULL;
}

void UContinualMoveComponent::ForceClearMove() {
}

void UContinualMoveComponent::ClearMove(const FName& ClaimantName) {
}

UContinualMoveComponent::UContinualMoveComponent() {
}

