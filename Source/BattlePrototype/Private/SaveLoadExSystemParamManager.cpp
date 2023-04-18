#include "SaveLoadExSystemParamManager.h"

void USaveLoadExSystemParamManager::SetSASCutin(ESASCutin Value) {
}

void USaveLoadExSystemParamManager::SetLetterSize(ELetterSize Value) {
}

void USaveLoadExSystemParamManager::SetCameraSpeedLockon(uint8 Value) {
}

void USaveLoadExSystemParamManager::SetCameraDistance(ECameraDistance Value) {
}

void USaveLoadExSystemParamManager::SetBehindCameraSpeed(uint8 Value) {
}

void USaveLoadExSystemParamManager::SetAttackDirOrthoLockon(EAttackDirOrthoLockon Value) {
}

void USaveLoadExSystemParamManager::SetAttackDirOrtho(EAttackDirOrtho Value) {
}

ESASCutin USaveLoadExSystemParamManager::GetSASCutin() {
    return ESASCutin::Default;
}

ELetterSize USaveLoadExSystemParamManager::GetLetterSize() {
    return ELetterSize::Default;
}

uint8 USaveLoadExSystemParamManager::GetCameraSpeedLockon() {
    return 0;
}

ECameraDistance USaveLoadExSystemParamManager::GetCameraDistance() {
    return ECameraDistance::Near;
}

uint8 USaveLoadExSystemParamManager::GetBehindCameraSpeed() {
    return 0;
}

EAttackDirOrthoLockon USaveLoadExSystemParamManager::GetAttackDirOrthoLockon() {
    return EAttackDirOrthoLockon::Default;
}

EAttackDirOrtho USaveLoadExSystemParamManager::GetAttackDirOrtho() {
    return EAttackDirOrtho::Default;
}

USaveLoadExSystemParamManager::USaveLoadExSystemParamManager() {
    this->m_AdditionalSystemSave.AddDefaulted(51200);
}

