#include "AnimNotifyState_RSTimedParticleSystem.h"

UAnimNotifyState_RSTimedParticleSystem::UAnimNotifyState_RSTimedParticleSystem() {
    this->ComponentClass = NULL;
    this->Ignore = false;
    this->LocationType = EAttachLocation::KeepRelativeOffset;
    this->OptionSeeThrough = false;
    this->IsRegistToChara = false;
    this->IsInterruptTelepo = false;
    this->SocketRotationOffMode = ERSParticleSystemAttachRotationOffMode::RotationOffComponent;
    this->DilationOwner = ESequencerDilationOwner::Dilation_None;
}

