#include "GimmickHorrorBase.h"

AGimmickHorrorBase::AGimmickHorrorBase() {
    this->Type = EGimmickHorrorType::GIMMICK_HORROR_TYPE_DISTANCE;
    this->TriggerRadius = 1000.00f;
    this->HasActioned = false;
    this->IsDrawDebug = false;
}

