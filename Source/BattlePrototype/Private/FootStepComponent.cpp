#include "FootStepComponent.h"

class AActor;

void UFootStepComponent::PlaySoundByName(const EGamePhysicalSurfaceType PhysicsType, FName ActionType, const FVector& Location, const FRotator& Rotation, AActor* Creator) {
}

void UFootStepComponent::PlaySound(const EGamePhysicalSurfaceType PhysicsType, const ECharacterPhysicalActionType ActionType, const FVector& Location, const FRotator& Rotation, AActor* Creator) {
}

void UFootStepComponent::PlayEffectByName(const EGamePhysicalSurfaceType PhysicsType, FName ActionType, const FTransform& Transform, AActor* Creator) {
}

void UFootStepComponent::PlayEffect(const EGamePhysicalSurfaceType PhysicsType, const ECharacterPhysicalActionType ActionType, const FTransform& Transform, AActor* Creator) {
}

UFootStepComponent::UFootStepComponent() {
    this->EffectActionResCache = NULL;
    this->SoundActionResCache = NULL;
    this->IsBeginPlayLoadAsset = true;
}

