#include "SprintComponent.h"

void USprintComponent::StartSprint(bool bBattle) {
}

void USprintComponent::SetSprintSpeedRate(float Rate, float BattleRate) {
}

void USprintComponent::SetMaxWalkSpeedRate() {
}

void USprintComponent::SetEventSprint(bool bEnable) {
}

void USprintComponent::ProcessSprint(float DeltaTime) {
}

void USprintComponent::EndSprint() {
}

void USprintComponent::ChangeBattleSprint(bool bBattle) {
}

USprintComponent::USprintComponent() {
    this->_fWalkableFloorAngle = 0.00f;
    this->_isSprinting = false;
    this->_isEndSprinting = false;
    this->_sprintStartSec = 2.00f;
    this->_walkStartTime = 0.00f;
    this->_sprintClaimantName = TEXT("BattlePlayerEx.Sprint");
    this->_maxWalkSpeedRateBySprint = 1.50f;
    this->_maxWalkSpeedRateByBattleSprint = 1.35f;
    this->_sprintCurveAngle = 8.00f;
    this->_sprintBankPow = 0.00f;
    this->_sprintBankBackPow = 0.00f;
}

