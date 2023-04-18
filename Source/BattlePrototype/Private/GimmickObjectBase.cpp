#include "GimmickObjectBase.h"
#include "Components/BoxComponent.h"

void AGimmickObjectBase::UpdateOpenValueInOpening(float DelataSeconds) {
}

void AGimmickObjectBase::UpdateOpenValueInClosing(float DelataSeconds) {
}

void AGimmickObjectBase::SetGimmickStatus(EGimmickObjectStatus Status) {
}

void AGimmickObjectBase::SetBlockerCollision(bool Enable) {
}

EGimmickObjectStatus AGimmickObjectBase::GetGimmickStatus() {
    return EGimmickObjectStatus::GIMMICK_STATUS_NONE;
}

AGimmickObjectBase::AGimmickObjectBase() {
    this->Blocker = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
    this->OpenValue = 0.00f;
    this->OpenThreshold = 1.00f;
    this->OpenCloseTime = 1.00f;
}

