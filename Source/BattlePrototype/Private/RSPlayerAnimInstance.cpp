#include "RSPlayerAnimInstance.h"

class UAnimMontage;

void URSPlayerAnimInstance::SetWalkRunStateKind(PlayerWalkRunStateKind kind) {
}

void URSPlayerAnimInstance::SetEyeControlParameter(float Horizontal, float Vertical) {
}

void URSPlayerAnimInstance::SetEyeControlEnable(bool bEnable, FName ClaimantName) {
}

void URSPlayerAnimInstance::SetEnableFootIK(bool bEnable, float BlendTime) {
}

void URSPlayerAnimInstance::SetCaptureBlend(bool bUse, bool bBack, float BlendRate) {
}

void URSPlayerAnimInstance::SetAttackMaxFootUpperHeight(bool bUse, float Height, float SlopeDownHeight) {
}

void URSPlayerAnimInstance::SetAttackMaxFootUnderHeight(bool bUse, float Height, float SlopeDownHeight) {
}

void URSPlayerAnimInstance::SetAttackFootHeightDiff(bool bUse, float Diff, float SlopeDownDiff) {
}

void URSPlayerAnimInstance::ReregistReceiveTransitionNotifyDelay() {
}

void URSPlayerAnimInstance::RecvOnMontageStarted(UAnimMontage* Montage) {
}

void URSPlayerAnimInstance::RecvOnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void URSPlayerAnimInstance::RecvOnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

void URSPlayerAnimInstance::ReceiveTransitionNotifyDelay(PlayerAnimTransitionKind Transition, float DelayTime) {
}

void URSPlayerAnimInstance::ReceiveTransitionNotify(PlayerAnimTransitionKind Transition) {
}

void URSPlayerAnimInstance::OnChangeAnimKind() {
}

bool URSPlayerAnimInstance::IsRequestKind(PlayerAnimKind kind) const {
    return false;
}

bool URSPlayerAnimInstance::IsExistRequest() const {
    return false;
}

bool URSPlayerAnimInstance::IsCheckIdle() const {
    return false;
}

PlayerAnimKind URSPlayerAnimInstance::GetNowAnimKind() const {
    return PlayerAnimKind::IdleWalkRun;
}

void URSPlayerAnimInstance::GetFootIKGroundLocation(FVector& OutFootLeft, FVector& OutFootRight) {
}

URSPlayerAnimInstance::URSPlayerAnimInstance() {
    this->RequestAnimKind = PlayerAnimKind::Invalid;
    this->RequestAnimParam = 0;
    this->bSkipPhysics = false;
    this->bIgnoreSkipPhysics = false;
    this->LeftStickPower = 0.00f;
    this->LeftStickPrevDiff = 0.00f;
    this->WalkRunStateKind = PlayerWalkRunStateKind::Idle;
    this->WalkSpeed = 0.00f;
    this->WalkDir = 0.00f;
    this->bWalkStopAble = false;
    this->AnimParamDir = EPlayerAnimDir::Forward;
    this->bUniquePsychicAimFlag = false;
    this->bBattling = false;
    this->bTalkMode = false;
    this->bAjitoFlag = false;
    this->bFlyingAnimation = false;
    this->bUseCaptureBlend = false;
    this->bCaptureBlendRateBack = false;
    this->CaptureBlendRate = 0.00f;
    this->UseKawaiiPhysics = true;
    this->restrictionState = RSCharaRestrictionState::Normal;
    this->HandIK_Alpha = 0.00f;
    this->RigidbodyAlpha = 1.00f;
    this->RigidIdlingSec = -1.00f;
    this->AnimDynamicsIdlingSec = -1.00f;
    this->AddDamageBlendRate = 1.00f;
    this->bDispDebugLog = false;
    this->NowAnimKind = PlayerAnimKind::IdleWalkRun;
    this->OldAnimKind = PlayerAnimKind::IdleWalkRun;
    this->bSubstateLastMotion = false;
    this->DelayTransition = PlayerAnimTransitionKind::None;
    this->fDelayActorDilation = 0.00f;
    this->EyeHorizontal = 0.00f;
    this->EyeVertical = 0.00f;
    this->EyeBlendRate = 0.00f;
    this->FloorCheckAngle = 85.00f;
    this->FootIKFootInterpSpeed = 10.00f;
    this->FootIKFootInterpSpeedUnderGround = 20.00f;
    this->FootIKFootInterpSpeedFloaingFoot = 10.00f;
    this->FootIKFootInterpSpeedCheckGroundOffset = 3.00f;
    this->FootIKMeshInterpSpeed = 5.00f;
    this->FootIKMeshFloatingInterpSpeed = 5.00f;
    this->GroundCheckHeightTop = 60.00f;
    this->GroundCheckHeightBottom = 80.00f;
    this->MaxFootUpperHeight = 35.00f;
    this->MaxFootUpperHeightRun = 35.00f;
    this->MaxFootUpperHeightSprint = 35.00f;
    this->MaxFootUnderHeight = 40.00f;
    this->MaxFootUnderHeightRun = 20.00f;
    this->MaxFootUnderHeightSprint = 5.00f;
    this->MaxFootUnderHeightAjito = 10.00f;
    this->MaxFootHeightDiff = 25.00f;
    this->MaxFootHeightDiffSlopeUp = 40.00f;
    this->MaxFootHeightDiffSlopeDown = 60.00f;
    this->IgnoreInterpFootRange = 3.00f;
    this->FootIKBlendRate = 0.00f;
    this->_MeshOffset = 0.00f;
}

