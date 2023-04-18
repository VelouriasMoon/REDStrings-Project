#include "CameraPropertyMediatorComponent.h"

class AActor;
class UCameraPropertyMediatorComponent;
class UObject;

void UCameraPropertyMediatorComponent::SetTargetArmLengthPitchByObject(const UObject* Object, float Length, float Pitch, float KeepSec, float InterpSec, TEnumAsByte<EEasingFunc::Type> InterpType) {
}

void UCameraPropertyMediatorComponent::SetTargetArmLengthPitchByName(FName Name, float Length, float Pitch, float KeepSec, float InterpSec, TEnumAsByte<EEasingFunc::Type> InterpType) {
}

void UCameraPropertyMediatorComponent::SetControlledCameraByOwner() {
}

bool UCameraPropertyMediatorComponent::IsRestoreCamera() const {
    return false;
}

UCameraPropertyMediatorComponent* UCameraPropertyMediatorComponent::GetCameraPropertyMediatorComponentFromActor(AActor* Actor) {
    return NULL;
}

void UCameraPropertyMediatorComponent::ClearTargetArmLengthPitchByObject(const UObject* Object) {
}

void UCameraPropertyMediatorComponent::ClearTargetArmLengthPitchByName(FName Name) {
}

UCameraPropertyMediatorComponent::UCameraPropertyMediatorComponent() {
    this->PitchNoMove = -1000.00f;
}

