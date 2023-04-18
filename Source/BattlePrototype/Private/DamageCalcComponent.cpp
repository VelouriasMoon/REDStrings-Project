#include "DamageCalcComponent.h"

void UDamageCalcComponent::SetDifficultyDamageRate(HCGameDifficulty Difficulty, FDifficultyDamageRate Rate) {
}

int32 UDamageCalcComponent::CalcDamageValue(const FHCHitResult& HitResult, bool IsGuard, bool IsRandom, bool IsArmor) const {
    return 0;
}

UDamageCalcComponent::UDamageCalcComponent() {
    this->DAMAGE_FACTOR = 1.00f;
    this->OBJECT_DAMAGE_FACTOR = 1.00f;
    this->FIRE_DAMAGE_FACTOR = 1.00f;
    this->ELECTRIC_DAMAGE_FACTOR = 1.00f;
    this->RANDOM_FACTOR_MIN = 5.00f;
    this->RANDOM_FACTOR_MAX = 70.00f;
    this->CRITICAL_FACTOR = 1.20f;
    this->CRITICAL_CRASH_FACTOR = 2.50f;
    this->CRITICAL_FACTOR_STEALTH = 1.50f;
    this->CRITICAL_CRASH_FACTOR_STEALTH = 2.50f;
    this->CRITICAL_FACTOR_STEALTH_VS = 1.20f;
    this->CRITICAL_CRASH_FACTOR_STEALTH_VS = 1.20f;
    this->CRITICAL_FACTOR_ASSASSIN_VS = 1.50f;
    this->CRITICAL_CRASH_FACTOR_ASSASSIN_VS = 2.50f;
    this->CRITICAL_FACTOR_ASSASSIN_ND_VS = 1.50f;
    this->CRITICAL_CRASH_FACTOR_ASSASSIN_ND_VS = 2.50f;
    this->BAD_STATE_UP_FACTOR = 1.20f;
    this->BAD_STATE_DOWN_FACTOR = 0.80f;
    this->CRASH_FACTIR = 1.00f;
    this->ARMOR_DAMAGE_UP_FACTOR = 1.50f;
    this->COPY_PSYCHIC_ARMOR_FACTOR = 10.00f;
    this->PSYCHICFIELD_DAMAGE_FACTOR_BOSS = 1.00f;
}

