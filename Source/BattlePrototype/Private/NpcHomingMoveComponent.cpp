#include "NpcHomingMoveComponent.h"

class USplineComponent;

void UNpcHomingMoveComponent::StopMove() {
}

void UNpcHomingMoveComponent::StartMove() {
}

void UNpcHomingMoveComponent::SetTargetPosition(const FVector Target) {
}

void UNpcHomingMoveComponent::SetSpline(USplineComponent* Spline) {
}

void UNpcHomingMoveComponent::SetElapsedTime(float Time) {
}

void UNpcHomingMoveComponent::ResetNpcTransform() {
}

void UNpcHomingMoveComponent::ForceMove(float DistanceRate) {
}

UNpcHomingMoveComponent::UNpcHomingMoveComponent() {
    this->SplinePath = NULL;
    this->TargetShape = NULL;
    this->CurMoveSpeed = 50.00f;
    this->CurRotSpeed = 5.00f;
    this->TargetMoveSpeed = 1.20f;
    this->LocalDistance = 0.00f;
    this->PathTotalDistance = 0.00f;
    this->IsMoving = true;
    this->IsTargetMoving = true;
    this->GroundOffsetZ = 90.00f;
    this->GroundTestDiff = 110.00f;
    this->UpTestDiff = 100.00f;
    this->UpTestForwardDistance = 50.00f;
    this->DownTestForwardDistance = 3.00f;
    this->TargetStopDistance = 150.00f;
    this->IsDebug = false;
    this->IsOnSplineMove = false;
    this->SplineMoveForwardDistance = 10.00f;
    this->SplineMoveUpDownSpeedMax = 50.00f;
    this->elapsedSeconds = 0.00f;
    this->IsFadingAsMovemet = true;
    this->TracingSpeherRadius = 40.00f;
    this->SlopeCheckDistFront = 100.00f;
    this->SlopeCheckDistRear = 100.00f;
    this->FadingInterpolateSeconds = 1.00f;
}

