#include "TargetSearchComponent.h"

class AActor;
class ARSCharacterBase;
class UTargetSearchComponent;

void UTargetSearchComponent::UpdateCurrentTarget() {
}

void UTargetSearchComponent::StoreLockTarget() {
}

void UTargetSearchComponent::SetTargetFix(bool bFix) {
}

void UTargetSearchComponent::SetLostFlag() {
}

void UTargetSearchComponent::SetLockTargetDirect(ARSCharacterBase* Actor) {
}

void UTargetSearchComponent::SetLockTarget_Implementation(bool bLock) {
}

ARSCharacterBase* UTargetSearchComponent::SearchTargetActor(const TArray<ARSCharacterBase*>& enemyList, TEnumAsByte<TargetListType> listType, bool bIgnoreRendered, bool bNotLockTarget) const {
    return NULL;
}

void UTargetSearchComponent::RestoreLockTarget(bool bRetargetRestoreFailed) {
}

void UTargetSearchComponent::OnSetBattling(bool bBattle) {
}

void UTargetSearchComponent::LockonTargetCalcPos(float lockonHeight) {
}

bool UTargetSearchComponent::IsTargetFix() const {
    return false;
}

bool UTargetSearchComponent::IsLostLockTarget() const {
    return false;
}

bool UTargetSearchComponent::IsLockTarget() const {
    return false;
}

bool UTargetSearchComponent::IsBossBattle() const {
    return false;
}

bool UTargetSearchComponent::IsAbleTarget(ARSCharacterBase* Target, bool isLock, TEnumAsByte<TargetListType> listType, ETargetFailedReason& OutReason) const {
    return false;
}

UTargetSearchComponent* UTargetSearchComponent::GetTargetSearchComponentFromActor(AActor* Actor) {
    return NULL;
}

ARSCharacterBase* UTargetSearchComponent::GetLostTargetActor() {
    return NULL;
}

ARSCharacterBase* UTargetSearchComponent::GetCurrentTargetActor() {
    return NULL;
}

void UTargetSearchComponent::ClearLostTargetActor() {
}

bool UTargetSearchComponent::ChangeLockTarget_Implementation(float AxisValue, const TArray<ARSCharacterBase*>& enemyList) {
    return false;
}

UTargetSearchComponent::UTargetSearchComponent() {
    this->SearchDistance = 2000.00f;
    this->SearchYaw = 80.00f;
    this->SearchPitch = 80.00f;
    this->SearchMobDistance = 2000.00f;
    this->LockDistance = 2500.00f;
    this->Trace2ndZOffset = 100.00f;
    this->InternalLockUpdateTime = 0.50f;
    this->pEnemyManager_ = NULL;
    this->pBattleManager_ = NULL;
    this->TickInterval_ = 1.00f;
}

