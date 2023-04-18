#include "PlayerAnimControllerComponent.h"

class AActor;
class UAnimMontage;
class UPlayerAnimControllerComponent;
class URequestParticleEffectArgs;

void UPlayerAnimControllerComponent::UpdateWalkSpeed(float DeltaSeconds) {
}

void UPlayerAnimControllerComponent::SetUpperAction(bool bSet) {
}

void UPlayerAnimControllerComponent::SetupAnimBP() {
}

void UPlayerAnimControllerComponent::SetUniquePsychicAim(bool bFlag) {
}

void UPlayerAnimControllerComponent::SetTalkMode(bool bTalk) {
}

void UPlayerAnimControllerComponent::SetRigidbodyAlpha(float Alpha, float LerpTime) {
}

void UPlayerAnimControllerComponent::SetLeftStickPower(float Power, float prevDiff) {
}

void UPlayerAnimControllerComponent::SetBattleEm1500(bool bBattle) {
}

void UPlayerAnimControllerComponent::SetAjitoFlag(bool bAjito) {
}

void UPlayerAnimControllerComponent::SetAimRotator(FRotator Rotator) {
}

void UPlayerAnimControllerComponent::RequestStep(FVector StepDirection, EPlayerAnimDir Dir, int32 Param, bool bFlying) {
}

void UPlayerAnimControllerComponent::RequestBattleIdle(bool IsStart) {
}

void UPlayerAnimControllerComponent::RequestAttack(UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName) {
}

void UPlayerAnimControllerComponent::RequestAnim(PlayerAnimKind kind, int32 Param, bool bFlying) {
}

void UPlayerAnimControllerComponent::ReceiveNotifyInputPsychic(bool bEnable) {
}

void UPlayerAnimControllerComponent::ReceiveNotifyInputDodge(bool bEnable) {
}

void UPlayerAnimControllerComponent::ReceiveNotifyInputAttack(bool bEnable) {
}

void UPlayerAnimControllerComponent::ReceiveNotifyEnableWeaponCharge(bool bEnable, FName ClaimantName) {
}

void UPlayerAnimControllerComponent::ReceiveNotifyEnableWalkStop(bool bEnable, FName ClaimantName) {
}

void UPlayerAnimControllerComponent::ReceiveNotifyEnablePsychicEx(bool bEnable, FName ClaimantName) {
}

void UPlayerAnimControllerComponent::ReceiveNotifyEnablePsychic(bool bEnable, FName ClaimantName) {
}

void UPlayerAnimControllerComponent::ReceiveNotifyEnableMove(bool bEnable, FName ClaimantName) {
}

void UPlayerAnimControllerComponent::ReceiveNotifyEnableBrainCrash(bool bEnable, FName ClaimantName) {
}

void UPlayerAnimControllerComponent::ReceiveNotifyEnableAttack(bool bEnable, bool bNotComboEnd, FName ClaimantName) {
}

void UPlayerAnimControllerComponent::ReceiveNotifyEnableAirJump(bool bEnable, FName ClaimantName) {
}

void UPlayerAnimControllerComponent::ReceiveNotifyEnableAction(bool bEnable, FName ClaimantName) {
}

void UPlayerAnimControllerComponent::OnRequestParticleEffect(URequestParticleEffectArgs* Args) {
}

void UPlayerAnimControllerComponent::OnMontageStarted(UAnimMontage* Montage) {
}

void UPlayerAnimControllerComponent::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UPlayerAnimControllerComponent::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

void UPlayerAnimControllerComponent::OnChangeWalkRunStateKind(PlayerWalkRunStateKind NewKind) {
}

void UPlayerAnimControllerComponent::OnChangeAnimKind(PlayerAnimKind NewAnimKind, PlayerAnimKind OldAnimKind) {
}

bool UPlayerAnimControllerComponent::IsUpperAction() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsRunningAnimStateForAIMove() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsPsychicCaptureNoMotionAction() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsNotifyInputPsychic() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsNotifyInputDodge() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsNotifyInputAttack() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsNotifyEnableWeaponCharge() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsNotifyEnableWalkStop() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsNotifyEnablePsychicEx() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsNotifyEnablePsychic() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsNotifyEnableMove() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsNotifyEnableBrainCrash() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsNotifyEnableAttackOptionNotComboEnd() {
    return false;
}

bool UPlayerAnimControllerComponent::IsNotifyEnableAttack() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsNotifyEnableAirJump() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsNotifyEnableAction() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsExistAnimRequest() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsCheckIdle() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAttackInputAccept(int32 AttackId) const {
    return false;
}

bool UPlayerAnimControllerComponent::IsASNodePlayEnd() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsASAnimPlayEnd(PlayerAnimKind kind) const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAnimStepEnd() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAnimStep() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAnimStartBattle() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAnimSprint() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAnimSideStep() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAnimPsychic() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAnimLand() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAnimKind(PlayerAnimKind kind) const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAnimJump() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAnimIdleWalkRun() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAnimFall() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAnimEndBattle() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAnimDead() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAnimDamage() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAnimBrake() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAnimAttack() const {
    return false;
}

bool UPlayerAnimControllerComponent::IsAnimAnyAttack() const {
    return false;
}

PlayerWalkRunStateKind UPlayerAnimControllerComponent::GetWalkRunStateKind() const {
    return PlayerWalkRunStateKind::Idle;
}

float UPlayerAnimControllerComponent::GetWalkRunMoveScale() const {
    return 0.0f;
}

float UPlayerAnimControllerComponent::GetRigidbodyAlpha() {
    return 0.0f;
}

UPlayerAnimControllerComponent* UPlayerAnimControllerComponent::GetPlayerAnimControllerComponentFromActor(AActor* Actor) {
    return NULL;
}

float UPlayerAnimControllerComponent::GetBaseWalkSpeed() const {
    return 0.0f;
}

void UPlayerAnimControllerComponent::ClearAllCancelFlag() {
}

void UPlayerAnimControllerComponent::BeginPlayPublic() {
}

UPlayerAnimControllerComponent::UPlayerAnimControllerComponent() {
    this->_SprintWalkSpeedRate = 1.50f;
    this->WALK_SPEED = 0.30f;
    this->RUN_SPEED = 0.80f;
    this->AJITO_RUN_SPEED = 0.50f;
    this->RUN_TO_WALK_DELAY = 0.20f;
    this->RUN_TO_WALK_INTERP = 0.30f;
    this->WALK_TO_RUN_INTERP = 0.15f;
    this->WALK_TO_RUN_INTERP_TOWN = 0.30f;
    this->DISABLE_TOWN_RUN_TIMER = 0.20f;
}

