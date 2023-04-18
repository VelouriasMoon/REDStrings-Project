#include "IceConditionComponent.h"

UIceConditionComponent::UIceConditionComponent() {
    this->_iceActionSpeedRate = 0.01f;
    this->_iceDamageRate = 1.50f;
    this->_pIceBeginSound = NULL;
    this->_pIceEndSound = NULL;
    this->_pEffectActor = NULL;
}

