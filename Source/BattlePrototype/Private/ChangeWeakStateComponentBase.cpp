#include "ChangeWeakStateComponentBase.h"

void UChangeWeakStateComponentBase::Update_Native(float DeltaSec) {
}

void UChangeWeakStateComponentBase::StoreWeakState_Native() {
}

void UChangeWeakStateComponentBase::StartFullInactiveWeak_Native() {
}

void UChangeWeakStateComponentBase::StartForceEnableWeak_Native() {
}

void UChangeWeakStateComponentBase::SetFullInactiveWeak_Native(bool FullInactive, int32 WeakListNum) {
}

void UChangeWeakStateComponentBase::SetEnableWeakExtendTime_Native(bool EnableExtend) {
}

void UChangeWeakStateComponentBase::SetChangeWeakMaterial_Native(bool bChange, int32 WeakListNum) {
}

void UChangeWeakStateComponentBase::SetAllWeakFullInactive_Native(bool bFullInactive) {
}

void UChangeWeakStateComponentBase::RestoreWeakState_Native() {
}

bool UChangeWeakStateComponentBase::IsWeakFullInactive_Native(int32 WeakListNum) {
    return false;
}

bool UChangeWeakStateComponentBase::IsWeakExtendTime_Native() {
    return false;
}

bool UChangeWeakStateComponentBase::IsForceEnableWeak_Native() {
    return false;
}

bool UChangeWeakStateComponentBase::IsEnableWeakExtendTime_Native() {
    return false;
}

bool UChangeWeakStateComponentBase::IsAllWeakFullInactive_Native() {
    return false;
}

void UChangeWeakStateComponentBase::Initialize_Native(bool isChangeWeakState) {
}

TArray<bool> UChangeWeakStateComponentBase::GetFullInactiveList_Native() {
    return TArray<bool>();
}

void UChangeWeakStateComponentBase::ForceDisableAllWeak_Native() {
}

void UChangeWeakStateComponentBase::EndWeakExtendTime_Native() {
}

void UChangeWeakStateComponentBase::EndFullInactiveWeak_Native() {
}

void UChangeWeakStateComponentBase::EndForceEnableWeak_Native() {
}

void UChangeWeakStateComponentBase::EnableWeak_Native(bool bEnable, int32 WeakListNum, bool bNotChangeCollision) {
}

void UChangeWeakStateComponentBase::EnableAllWeak_Native(bool bEnable) {
}

void UChangeWeakStateComponentBase::ClearChangeWeakMaterial_Native() {
}

void UChangeWeakStateComponentBase::AddWeakExtendTime_Native() {
}

UChangeWeakStateComponentBase::UChangeWeakStateComponentBase() {
    this->mWeakFullInactiveTime = 30.00f;
    this->mElapsedWeakFullInactiveTime = 0.00f;
    this->mFullInactiveWeak = false;
    this->mFullInactiveColorMapValueMin = 0.03f;
    this->mFullInactiveColorMapValueMax = 1.00f;
    this->mFullInactiveFrenelColorPowerMin = 0.25f;
    this->mFullInactiveFrenelColorPowerMax = 1.00f;
    this->mForceEnableWeak = false;
    this->mForceEnableWeakTime = 0.00f;
    this->mElapsedForceEnableWeakTime = 0.00f;
    this->mStartWeakEmissive = false;
    this->mWeakMaterialEmissiveCurve = NULL;
    this->mWeakEmissiveTime = 2.00f;
    this->mDisableWeakEmissiveTime = 0.50f;
    this->mWeakExtendTime = 0.00f;
    this->mbWeakExtendTime = false;
    this->mCurrentWeakExtendTime = 0.00f;
    this->mEnableWeakExtendTime = true;
    this->mMaxExtendTime = 17.00f;
    this->mAddFirstExtendTime = 8.00f;
    this->mAddPconExtendTime = 4.00f;
    this->mChangeWeakState = false;
    this->mWeakMaterialRateCurveData = NULL;
}

