#include "MoveInputComponent.h"

void UMoveInputComponent::UpdateMoveInputVector(float axisValueX, float axisValueY) {
}

void UMoveInputComponent::SetFixCamera(bool bFix) {
}

bool UMoveInputComponent::IsInputOverLimit(float limitRate) const {
    return false;
}

bool UMoveInputComponent::IsFixCamera() const {
    return false;
}

FVector UMoveInputComponent::GetMoveInputVector() const {
    return FVector{};
}

float UMoveInputComponent::GetMoveInputLengthTriggerLimit() const {
    return 0.0f;
}

FVector UMoveInputComponent::GetMoveInputDir() const {
    return FVector{};
}

FVector UMoveInputComponent::GetLatestEnableInputWorldVector() const {
    return FVector{};
}

FVector UMoveInputComponent::GetLatestEnableInputVector() const {
    return FVector{};
}

FVector UMoveInputComponent::GetLatestEnableInputDir() const {
    return FVector{};
}

void UMoveInputComponent::ClearInputVector() {
}

FVector UMoveInputComponent::CalcWorldVector(const FVector& Dir) const {
    return FVector{};
}

FVector UMoveInputComponent::CalcInputWorldVector() const {
    return FVector{};
}

UMoveInputComponent::UMoveInputComponent() {
}

