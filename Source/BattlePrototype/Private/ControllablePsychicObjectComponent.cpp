#include "ControllablePsychicObjectComponent.h"

class ARSCharacterBase;
class UPlayerInputBaseComponent;

void UControllablePsychicObjectComponent::EndControl() {
}

bool UControllablePsychicObjectComponent::BeginControl(ARSCharacterBase* InControlOwner, UPlayerInputBaseComponent* InInputComponent, float InitializeSpeed) {
    return false;
}

UControllablePsychicObjectComponent::UControllablePsychicObjectComponent() {
    this->MaxTurnSpeed = 180.00f;
    this->MaxSpeed = 1000.00f;
    this->AccelerationSpeed = 3000.00f;
    this->SlowDownSpeed = 1000.00f;
    this->bTurnSlowDown = false;
    this->TurnSlowDownAngleMin = 20.00f;
    this->TurnSlowDownAngleMax = 60.00f;
    this->TurnSlowDownMaxSpeedRate = 0.20f;
}

