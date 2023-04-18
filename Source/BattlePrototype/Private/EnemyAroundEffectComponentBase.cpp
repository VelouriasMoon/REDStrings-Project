#include "EnemyAroundEffectComponentBase.h"


bool UEnemyAroundEffectComponentBase::StartAroundWeakEffect_Native(int32 emitterIndex) {
    return false;
}


void UEnemyAroundEffectComponentBase::SetVisibleEffect_Native(bool Visible) {
}

void UEnemyAroundEffectComponentBase::SetFadeDeitherValue(float DeitherValue) {
}

void UEnemyAroundEffectComponentBase::SetEffectParameter() {
}

void UEnemyAroundEffectComponentBase::SetEffectParam_Native(float newCommonRate, float newAttachRate) {
}


bool UEnemyAroundEffectComponentBase::IsVisibleEffect_Native(int32 emitterIndex) {
    return false;
}

bool UEnemyAroundEffectComponentBase::IsVisible_Native() {
    return false;
}

bool UEnemyAroundEffectComponentBase::IsUseMultiEmitter() {
    return false;
}

bool UEnemyAroundEffectComponentBase::IsUseEffect_Native() {
    return false;
}

bool UEnemyAroundEffectComponentBase::IsEnableAllEmitter() {
    return false;
}

bool UEnemyAroundEffectComponentBase::IsDisableAllEmitter() {
    return false;
}

void UEnemyAroundEffectComponentBase::Initialize(bool UseEffect, float CommonRate, float AttachRate, bool Visible) {
}

void UEnemyAroundEffectComponentBase::HiddenEffect_Native(bool NewHidden) {
}

int32 UEnemyAroundEffectComponentBase::GetEmitterLastIndex() {
    return 0;
}

bool UEnemyAroundEffectComponentBase::EndAroundWeakEffect_Native(int32 emitterIndex) {
    return false;
}

void UEnemyAroundEffectComponentBase::DelaySetFadeDeitherValue() {
}

UEnemyAroundEffectComponentBase::UEnemyAroundEffectComponentBase() {
    this->mbUseEffect = false;
    this->mCommonRate = 1.00f;
    this->mAttachRate = 1.00f;
    this->mEffectHandle = NULL;
    this->mbVisible = false;
    this->mVertSurfaceParameterName = TEXT("WeakPoint");
    this->mVertSurfaceParameterCommonRateName = TEXT("Rate");
    this->mVertSurfaceParameterAttachRateName = TEXT("Rate_attach");
    this->mUseMultiEmitter = false;
    this->mFadeDeitherValue = 0.00f;
    this->mDelayFadeDeitherFlag = false;
    this->mEndWeakHideEffect = false;
}

