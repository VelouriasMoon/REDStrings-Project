#include "DamagePartCollisionComponent.h"

void UDamagePartCollisionComponent::SetCalcDamageInfo(bool bNoDamage, bool bNoCrash, bool bNoReaction, bool bNoBadStatus) {
}

UDamagePartCollisionComponent::UDamagePartCollisionComponent() {
    this->mParameterNo = 0;
    this->mPartNo = HPartNo::Default;
    this->mIsWeakPoint = false;
    this->mDamageEffectType = HDamageEffectType::Default;
    this->mDamagePriority = 10;
    this->mHitAngle = 360.00f;
    this->mIsBoneEnable = false;
    this->mIsNoDamage = false;
    this->mIsNoCrash = false;
    this->mIsNoReaction = false;
    this->mIsNoBadStatus = false;
}

