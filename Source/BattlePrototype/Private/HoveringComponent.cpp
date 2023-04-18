#include "HoveringComponent.h"

class AActor;
class UHoveringComponent;

void UHoveringComponent::SetDisableHovering(const FName& ClaimantName) {
}

UHoveringComponent* UHoveringComponent::GetHoveringComponent(AActor* Actor) {
    return NULL;
}

float UHoveringComponent::GetFlightAltitudeAverage() const {
    return 0.0f;
}

void UHoveringComponent::ClearDisableHovering(const FName& ClaimantName) {
}

UHoveringComponent::UHoveringComponent() {
    this->_minFlightAltitude = 140.00f;
    this->_maxFlightAltitude = 160.00f;
    this->_isHoveringCharacter = false;
    this->_claimantName = TEXT("HoveringComponent");
}

