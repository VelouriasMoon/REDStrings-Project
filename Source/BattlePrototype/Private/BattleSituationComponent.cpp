#include "BattleSituationComponent.h"

void UBattleSituationComponent::OnAction_Implementation(FActionParameter Parameter) {
}


EBattleSituationType UBattleSituationComponent::GetSituation() const {
    return EBattleSituationType::Normal;
}

void UBattleSituationComponent::ChangeSituation(EBattleSituationType Type) {
}

UBattleSituationComponent::UBattleSituationComponent() {
    this->IgnoreChangeSituationRemainTimer = 0.00f;
    this->NormalSituationRemainTimer = 0.00f;
    this->IgnoreChangeSituationTime = 2.00f;
    this->ChangeSituationTime = 3.00f;
    this->SituationType = EBattleSituationType::Normal;
}

