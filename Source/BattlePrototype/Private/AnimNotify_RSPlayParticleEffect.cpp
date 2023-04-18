#include "AnimNotify_RSPlayParticleEffect.h"

UAnimNotify_RSPlayParticleEffect::UAnimNotify_RSPlayParticleEffect() {
    this->ComponentClass = NULL;
    this->Ignore = false;
    this->LocationType = EAttachLocation::KeepRelativeOffset;
    this->OptionSeeThrough = false;
    this->IsRegistToChara = false;
    this->IsInterruptTelepo = false;
    this->SocketRotationOffMode = ERSParticleSystemAttachRotationOffMode::RotationOffComponent;
    this->DilationOwner = ESequencerDilationOwner::Dilation_None;
    this->ParticleComponentManager = NULL;
}

