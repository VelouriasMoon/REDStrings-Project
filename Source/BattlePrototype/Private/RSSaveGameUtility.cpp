#include "RSSaveGameUtility.h"

class UObject;
class USaveLoadScreenParamManager;

void URSSaveGameUtility::SystemSaveGame(UObject* WorldContextObject, USaveLoadScreenParamManager* pSaveLoadScreenParamManager) {
}

void URSSaveGameUtility::SystemLoadGame(UObject* WorldContextObject, USaveLoadScreenParamManager* pSaveLoadScreenParamManager) {
}

void URSSaveGameUtility::SaveGame(UObject* WorldContextObject, USaveLoadScreenParamManager* pSaveLoadScreenParamManager, int32 no) {
}

void URSSaveGameUtility::LoadGame(UObject* WorldContextObject, USaveLoadScreenParamManager* pSaveLoadScreenParamManager) {
}

bool URSSaveGameUtility::IsExistSaveData(UObject* WorldContextObject, USaveLoadScreenParamManager* pSaveLoadScreenParamManager, ERSSaveGameSaveType Type) {
    return false;
}

bool URSSaveGameUtility::CheckStorageSpace(UObject* WorldContextObject) {
    return false;
}

void URSSaveGameUtility::AutoSaveGame(UObject* WorldContextObject, USaveLoadScreenParamManager* pSaveLoadScreenParamManager) {
}

void URSSaveGameUtility::AutoPreLoadGame(UObject* WorldContextObject, USaveLoadScreenParamManager* pSaveLoadScreenParamManager) {
}

void URSSaveGameUtility::AutoLoadGame(UObject* WorldContextObject, USaveLoadScreenParamManager* pSaveLoadScreenParamManager) {
}

URSSaveGameUtility::URSSaveGameUtility() {
}

