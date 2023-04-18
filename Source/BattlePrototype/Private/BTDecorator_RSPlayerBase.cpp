#include "BTDecorator_RSPlayerBase.h"

UBTDecorator_RSPlayerBase::UBTDecorator_RSPlayerBase() {
    this->_AIOwner = NULL;
    this->_PlayerScript = NULL;
    this->bCheckConditionOnlyBlackBoardChanges = false;
    this->bIsObservingBB = false;
}

