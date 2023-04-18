#include "RSAtomComponentBase.h"

class UObject;
class USoundAtomCue;

void URSAtomComponentBase::UpdateVolume() {
}

void URSAtomComponentBase::StopSound(float FadeTime, float FadeVolume) {
}

void URSAtomComponentBase::SetSIWAttenuationRate(float AttenuationRate) {
}

void URSAtomComponentBase::SetFadeParam(float FadeTime, float FadeFinishVolume) {
}

void URSAtomComponentBase::RSFadeOut(float FadeTime, float FadeVolume, ESoundActionOnFadeOutEnd actionOnFadeOutEnd) {
}

void URSAtomComponentBase::RSFadeIn(float FadeTime, float FadeVolume) {
}

void URSAtomComponentBase::ResumeSound(float FadeTime, float FadeVolume) {
}

void URSAtomComponentBase::PlaySoundToPad(const UObject* WorldContextObject, USoundAtomCue* NewSound, float StartTime, float FadeTime, float FadeVolume, EFilterCallbackType filterCallbackType) {
}

void URSAtomComponentBase::PlaySound(const UObject* WorldContextObject, USoundAtomCue* NewSound, float StartTime, float FadeTime, float FadeVolume, EFilterCallbackType filterCallbackType) {
}

void URSAtomComponentBase::PauseSound(float FadeTime, float FadeVolume) {
}

void URSAtomComponentBase::Initialize_Implementation() {
}

bool URSAtomComponentBase::GetAisacByName(const FString& ControlName, float& Value) {
    return false;
}

void URSAtomComponentBase::Fade(float DeltaTime) {
}

void URSAtomComponentBase::ChangeFade(float FadeTime) {
}

void URSAtomComponentBase::_OnEndPlayAtom() {
}

URSAtomComponentBase::URSAtomComponentBase() {
    this->CreatorActor = NULL;
    this->bCalcSIWAttenuation = true;
    this->mSoundVolumeScale = 1.00f;
    this->mFadeState = ESoundFadeState::None;
    this->mActionOnFadeOutEnd = ESoundActionOnFadeOutEnd::None;
    this->mFadeTime = 0.00f;
    this->mFadeTimer = 0.00f;
    this->mFadeVolume = 0.00f;
    this->mFadeStartVolume = 0.00f;
    this->mFadeFinishVolume = 0.00f;
    this->mSIWAttenuationRate = 1.00f;
    this->mSkipAtSequencer = false;
}

