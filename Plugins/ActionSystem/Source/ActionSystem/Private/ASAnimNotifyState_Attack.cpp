#include "ASAnimNotifyState_Attack.h"
#include "ASDamageType.h"

UASAnimNotifyState_Attack::UASAnimNotifyState_Attack() {
    this->DamageType = UASDamageType::StaticClass();
    this->hitCount = 1;
    this->HitInterval = 0.00f;
    this->AttackScale = 1.00f;
    this->WeaponId = -1;
}

