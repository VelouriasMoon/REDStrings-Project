#include "StepComponent.h"

void UStepComponent::StartStep(FVector StepDirection, float stepDistanceRate, bool bEnableSprintMomentum) {
}

void UStepComponent::InputStep(FVector StepDirection, float stepDistanceRate, bool bEnableSprintMomentum) {
}

void UStepComponent::EndStep() {
}

FVector UStepComponent::CalcDirectionWorldToActor(FVector worldDir) const {
    return FVector{};
}

UStepComponent::UStepComponent() {
    this->_stepDistanceScale = 1.00f;
    this->_sprintMoveDuration = 0.20f;
    this->_sprintMoveDistance = 50.00f;
}

