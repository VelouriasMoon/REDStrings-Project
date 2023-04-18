#include "RSBootManager.h"

void ARSBootManager::SetBootFlow(EBootLevelFlow flow) {
}

bool ARSBootManager::IsExistSaveData() {
    return false;
}

bool ARSBootManager::isCheckStorageSpace() {
    return false;
}

EBootLevelFlow ARSBootManager::GetBootFlow() {
    return EBootLevelFlow::Initialize;
}

ARSBootManager::ARSBootManager() {
    this->m_BootFlow = EBootLevelFlow::Initialize;
    this->m_pRSHudBase = NULL;
    this->m_pSaveGameSystem = NULL;
    this->UserParamManager = NULL;
    this->DatabaseManager = NULL;
    this->m_pSaveLoadSystemParamManager = NULL;
}

