#include "RSAjitoAnimInstance.h"

class AAjitoMember;
class UAnimSequenceBase;

void URSAjitoAnimInstance::WaitTransitionToTalk(float WaitTime) {
}

void URSAjitoAnimInstance::WaitTransitionToIdle(float WaitTime) {
}

bool URSAjitoAnimInstance::StartTalking_Implementation() {
    return false;
}

void URSAjitoAnimInstance::SetIsLookAt(bool NewIsLookAt) {
}

void URSAjitoAnimInstance::SetEyeControlParameter(float Horizontal, float Vertical) {
}

void URSAjitoAnimInstance::SetEyeControlEnable(bool bEnable, FName ClaimantName) {
}

bool URSAjitoAnimInstance::IsWaitTransitionToTalk() const {
    return false;
}

bool URSAjitoAnimInstance::IsWaitTransitionToIdle() const {
    return false;
}

bool URSAjitoAnimInstance::InitializeInstance_Implementation(FAjitoMemberInfo Info) {
    return false;
}

AAjitoMember* URSAjitoAnimInstance::GetOwningAjitoMember() const {
    return NULL;
}

FName URSAjitoAnimInstance::GetCurrentASNodeAssetName() const {
    return NAME_None;
}

UAnimSequenceBase* URSAjitoAnimInstance::GetCurrentASNodeAnimSequence() const {
    return NULL;
}

bool URSAjitoAnimInstance::EndTalking_Implementation() {
    return false;
}

void URSAjitoAnimInstance::ClearWaitTransitionToTalk() {
}

void URSAjitoAnimInstance::ClearWaitTransitionToIdle() {
}

URSAjitoAnimInstance::URSAjitoAnimInstance() {
    this->IsWaitStateTransition = false;
    this->IsReadyToTransitionIdle = false;
    this->IsReadyToTransitionTalk = true;
    this->IsLookAtInTalking = false;
    this->IsLookAt = false;
    this->UseOverrideAnim = false;
    this->IsToTalkWaiting = false;
    this->IsToIdleWaiting = false;
    this->CurrentState = EAjitoMemberState::Invalid;
    this->RequestedState = EAjitoMemberState::Invalid;
    this->IdleState = EAjitoMemberIdleStateType::AJITOSTATE_IDLE;
    this->TalkState = EAjitoMemberTalkStateType::AJITOSTATE_TALK_LOOP;
    this->OverrideAnim = NULL;
    this->AnimationSet = NULL;
    this->EyeHorizontal = 0.00f;
    this->EyeVertical = 0.00f;
    this->EyeBlendRate = 0.00f;
    this->IsChangeStateImmediate = false;
    this->IsResetState = false;
    this->IsStartState = false;
    this->IsIdleOnlyAction = false;
    this->NextAnimNo = 0;
    this->IsPresentEvent = false;
    this->IsBoxNoDisp = false;
    this->UseKawaiiPhysics = true;
    this->FacialBlendWeight = 1.00f;
}

