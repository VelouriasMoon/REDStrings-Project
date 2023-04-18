#include "HateTargetComponent.h"

class ARSCharacterBase;

void UHateTargetComponent::UpdateTarget(float DeltaTime) {
}

void UHateTargetComponent::SubHate(ARSCharacterBase* Target, float hateValue, float techScale) {
}

void UHateTargetComponent::SetTargetLockConfusion(ARSCharacterBase* Target) {
}

void UHateTargetComponent::SetTargetLock(ARSCharacterBase* Target, int32 no) {
}

void UHateTargetComponent::SetNoAttackCount(float NoAttackSecond) {
}

void UHateTargetComponent::SetHateParam(const FHateParam& Param) {
}

void UHateTargetComponent::SetDirectTargetLock(ARSCharacterBase* Target) {
}

void UHateTargetComponent::ResetHate(ARSCharacterBase* Target) {
}

void UHateTargetComponent::ResetDirectTargetLock() {
}

void UHateTargetComponent::ResetAllHate() {
}

bool UHateTargetComponent::IsLockTargetPlayer() const {
    return false;
}

bool UHateTargetComponent::IsLockTargetNPC() const {
    return false;
}

void UHateTargetComponent::HateTargetParamSubHate(ARSCharacterBase* Target, TEnumAsByte<EHATETYPE> Num) {
}

void UHateTargetComponent::HateTargetParamAddHate(ARSCharacterBase* Target, TEnumAsByte<EHATETYPE> Num) {
}

ARSCharacterBase* UHateTargetComponent::GetTargetLockConfusion() const {
    return NULL;
}

ARSCharacterBase* UHateTargetComponent::GetTargetLock() const {
    return NULL;
}

TArray<FHateTargetParam> UHateTargetComponent::GetHateTargetParam() const {
    return TArray<FHateTargetParam>();
}

float UHateTargetComponent::GetBasisHate(ARSCharacterBase* mainPlayer, ARSCharacterBase* Target) {
    return 0.0f;
}

void UHateTargetComponent::EnableLockTargetRangeHate(bool bEnable, float RangeNear, float RangeFar) {
}

void UHateTargetComponent::EnableLockTargetRange(bool bEnable, float RangeNear, float RangeFar, bool bIgnoreHate) {
}

void UHateTargetComponent::EnableLockTargetPlayer(bool bEnable) {
}

void UHateTargetComponent::EnableLockTargetNPC(bool bEnable) {
}

void UHateTargetComponent::ClearHateTargetParam() {
}

void UHateTargetComponent::AddHateTargetParam(ARSCharacterBase* Target, TEnumAsByte<EHATETYPE> Num, TEnumAsByte<EHATETYPE> Down) {
}

void UHateTargetComponent::AddHate(ARSCharacterBase* Target, float hateValue, float techScale, bool bAccumulation, bool bDirect) {
}

UHateTargetComponent::UHateTargetComponent() {
    this->mTargetLockNo = 0;
    this->mTargetLockParam = NULL;
    this->mTargetLockOnceNo = 0;
    this->mTargetLockOnceParam = NULL;
    this->mOwnerParam = NULL;
    this->mTargetLockTime = 0.00f;
    this->mTargetLockUpdateTime = 0.00f;
    this->mTargetLockNearUpdateTime = 0.00f;
    this->mIsTargetLockNear = false;
    this->mIsTargetLockPlayer = false;
    this->mIsTargetLockNPC = false;
    this->mBeforeIsTargetLockPlayer = false;
    this->mBeforeIsTargetLockNPC = false;
    this->mRange = 0.00f;
    this->mBerserkOnHateRate = 0.00f;
    this->mIsLookTargetRange = false;
    this->mTargetNearRange = 0.00f;
    this->mTargetFarRange = 0.00f;
    this->mIsTargetRangeIgnoreHate = false;
    this->mIsLookTargetRangeHate = false;
    this->mTargetNearRangeHate = 0.00f;
    this->mTargetFarRangeHate = 0.00f;
}

