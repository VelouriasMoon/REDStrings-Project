#include "PlayerLookAtComponent.h"

class AActor;

void UPlayerLookAtComponent::SetLookAtLocation(bool bLookLocation, const FVector& LookAtLocation) {
}

void UPlayerLookAtComponent::SetLookAtEnabled(bool bEnabled) {
}

void UPlayerLookAtComponent::SetLookAround(bool bLookAround) {
}

void UPlayerLookAtComponent::SetEventLookAtLocation(bool bEnable, const FVector& LookAtLocation) {
}

void UPlayerLookAtComponent::SetEventLookAtActor(bool bEnable, AActor* LookAtActor) {
}

bool UPlayerLookAtComponent::IsLookAtEnabled() const {
    return false;
}

void UPlayerLookAtComponent::ForceReset() {
}

UPlayerLookAtComponent::UPlayerLookAtComponent() {
    this->LimitDegreeUp = 40.00f;
    this->LimitDegreeDown = 20.00f;
    this->LimitDegreeRight = 70.00f;
    this->LimitDegreeLeft = 70.00f;
    this->LookAtFollowSpeed = 5.00f;
    this->LookAroundCurve = NULL;
}

