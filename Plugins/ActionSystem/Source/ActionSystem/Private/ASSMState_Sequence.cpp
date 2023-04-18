#include "ASSMState_Sequence.h"

UASSMState_Sequence::UASSMState_Sequence() {
    this->PlayRate = 1.00f;
    this->bLoop = false;
    this->GroupIndex = -1;
    this->GroupRole = EAnimGroupRole::CanBeLeader;
    this->StateMachineResetSecond = -1.00f;
    this->StateMachineResetSecondMargin = 0.50f;
    this->StateMachineResetMontageRateScale = 1.00f;
}

