#include "SaveLoadParamClassManager.h"
#include "SaveLoadArrangeItemManager.h"
#include "SaveLoadEnemyParamManager.h"
#include "SaveLoadExSystemParamManager.h"
#include "SaveLoadPlayerParamManager.h"
#include "SaveLoadSystemParamManager.h"

class URSGameInstance;

void USaveLoadParamClassManager::SetSaveParamToGameParam_ScenarioFlag(const URSGameInstance* gameInst) {
}

void USaveLoadParamClassManager::SetSaveParamToGameParam(const URSGameInstance* gameInst) {
}

void USaveLoadParamClassManager::SetIsLoadExecution(const bool Flag) {
}

void USaveLoadParamClassManager::SetGameInstance(URSGameInstance* gameInst) {
}

bool USaveLoadParamClassManager::IsLoadExecution() {
    return false;
}

USaveLoadSystemParamManager* USaveLoadParamClassManager::GetSaveLoadSystemParamManager() {
    return NULL;
}

USaveLoadPlayerParamManager* USaveLoadParamClassManager::GetSaveLoadPlayerParamManager() {
    return NULL;
}

USaveLoadExSystemParamManager* USaveLoadParamClassManager::GetSaveLoadExSystemParamManager_Trial2LoadOnly() {
    return NULL;
}

USaveLoadExSystemParamManager* USaveLoadParamClassManager::GetSaveLoadExSystemParamManager() {
    return NULL;
}

USaveLoadEnemyParamManager* USaveLoadParamClassManager::GetSaveLoadEnemyParamManager() {
    return NULL;
}

USaveLoadArrangeItemManager* USaveLoadParamClassManager::GetSaveLoadArrangeItemManager() {
    return NULL;
}

USaveLoadParamClassManager::USaveLoadParamClassManager() {
    this->m_isLoadExecution = false;
    this->m_pSaveLoadSystemParamManager = CreateDefaultSubobject<USaveLoadSystemParamManager>(TEXT("SaveLoadSystemParamManager"));
    this->m_pSaveLoadPlayerParamManager = CreateDefaultSubobject<USaveLoadPlayerParamManager>(TEXT("SaveLoadPlayerParamManager"));
    this->m_pSaveLoadEnemyParamManager = CreateDefaultSubobject<USaveLoadEnemyParamManager>(TEXT("SaveLoadEnemyParamManager"));
    this->m_pSaveLoadArrangeItemManager = CreateDefaultSubobject<USaveLoadArrangeItemManager>(TEXT("SaveLoadArrangeItemManager"));
    this->m_pSaveLoadExSystemParamManager = CreateDefaultSubobject<USaveLoadExSystemParamManager>(TEXT("SaveLoadExSystemParamManager"));
    this->m_pSaveLoadExSystemParamManager_Trial2LoadOnly = CreateDefaultSubobject<USaveLoadExSystemParamManager>(TEXT("SaveLoadExSystemParamManager_Trial2LoadOnly"));
}

