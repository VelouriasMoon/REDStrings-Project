#include "PlayerDamageReactionInfoBase.h"

void UPlayerDamageReactionInfoBase::UpdateDamageReactionCPP(const FHCHitResult& HitResult) {
}



bool UPlayerDamageReactionInfoBase::IsKnockbackLongNowCPP() {
    return false;
}

bool UPlayerDamageReactionInfoBase::IsExistDamageCPP() const {
    return false;
}

bool UPlayerDamageReactionInfoBase::IsAttackerPlayerCPP() {
    return false;
}

bool UPlayerDamageReactionInfoBase::IsAerialDamageCPP() const {
    return false;
}


bool UPlayerDamageReactionInfoBase::CheckBadStateDamageCPP(int32 Flag, EHCBadState BadState) {
    return false;
}


UPlayerDamageReactionInfoBase::UPlayerDamageReactionInfoBase() {
    this->OwnerCharacter = NULL;
    this->OwnerPlayerScript = NULL;
    this->damageKind = EPlayerDamageKind::None;
    this->DamageKindNow = EPlayerDamageKind::None;
    this->bAddDamage = false;
    this->HitStopCauseType = HCHitStopCauseType::Default;
    this->FloatingPower = 0.00f;
    this->AttackType = HCSkillAttackType::Default;
    this->BadStateFlag = 0;
}

