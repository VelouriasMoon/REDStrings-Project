#include "AnimNotifyState_RSTrail.h"

UAnimNotifyState_RSTrail::UAnimNotifyState_RSTrail() {
    this->bPlayerCopyMode = false;
    this->bIgnoreOriginal = false;
    this->bIgnoreCopy = false;
    this->ComponentClass = NULL;
    this->Ignore = false;
    this->ParticleComponentManager = NULL;
    this->WidthScale = 1.00f;
    this->FadeOutStart = 1.00f;
    this->FadeOutMaterialScalarName = TEXT("TrailAlpha");
    this->OptionSeeThrough = false;
    this->DilationOwner = ESequencerDilationOwner::Dilation_None;
    this->IsRegistToChara = false;
    this->IsInterruptTelepo = false;
}

