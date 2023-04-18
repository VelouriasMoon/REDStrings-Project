#include "RSOutGameMode.h"
#include "SaveLoadScreenParamManager.h"

bool ARSOutGameMode::IsWorkingAsyncConvertTrial2SaveData() {
    return false;
}

bool ARSOutGameMode::ConvertTrial2SaveDataExec() {
    return false;
}

ARSOutGameMode::ARSOutGameMode() {
    this->m_pAutoSaveLoadScreenParamManager = CreateDefaultSubobject<USaveLoadScreenParamManager>(TEXT("SaveLoadScreenParamManager"));
    this->m_isAsyncConvertTrial2SaveDataRequest = false;
    this->m_ConvertTrial2SaveDataAllResult = EConvertTrial2SaveDataAllResult::Invalid;
    this->m_AsyncConvertTrial2SaveDataClass = NULL;
}

