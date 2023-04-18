#include "FinishMoveActor.h"

void AFinishMoveActor::SlowSpeedEventEnd_Implementation() {
}

void AFinishMoveActor::SlowSpeedEvent_Implementation() {
}

void AFinishMoveActor::SetCameraTick(bool bActivate) {
}

FVector AFinishMoveActor::GetBeforeLocation() {
    return FVector{};
}

void AFinishMoveActor::FinishMoveUpdate() {
}

void AFinishMoveActor::FinishMoveBegin(bool isChangeBeforeData, FVector beforePos, float beforeFOV) {
}

AFinishMoveActor::AFinishMoveActor() {
    this->targetPartyType_ = RSPartyPlayerKind::Main;
    this->targetSocketName_ = TEXT("Head");
    this->zoomParam_ = 75.00f;
    this->targetLocationInterpolation_ = 1.00f;
    this->targetFOVInterpolation_ = 0.00f;
    this->cameraLocationInterpolation_ = 0.00f;
    this->finishMoveCamera_ = NULL;
    this->sequenceRate_ = 1.00f;
    this->gameCameraComponet_ = NULL;
    this->gameCameraActor_ = NULL;
    this->isLookingForEnemy_ = true;
}

