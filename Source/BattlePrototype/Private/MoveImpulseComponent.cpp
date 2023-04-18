#include "MoveImpulseComponent.h"

class AActor;
class UMoveImpulseComponent;

void UMoveImpulseComponent::UpdateFunction(float DeltaTime) {
}

void UMoveImpulseComponent::UpdateFlying() {
}

void UMoveImpulseComponent::SetImpulse(FVector Velocity) {
}

FVector UMoveImpulseComponent::GetVelocity() const {
    return FVector{};
}

UMoveImpulseComponent* UMoveImpulseComponent::GetMoveImpulseComponent(AActor* Actor) {
    return NULL;
}

UMoveImpulseComponent::UMoveImpulseComponent() {
    this->_isDebugDraw = false;
    this->_decSpeed = 980.00f;
    this->_claimantName = TEXT("MoveImpulseComponent");
}

