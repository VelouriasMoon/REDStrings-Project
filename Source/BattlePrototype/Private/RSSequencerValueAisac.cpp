#include "RSSequencerValueAisac.h"

class UAtomComponent;

void URSSequencerValueAisac::SetParameter(UAtomComponent* AtomComponent, const FString& Name, float Start, float End, float Timer) {
}

URSSequencerValueAisac::URSSequencerValueAisac() {
    this->Component = NULL;
    this->StartValue = 0.00f;
    this->EndValue = 0.00f;
}

