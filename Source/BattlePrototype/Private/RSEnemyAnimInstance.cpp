#include "RSEnemyAnimInstance.h"

class ARSCharacterBase;
class UAnimMontage;

void URSEnemyAnimInstance::UpdateSpineRotateNative(FRotator& SpineRot, bool& UpdateSpineRot, bool EnableSpineRot, ARSCharacterBase* TargetCharacter, ARSCharacterBase* Owner, float RotateUpDownMin, float RotateUpDownMax, float RotateLRMax, float DeltaSeconds, float RotateSpeed) {
}

void URSEnemyAnimInstance::StartLookAt(bool bResetRotate) {
}

void URSEnemyAnimInstance::SetIKDstAlpha(float Value) {
}

void URSEnemyAnimInstance::SetIKAlpha(float Value) {
}

void URSEnemyAnimInstance::SetAddDamageBlendWeight(float Value) {
}

void URSEnemyAnimInstance::ResetDefaultAddDamageBlendWeight() {
}

void URSEnemyAnimInstance::RecvOnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

bool URSEnemyAnimInstance::IsEnableLookAt() const {
    return false;
}

bool URSEnemyAnimInstance::IsEnableEnemyIK() const {
    return false;
}

bool URSEnemyAnimInstance::IsEnableBrainCrashEvent() const {
    return false;
}

float URSEnemyAnimInstance::GetIKDstAlpha() const {
    return 0.0f;
}

float URSEnemyAnimInstance::GetIKAlpha() const {
    return 0.0f;
}

float URSEnemyAnimInstance::GetAddDamageBlendWeight() const {
    return 0.0f;
}

void URSEnemyAnimInstance::FinishLookAt(bool bRotateZero) {
}

void URSEnemyAnimInstance::EnableEnemyIK() {
}

void URSEnemyAnimInstance::EnableBrainCrashEvent() {
}

void URSEnemyAnimInstance::DisableEnemyIK() {
}

void URSEnemyAnimInstance::DisableBrainCrashEvent() {
}

bool URSEnemyAnimInstance::CheckGoToIdleMove(bool bEndAnim) {
    return false;
}

void URSEnemyAnimInstance::AttackEnd(EnemyAttackAnimKind Attack) {
}

URSEnemyAnimInstance::URSEnemyAnimInstance() {
    this->_aliveAnimKind = EnemyAliveAnimKind::IdleMove;
    this->_MoveAnimKind = EnemyMoveAnimKind::Default;
    this->_attackAnimKind = EnemyAttackAnimKind::Attack1;
    this->_actionAnimKind = EnemyActionAnimKind::Action1;
    this->_switchAnimKind = EnemySwitchAnimKind::Default;
    this->_damageAnimKind = EnemyDamageAnimKind::Wince1;
    this->_damageDownAnimKind = EnemyDamageDownAnimKind::Start;
    this->_brainCrashAnimKind = EnemyBrainCrashAnimKind::Start;
    this->_deadAnimKind = EnemyDeadAnimKind::Dead1;
    this->_initLayoutAnimKind = EnemyInitLayoutAnimKind::Wait;
    this->_eventAnimKind = EnemyEventAnimKind::Event1;
    this->_crashChanceAnimKind = EnemyCrashChanceAnimKind::Start;
    this->_EnemyKind = EnemyKind::Invalid;
    this->_walkSpeed = 0.00f;
    this->_bBackMove = false;
    this->_bExcite = false;
    this->_bLanded = false;
    this->_bDamageAnimStateB = false;
    this->_bDamageAnimLight2 = false;
    this->_bRequestFaintWakeup = false;
    this->_bAttackFlg = false;
    this->_animRigidBodyIdlingSec = -1.00f;
    this->_animDynamicsIdlingSec = -1.00f;
    this->_bEvent = false;
    this->_addDamageBlendWeightDefault = 0.50f;
    this->_addDamageBlendWeightCurrent = 0.50f;
    this->_bEnableLookAt = false;
    this->_bFinishLookAtRotateZero = false;
    this->_bLookFront = false;
    this->_lrRotateLimit = 60.00f;
    this->_upRotateLimit = 30.00f;
    this->_downRotateLimit = 15.00f;
    this->_lookAtFollowSpeed = 5.00f;
    this->_bEnableIK = false;
    this->_IKAlpha = 1.00f;
    this->_IKDstAlpha = 1.00f;
    this->_IKAlphaChangeRate = 10.00f;
    this->FootIKBlendRate = 0.00f;
    this->_bEnableBrainCrashEvent = false;
}

