#include "PsychokinesisedComponent.h"

class USceneComponent;

void UPsychokinesisedComponent::MoveRootComponent(const FVector& Delta, FHitResult& OutHit, bool bSweep, bool bTeleport) {
}

void UPsychokinesisedComponent::MakeRotatorAxisAndAngle(FRotator& outRot, FVector Axis, float angleDegree) {
}

void UPsychokinesisedComponent::GetAxisAndAngleFromRotator(FVector& Axis, float& angleDegree, FRotator Rot) {
}

void UPsychokinesisedComponent::DebugDrawRotator(FRotator Rot, FVector centerPos, float Radius) {
}

void UPsychokinesisedComponent::CalcAngularVelocityToTarget(FVector& AngularVelocity, USceneComponent* directionComp, const FVector TargetLocation) {
}

UPsychokinesisedComponent::UPsychokinesisedComponent() {
}

