#include "EnemyAiComponentBase.h"

class ARSCharacterBase;
class UEnemyScriptComponent;

void UEnemyAiComponentBase::SetWaitNextActionTimer(float Seconds) {
}

void UEnemyAiComponentBase::SetThinkActionType(EEnemyThinkActionType Type) {
}

void UEnemyAiComponentBase::SetReserveActionNative(uint8 Action, float Param00, float Param01) {
}

void UEnemyAiComponentBase::SetIdleMoveActionNative(TArray<uint8>& idleMoveAction) {
}

void UEnemyAiComponentBase::SetCurrentAction(uint8 Value) {
}

void UEnemyAiComponentBase::SetActionNative(uint8 actionEnum, FName Action, ARSCharacterBase* mTargetCharacter, bool bIgnoreMove) {
}

void UEnemyAiComponentBase::SetActionFromReservedNative() {
}

void UEnemyAiComponentBase::ResetReserveActionNative() {
}

void UEnemyAiComponentBase::NotifyExecAttack() {
}

bool UEnemyAiComponentBase::IsWaitNextActionTimer() const {
    return false;
}

bool UEnemyAiComponentBase::IsTimerOKNative(uint8 actionEnym) {
    return false;
}

bool UEnemyAiComponentBase::IsTimeCheckNative(float checkValue) const {
    return false;
}

bool UEnemyAiComponentBase::IsReservedActionNative() const {
    return false;
}

bool UEnemyAiComponentBase::IsRandomCheckNative(float checkValue) const {
    return false;
}

bool UEnemyAiComponentBase::IsPreConditionOKNative(EEnemyThinkActionType ActionType, bool bNeedRay, bool IgnoreOutofScreen, bool IgnoreRestrictAttackOther, bool NotBrainField, bool bIgnoreMove, ARSCharacterBase* mTargetCharacter, bool IsContrlPlayer, float TargetHeight) {
    return false;
}

bool UEnemyAiComponentBase::IsPossibleMoveNative(bool IgnoreOutofScreen, bool IgnoreRestrictAttackOther, ARSCharacterBase* mTargetCharacter) {
    return false;
}

bool UEnemyAiComponentBase::IsPossibleAttackNative(bool IsControlPlayer, bool IgnoreOutofScreen, bool IgnoreRestrictAttackOther, ARSCharacterBase* mTargetCharacter) {
    return false;
}

bool UEnemyAiComponentBase::IsIdleMoveNative(bool IsIdleMove) const {
    return false;
}

bool UEnemyAiComponentBase::IsHpPercentDownNative(float percent, bool& Error) const {
    return false;
}

bool UEnemyAiComponentBase::IsEventNative() const {
    return false;
}

bool UEnemyAiComponentBase::IsDamageNative() const {
    return false;
}

bool UEnemyAiComponentBase::IsCommonAreaOKNative(EEnemyThinkActionType ActionType, float TargetHeight) {
    return false;
}

bool UEnemyAiComponentBase::IsCanAttack() const {
    return false;
}

bool UEnemyAiComponentBase::IsAttackingOtherEnemyNative(ARSCharacterBase* mTargetCharacter) {
    return false;
}

bool UEnemyAiComponentBase::IsAiActionNative(uint8 actionEnum, float& Range_Work, float& NoRange_Work, float& Angle_Work, float& NoAngle_Work, TArray<uint8>& lConditions, bool bIgnoreMove, ARSCharacterBase* mTargetCharacter, bool IsContrlPlayer, float TargetHeight, bool& IsPreCondition, bool NotProbability) {
    return false;
}

void UEnemyAiComponentBase::Initialize(UEnemyScriptComponent* EnemyScript, bool IsFlyEnemy, float AIActionHeight) {
}

EEnemyThinkActionType UEnemyAiComponentBase::GetThinkActionType() const {
    return EEnemyThinkActionType::Default;
}

uint8 UEnemyAiComponentBase::GetCurrentAction() const {
    return 0;
}


float UEnemyAiComponentBase::GetActionTimeNative(uint8 curAction) {
    return 0.0f;
}

bool UEnemyAiComponentBase::CheckIsAiActionParam(bool NotProbability, float lProbability, float lHp, uint8 actionEnum) {
    return false;
}

bool UEnemyAiComponentBase::CheckIdleMoveActionNative(uint8 checkAction, TArray<uint8> idleMoveAction) {
    return false;
}

UEnemyAiComponentBase::UEnemyAiComponentBase() {
    this->mCurrentAction = 0;
    this->mThinkActionType = EEnemyThinkActionType::Default;
    this->mEnableAllowance = false;
    this->mAllowanceWaitSeconds = 10.00f;
    this->mCanAttackOnce = false;
}

