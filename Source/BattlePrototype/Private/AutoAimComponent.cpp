#include "AutoAimComponent.h"

class AActor;
class UAutoAimComponent;
class UMeshComponent;
class UObject;

void UAutoAimComponent::UpdateRotateAim(float DeltaSeconds) {
}

float UAutoAimComponent::UpdateFromDirectionOfRotation(float Rot, float Sign) {
    return 0.0f;
}

void UAutoAimComponent::PauseAutoAim(bool bPause) {
}

void UAutoAimComponent::LockLocation(bool bLock, FVector NewLockLocation) {
}

bool UAutoAimComponent::IsLockLocation() const {
    return false;
}

bool UAutoAimComponent::IsBindOwnerTick() const {
    return false;
}

UAutoAimComponent* UAutoAimComponent::GetAutoAimComponentFromActor(AActor* Actor) {
    return NULL;
}

void UAutoAimComponent::EndAutoAim(UObject* Notify) {
}

void UAutoAimComponent::BeginAutoAimLocation(UObject* Notify, float aimSpeed, float maxAimAngle, FVector aimLocation, UMeshComponent* socketRotateMesh, FName SocketName, float offsetDegree, EDirectionOfRotation directionOfRotation, float frontDegree) {
}

void UAutoAimComponent::BeginAutoAim(UObject* Notify, float aimSpeed, float maxAimAngle, bool isInternalLock, bool isToCamera, AActor* brainCrashActor, UMeshComponent* socketRotateMesh, FName SocketName, float offsetDegree, EDirectionOfRotation directionOfRotation, float frontDegree, float aimSpeedInternalLock, bool findAimTargetWhenNoTarget, bool isDetectTargetChange, bool isToWeakPoint) {
}

UAutoAimComponent::UAutoAimComponent() {
    this->_aimSpeed = 360.00f;
    this->_aimSpeedInternalLock = 0.00f;
    this->_maxAimAngle = -1.00f;
    this->_isInternalLock = false;
    this->_isToCamera = false;
    this->_isToBrainCrash = false;
    this->_offsetDegree = 0.00f;
    this->_directionOfRotation = EDirectionOfRotation::None;
    this->_frontDegree = 0.00f;
    this->_isToWeakPoint = false;
}

