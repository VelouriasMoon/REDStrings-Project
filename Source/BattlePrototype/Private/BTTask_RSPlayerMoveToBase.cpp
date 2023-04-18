#include "BTTask_RSPlayerMoveToBase.h"

UBTTask_RSPlayerMoveToBase::UBTTask_RSPlayerMoveToBase() {
    this->AcceptionRadius = 0.00f;
    this->bJumpCheck = false;
    this->bWallBackCheck = false;
    this->bExit = false;
    this->bInputMoveMode = false;
    this->Step = 0;
    this->CheckJumpInterval = 0.00f;
    this->WallTypeCPP = EPlayerAIMoveWallCPP::None;
}

