#include "PlayerRessurectComponent.h"

class AActor;

void UPlayerRessurectComponent::SuspendRessurect() {
}

void UPlayerRessurectComponent::SetVisibleWidget(bool Visible) {
}

bool UPlayerRessurectComponent::IsExecRessurect() {
    return false;
}

bool UPlayerRessurectComponent::IsEnableRessurect() {
    return false;
}


float UPlayerRessurectComponent::GetDistanceSquared2D() {
    return 0.0f;
}

void UPlayerRessurectComponent::DeactivateRessurectIcon() {
}

void UPlayerRessurectComponent::BeginRessurect(float timeRate) {
}

void UPlayerRessurectComponent::ActivateRessurectIcon(AActor* deadPlayer) {
}

UPlayerRessurectComponent::UPlayerRessurectComponent() {
    this->RessurectTime = 5.00f;
    this->DecreaseTimeRate = 0.50f;
    this->RessurectRange = 150.00f;
    this->RessurectHeight = 50.00f;
    this->RessurectAngle = 45.00f;
    this->IconOffsetZ = 0.00f;
}

