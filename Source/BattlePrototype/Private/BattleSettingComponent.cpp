#include "BattleSettingComponent.h"

void UBattleSettingComponent::SetAttackExPsychicRateForArmor(float Value) {
}

float UBattleSettingComponent::GetWinceAccumationStopSeconds() const {
    return 0.0f;
}

float UBattleSettingComponent::GetKnockBackAccumationStopSeconds() const {
    return 0.0f;
}

int32 UBattleSettingComponent::GetEnemyLockOnMax() const {
    return 0;
}

int32 UBattleSettingComponent::GetEnemyAttackActionMax() const {
    return 0;
}

float UBattleSettingComponent::GetDownAccumationStopSeconds() const {
    return 0.0f;
}

float UBattleSettingComponent::GetAttackExPsychicRateForArmor() {
    return 0.0f;
}

UBattleSettingComponent::UBattleSettingComponent() {
    this->AttackExPsychicRateForArmor = 1.00f;
    this->EnemyLockOnMax = 2;
    this->EnemyAttackActionMax = 1;
    this->WinceAccumulationStopSeconds = 0.00f;
    this->KnockBackAccumulationStopSeconds = 0.00f;
    this->DownAccumulationStopSeconds = 0.00f;
}

