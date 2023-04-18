#include "ASSMTransitionNode.h"

UASSMTransitionNode::UASSMTransitionNode() {
    this->PriorityOrder = 1;
    this->Bidirectional = false;
    this->TransitionRule = TR_PlayEnd;
    this->bNotEqual = false;
    this->MovementMode = MOVE_Walking;
    this->CustomMovementMode = 0;
    this->Blueprint = NULL;
    this->Custom = NULL;
    this->CrossfadeDuration = 0.20f;
    this->BlendMode = EAlphaBlendOption::HermiteCubic;
    this->CustomBlendCurve = NULL;
    this->bSyncTime = false;
    this->StartTime = 0.00f;
    this->InterruptNotify = NULL;
    this->PreviousState = NULL;
    this->NextState = NULL;
}

