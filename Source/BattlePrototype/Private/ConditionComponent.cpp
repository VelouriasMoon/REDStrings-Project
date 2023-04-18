#include "ConditionComponent.h"

class UConditionComponent;

void UConditionComponent::SetFreeze(bool Flag) {
}

void UConditionComponent::OnInterval_Implementation() {
}

void UConditionComponent::OnEndCondition_Implementation() {
}

void UConditionComponent::OnBeginCondition_Implementation() {
}

bool UConditionComponent::IsStateCondition_Implementation() const {
    return false;
}

bool UConditionComponent::IsActiveCondition() const {
    return false;
}

ConditionKind UConditionComponent::GetConditionKind_Implementation() const {
    return ConditionKind::Flames;
}

void UConditionComponent::FinishCondition() {
}

void UConditionComponent::ClearAccumulation() {
}

ConditionExclusionKind UConditionComponent::CheckExclusion_Implementation(const UConditionComponent* Other) const {
    return ConditionExclusionKind::None;
}

void UConditionComponent::Accumulate(float Value, bool IsGuard) {
}

UConditionComponent::UConditionComponent() {
    this->_accumulationLimit = 100.00f;
    this->_accumulationAddedScale = 1.00f;
    this->_cureAccumulation = 0.00f;
    this->_conditionAutoEndSec = 5.00f;
    this->_intervalSec = 0.50f;
}

