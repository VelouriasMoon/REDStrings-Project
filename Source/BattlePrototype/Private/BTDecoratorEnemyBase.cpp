#include "BTDecoratorEnemyBase.h"

UBTDecoratorEnemyBase::UBTDecoratorEnemyBase() {
    this->_AIOwner = NULL;
    this->_ActorOwner = NULL;
    this->_EnemyScript = NULL;
    this->bCheckConditionOnlyBlackBoardChanges = false;
    this->bIsObservingBB = false;
}

