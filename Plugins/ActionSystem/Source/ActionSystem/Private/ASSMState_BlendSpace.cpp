#include "ASSMState_BlendSpace.h"

UASSMState_BlendSpace::UASSMState_BlendSpace() {
    this->PlayRate = 1.00f;
    this->bLoop = false;
    this->GroupIndex = -1;
    this->GroupRole = EAnimGroupRole::CanBeLeader;
}

