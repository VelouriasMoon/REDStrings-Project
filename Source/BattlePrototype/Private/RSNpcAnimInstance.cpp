#include "RSNpcAnimInstance.h"

class UAnimSequenceBase;

void URSNpcAnimInstance::SetNpcIdleAnimation(UAnimSequenceBase* IdleAnimation) {
}

void URSNpcAnimInstance::SetIsLookAt(bool NewIsLookAt) {
}

void URSNpcAnimInstance::SetAnimationForce_Implementation(ENpcAnimationKind AnimKind) {
}

void URSNpcAnimInstance::SetAnimation_Implementation(ENpcAnimationKind AnimKind) {
}

UAnimSequenceBase* URSNpcAnimInstance::GetAnimSequenceFromAnimationSet(const FName& Key) {
    return NULL;
}

URSNpcAnimInstance::URSNpcAnimInstance() {
    this->IsNewTownPeople = false;
    this->AnimationSet = NULL;
    this->FacialAnimation = NULL;
    this->NpcAnimKind = ENpcAnimationKind::NPCANIM_IDLE;
    this->IsLookAt = false;
    this->IsSit = false;
    this->UseKawaiiPhysics = true;
    this->EyeXAxisValue = 0.00f;
    this->EyeYAxisValue = 0.00f;
    this->StartTime = -1.00f;
}

