#include "SoundVolumeController.h"

void USoundVolumeController::SetResumeFromMuteAll() {
}

void USoundVolumeController::SetRestertFadeAll() {
}

void USoundVolumeController::SetMuteAll() {
}

void USoundVolumeController::SetInGameVolumeByCategoryName(ESoundCategory Category, float DestVol) {
}

void USoundVolumeController::SetInGameVolumeAll(float DestVol) {
}

void USoundVolumeController::SetFadeByCategoryName(ESoundCategory Category, float FadeTime, float DestVol) {
}

void USoundVolumeController::SetFadeAllCategory(float FadeTime, float DestVol) {
}

void USoundVolumeController::SetExitFadeAll() {
}

void USoundVolumeController::SetConfigVolumeByCategoryName(ESoundCategory Category, float DestVol) {
}

void USoundVolumeController::Initialize() {
}

void USoundVolumeController::Finalize() {
}

float USoundVolumeController::_GetPassedTimeByCategoryName(ESoundCategory Category) {
    return 0.0f;
}

float USoundVolumeController::_GetNowVolumeByCategoryName(ESoundCategory Category) {
    return 0.0f;
}

bool USoundVolumeController::_GetIsTick() {
    return false;
}

bool USoundVolumeController::_GetIsFadeByCategoryName(ESoundCategory Category) {
    return false;
}

float USoundVolumeController::_GetInGameVolumeByCategoryName(ESoundCategory Category) {
    return 0.0f;
}

float USoundVolumeController::_GetFadeTimeByCategoryName(ESoundCategory Category) {
    return 0.0f;
}

float USoundVolumeController::_GetDestVolumeByCategoryName(ESoundCategory Category) {
    return 0.0f;
}

float USoundVolumeController::_GetConfigVolumeByCategoryName(ESoundCategory Category) {
    return 0.0f;
}

float USoundVolumeController::_GetAcfVolumeByCategoryName(ESoundCategory Category) {
    return 0.0f;
}

USoundVolumeController::USoundVolumeController() {
    this->m_MasterVolume = 0.73f;
    this->m_IsFadeExitting = false;
}

