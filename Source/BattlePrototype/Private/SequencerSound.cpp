#include "SequencerSound.h"
#include "RSAtomComponentBase.h"

void ASequencerSound::StopSequenceSound(float FadeTime, float FadeVolume) {
}

URSAtomComponentBase* ASequencerSound::GetAtomComponent() {
    return NULL;
}

ASequencerSound::ASequencerSound() {
    this->AtomComponent = CreateDefaultSubobject<URSAtomComponentBase>(TEXT("AtomComponent"));
}

