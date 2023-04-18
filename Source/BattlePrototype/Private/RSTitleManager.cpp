#include "RSTitleManager.h"

class USaveLoadScreenParamManager;

void ARSTitleManager::TitleToLogojump() {
}


bool ARSTitleManager::SystemSaveDataErrorCheck() {
    return false;
}




void ARSTitleManager::SetSaveLoadScreenParam(USaveLoadScreenParamManager* SaveLoad, USaveLoadScreenParamManager* AutoSave) {
}





bool ARSTitleManager::SaveDataErrorCheck(ETitleSaveCheck CheckType) {
    return false;
}





bool ARSTitleManager::isValidUser() {
    return false;
}

bool ARSTitleManager::isTitleBackStatic() const {
    return false;
}



bool ARSTitleManager::isSaveData() {
    return false;
}




bool ARSTitleManager::isGameClearData() {
    return false;
}

bool ARSTitleManager::isFirstFlow() {
    return false;
}

bool ARSTitleManager::isEnding() {
    return false;
}

bool ARSTitleManager::IsEndGeneralChoice() {
    return false;
}

bool ARSTitleManager::isClearEXNewRelease() {
    return false;
}

bool ARSTitleManager::isClearData() {
    return false;
}

bool ARSTitleManager::isClearChara(int32 slotNo, bool& yuito, bool& kasane) {
    return false;
}

bool ARSTitleManager::isChapterZeroCrear() {
    return false;
}

void ARSTitleManager::InitializeSaveSlotSetting() {
}

void ARSTitleManager::InitializeAutoSaveSlotSetting() {
}





ARSTitleManager::ARSTitleManager() {
    this->m_paFirstFlowFonts[0] = NULL;
    this->m_paFirstFlowFonts[1] = NULL;
    this->m_paFirstFlowFonts[2] = NULL;
    this->m_paFirstFlowFonts[3] = NULL;
    this->m_pMultiLanguageTextData = NULL;
    this->UserParamManager = NULL;
    this->m_pRSHudBase = NULL;
    this->DatabaseManager = NULL;
    this->m_pGameInstance = NULL;
    this->m_pSaveSystem = NULL;
    this->m_pSaveGame = NULL;
    this->m_pAutoSave = NULL;
    this->m_pSaveLoadParamManager = NULL;
    this->m_pAutoSaveLoadParamManager = NULL;
    this->m_pSaveLoadSystemParamManager = NULL;
    this->TitleSequencer = NULL;
}

