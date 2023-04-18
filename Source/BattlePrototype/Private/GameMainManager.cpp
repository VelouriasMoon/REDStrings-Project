#include "GameMainManager.h"
#include "SaveLoadScreenParamManager.h"

class UTexture2D;
class UTextureRenderTarget2D;


void AGameMainManager::SetSaveDataCapturePicture(UTexture2D* pCapturePic) {
}

void AGameMainManager::SetIsForceAutoSaveEnable(const bool Flag) {
}

void AGameMainManager::SetIsForceAutoSaveDisable(const bool Flag) {
}

void AGameMainManager::SetIsAutoSaveEnable(const bool Flag) {
}

bool AGameMainManager::SaveRetryDataExec() {
    return false;
}

bool AGameMainManager::LoadRetryDataExec() {
    return false;
}

bool AGameMainManager::LoadRetryBattleSimulatorDataExec() {
    return false;
}

bool AGameMainManager::IsForceAutoSaveEnable() {
    return false;
}

bool AGameMainManager::IsForceAutoSaveDisable() {
    return false;
}

bool AGameMainManager::IsAutoSaveEnable() {
    return false;
}

UTexture2D* AGameMainManager::GetSaveDataCapturePicture() {
    return NULL;
}



UTexture2D* AGameMainManager::ConvertTextureRenderTarget2DtoTexture2D(UTextureRenderTarget2D* pSrcRenderTex) {
    return NULL;
}

bool AGameMainManager::AutoSaveExec() {
    return false;
}

bool AGameMainManager::AsyncAutoSaveExec() {
    return false;
}

AGameMainManager::AGameMainManager() {
    this->m_pSaveDataCapturePicture = NULL;
    this->m_pAutoSaveLoadScreenParamManager = CreateDefaultSubobject<USaveLoadScreenParamManager>(TEXT("SaveLoadScreenParamManager"));
    this->m_AutoSaveIntervalTime = 0.00f;
    this->m_isAutoSaveEnable = true;
    this->m_isAsyncAutoSaveRequest = false;
    this->m_AsyncAutoSaveClass = NULL;
    this->m_isForceAutoSaveEnable = false;
    this->m_isForceAutoSaveDisable = false;
}

