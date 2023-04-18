#include "RSSequencerValueBase.h"

class UCurveFloat;
class URSSequencerComponent;

void URSSequencerValueBase::StoreParameter_Implementation(float Rate) {
}

void URSSequencerValueBase::SetupTimer(float Time, UCurveFloat* CurveData, bool LoopFlag, bool AutoDestroyFlag) {
}

void URSSequencerValueBase::SetSeqParent(URSSequencerComponent* Parent) {
}

bool URSSequencerValueBase::IsLoop() const {
    return false;
}

bool URSSequencerValueBase::IsFinished_Implementation() const {
    return false;
}

URSSequencerComponent* URSSequencerValueBase::GetSeqParent() {
    return NULL;
}

URSSequencerValueBase::URSSequencerValueBase() {
    this->Curve = NULL;
    this->SeqParent = NULL;
}

