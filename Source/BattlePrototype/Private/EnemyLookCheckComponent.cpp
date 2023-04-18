#include "EnemyLookCheckComponent.h"

void UEnemyLookCheckComponent::SetRayPos2(const FVector& MainStart, const FVector& MainEnd, const FVector& TargetStart, const FVector& TargetEnd) {
}

void UEnemyLookCheckComponent::SetRayPos(FVector Start, FVector End) {
}

bool UEnemyLookCheckComponent::IsLookTarget() const {
    return false;
}

bool UEnemyLookCheckComponent::IsLookMain() const {
    return false;
}

bool UEnemyLookCheckComponent::GetFailedLook() {
    return false;
}

void UEnemyLookCheckComponent::EndLookCheck() {
}

void UEnemyLookCheckComponent::BeginLookCheck() {
}

UEnemyLookCheckComponent::UEnemyLookCheckComponent() {
}

