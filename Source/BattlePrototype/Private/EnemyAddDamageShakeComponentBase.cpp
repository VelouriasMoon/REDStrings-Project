#include "EnemyAddDamageShakeComponentBase.h"

void UEnemyAddDamageShakeComponentBase::Update_Native(float DeltaSec) {
}

void UEnemyAddDamageShakeComponentBase::Start_Native(bool TriggerAttack) {
}

FVector UEnemyAddDamageShakeComponentBase::GetRandomVec_Native(FVector CurrentVec, float Range, bool IsRight) {
    return FVector{};
}

void UEnemyAddDamageShakeComponentBase::End_Native() {
}

float UEnemyAddDamageShakeComponentBase::CalcShakeScale_Native() {
    return 0.0f;
}

UEnemyAddDamageShakeComponentBase::UEnemyAddDamageShakeComponentBase() {
    this->mOwnerCharacter = NULL;
    this->mShakeMaxCount = 6;
    this->mShakeScale = 2.50f;
    this->mShakeCurveData = NULL;
    this->mRotateRange = 60.00f;
    this->mShakeRangeMin = 5.00f;
    this->mShakeRangeMax = 6.00f;
    this->mOneShakeTimer = 0.03f;
    this->mTriggerShakeScale = 1.50f;
    this->mKnockBackShakeScale = 2.00f;
    this->mCharaTypeShakeScale = 1.00f;
}

