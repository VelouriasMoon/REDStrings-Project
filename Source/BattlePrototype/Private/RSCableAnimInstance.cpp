#include "RSCableAnimInstance.h"

void URSCableAnimInstance::Update(float DeltaSeconds) {
}

void URSCableAnimInstance::SetState(ERSCableAnimationState State) {
}

void URSCableAnimInstance::SetBoneParam(const FCableAdditiveBoneParam& Param) {
}

void URSCableAnimInstance::SetActive(bool NewActive) {
}



URSCableAnimInstance::URSCableAnimInstance() {
    this->TimeDilation = 0.00f;
    this->IdleRigidBlendSpeed = 1.00f;
    this->IdleRigidBlendRate = 0.00f;
    this->BoneNum = 1;
    this->AnimationState = ERSCableAnimationState::Normal;
    this->RigidIdlingSec = -1.00f;
}

