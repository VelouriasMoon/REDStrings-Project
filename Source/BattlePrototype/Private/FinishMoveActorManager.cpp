#include "FinishMoveActorManager.h"

void AFinishMoveActorManager::SpawnAndSwapFinishMoveActor() {
}

void AFinishMoveActorManager::SetSequencePlayRate(float NewRate) {
}

void AFinishMoveActorManager::RotateCameraYawAfterEvent(float rotYaw) {
}

void AFinishMoveActorManager::RestartFinishMoveSequence() {
}


void AFinishMoveActorManager::PauseFinishMoveSequence() {
}


float AFinishMoveActorManager::GetSequenceRate() {
    return 0.0f;
}

void AFinishMoveActorManager::FinishMoveUpdate() {
}

void AFinishMoveActorManager::FinishMoveEnd_Implementation() {
}

void AFinishMoveActorManager::FinishMoveBegin() {
}

AFinishMoveActorManager::AFinishMoveActorManager() {
    this->fmActor_ = NULL;
    this->isCallingEffectFinish_ = false;
    this->rsLevelSequencer_ = NULL;
    this->sequencePath_ = TEXT("/Game/Event/07_Blueprint/FinishMove/FinishMoveSequencer");
}

