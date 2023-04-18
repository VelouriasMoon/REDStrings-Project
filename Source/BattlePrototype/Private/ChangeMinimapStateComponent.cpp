#include "ChangeMinimapStateComponent.h"

void UChangeMinimapStateComponent::InitializeParam(bool isAlreadyAccessed, float checkDistance, float NewHeightDifference) {
}

UChangeMinimapStateComponent::UChangeMinimapStateComponent() {
    this->IsAccessed = false;
    this->SquareDistance = 40000.00f;
    this->HeightDifference = 200.00f;
}

