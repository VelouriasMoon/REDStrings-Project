#include "PreventDamageMotionComponent.h"

void UPreventDamageMotionComponent::ResetGuardValue() {
}

void UPreventDamageMotionComponent::ReduceGuard(int32 reducedValue) {
}

bool UPreventDamageMotionComponent::IsGuardBreak() const {
    return false;
}

float UPreventDamageMotionComponent::GetGuardValue() const {
    return 0.0f;
}

UPreventDamageMotionComponent::UPreventDamageMotionComponent() {
    this->_maxGuardValue = 0;
    this->_guardRecoverStartSec = 0.00f;
    this->_recoverGuardPerSec = 10.00f;
    this->_guardBreakMinSec = 1.00f;
    this->_guardBreakMaxSec = 4.00f;
    this->_guardValue = 0.00f;
    this->_guardReduceCount = 0;
    this->_guardBreakCount = 0;
    this->_guardBreakStartTime = 0.00f;
}

