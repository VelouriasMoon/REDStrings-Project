#include "EnemyGoalComponentBase.h"

class AActor;
class ARSCharacterBase;

void UEnemyGoalComponentBase::UpdateTargetCharacter_Native(float DeltaSeconds) {
}

void UEnemyGoalComponentBase::SetTargetLocation_Native(FVector Location) {
}

void UEnemyGoalComponentBase::SetTargetActor_Native(ARSCharacterBase* Character) {
}

void UEnemyGoalComponentBase::SetGoalIntervalTime_Native(float newIntervalTime) {
}

void UEnemyGoalComponentBase::ResetGoalIntervalTime_Native() {
}

void UEnemyGoalComponentBase::MainTick_Native(float DeltaSeconds) {
}




void UEnemyGoalComponentBase::Initialize_Native() {
}

FVector UEnemyGoalComponentBase::GetTargetLocation_Native() {
    return FVector{};
}

ARSCharacterBase* UEnemyGoalComponentBase::GetTargetActor_Native() {
    return NULL;
}

AActor* UEnemyGoalComponentBase::GetGoalActor_Native() {
    return NULL;
}

void UEnemyGoalComponentBase::EndPlay_Native() {
}

FVector UEnemyGoalComponentBase::CorrectionHitCollision_Native(FVector SrcLocation, FVector DstLocation, float Radius) {
    return FVector{};
}

UEnemyGoalComponentBase::UEnemyGoalComponentBase() {
    this->mCalcComponent = NULL;
    this->mMoveGoalActor = NULL;
    this->mMyEnemy = NULL;
    this->mTargetCharacter = NULL;
    this->mGoalType = EEnemyGoalType::Invalid;
    this->mHitWallRadius = 0.00f;
    this->mHitWallHeight = 100.00f;
    this->mbDisableUpdateCharacter = false;
}

