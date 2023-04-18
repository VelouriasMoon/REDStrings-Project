#include "AnimNotifyState_RSTimedFootStepEffect.h"

UAnimNotifyState_RSTimedFootStepEffect::UAnimNotifyState_RSTimedFootStepEffect() {
    this->ComponentClass = NULL;
    this->Ignore = false;
    this->LocationType = EAttachLocation::KeepRelativeOffset;
    this->OptionSeeThrough = false;
    this->DilationOwner = ESequencerDilationOwner::Dilation_None;
    this->m_pParticle = NULL;
}

