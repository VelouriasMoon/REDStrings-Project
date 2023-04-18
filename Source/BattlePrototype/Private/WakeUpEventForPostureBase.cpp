#include "WakeUpEventForPostureBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

void AWakeUpEventForPostureBase::Setup() {
}


AWakeUpEventForPostureBase::AWakeUpEventForPostureBase() {
    this->isDoBeginPlay = false;
    this->EventBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("EventHit"));
    this->isInnerRange = false;
    this->eventStartWaitTime = 10.00f;
    this->directionAcceptRange = 10.00f;
    this->moveAcceptRange = 20.00f;
    this->conditionEnableElapsedTime = 0.00f;
}

