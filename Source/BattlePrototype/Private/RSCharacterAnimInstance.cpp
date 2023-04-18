#include "RSCharacterAnimInstance.h"

class UAnimMontage;

float URSCharacterAnimInstance::GetCurrentASNodeAssetTime() const {
    return 0.0f;
}

float URSCharacterAnimInstance::GetCurrentASNodeAssetPlayRate() const {
    return 0.0f;
}

float URSCharacterAnimInstance::GetCurrentASNodeAssetLength() const {
    return 0.0f;
}

UAnimMontage* URSCharacterAnimInstance::GetAnimMontageFromSlot(FName SlotName) {
    return NULL;
}

void URSCharacterAnimInstance::ForceStopAllMontage(float BlendOut) {
}

bool URSCharacterAnimInstance::DebugIsCurrentASNodeRootMotion() const {
    return false;
}

FName URSCharacterAnimInstance::DebugGetCurrentASNodeAssetName() const {
    return NAME_None;
}

URSCharacterAnimInstance::URSCharacterAnimInstance() {
}

