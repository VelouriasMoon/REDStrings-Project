#include "ASDamageType.h"

UASDamageType::UASDamageType() {
    this->DamagePower = EDamagePower::Light;
    this->bUseDirection = false;
    this->HitStopTimeAttack = 0.00f;
    this->HitStopTimeDamage = 0.00f;
}

