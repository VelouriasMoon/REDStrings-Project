#include "FlamesConditionComponent.h"

UFlamesConditionComponent::UFlamesConditionComponent() {
    this->_intervalDamagePercent = 1.00f;
    this->_pAttackedComp = NULL;
    this->_pEffectComp = NULL;
}

