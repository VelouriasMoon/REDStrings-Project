#include "PlayerShadeNoiseComponent.h"

class UMeshComponent;

void UPlayerShadeNoiseComponent::FirstSetup(UMeshComponent* InMesh, float InCharacterMovementSpeedUpScale, float InCharacterRotationSpeedUpScale) {
}

UPlayerShadeNoiseComponent::UPlayerShadeNoiseComponent() {
    this->CharacterMovementSpeedUpScale = 0.00f;
    this->CharacterRotationSpeedUpScale = 0.00f;
    this->TargetMesh = NULL;
}

