#include "SequencerParticle.h"
#include "RSParticleSystemComponentBase.h"

class UActorComponent;

void ASequencerParticle::SetupAttachInstanceParameter() {
}

void ASequencerParticle::OnActivated(UActorComponent* Component, bool bReset) {
}

ASequencerParticle::ASequencerParticle() {
    this->WarmupTime = 0.00f;
    this->AttachSocketRotationOffMode = ERSParticleSystemAttachRotationOffMode::RotationOffComponent;
    this->DilationOwner = ESequencerDilationOwner::Dilation_MainPlayer;
    this->ParticleSystemComponent = CreateDefaultSubobject<URSParticleSystemComponentBase>(TEXT("ParticleComponent"));
}

