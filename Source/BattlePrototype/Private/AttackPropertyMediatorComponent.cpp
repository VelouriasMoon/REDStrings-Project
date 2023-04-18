#include "AttackPropertyMediatorComponent.h"

class AActor;
class UAttackPropertyMediatorComponent;

void UAttackPropertyMediatorComponent::SetAttackRate(const FName& ClaimantName, float AttackRate) {
}

UAttackPropertyMediatorComponent* UAttackPropertyMediatorComponent::GetAttackPropertyMediator(AActor* Actor) {
    return NULL;
}

UAttackPropertyMediatorComponent* UAttackPropertyMediatorComponent::FindAttackPropertyMediator(AActor* Actor) {
    return NULL;
}

void UAttackPropertyMediatorComponent::ClearAttackRate(const FName& ClaimantName) {
}

float UAttackPropertyMediatorComponent::CalcTotalAttackRate() const {
    return 0.0f;
}

UAttackPropertyMediatorComponent::UAttackPropertyMediatorComponent() {
}

