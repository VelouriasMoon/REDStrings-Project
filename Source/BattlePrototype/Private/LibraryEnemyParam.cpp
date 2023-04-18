#include "LibraryEnemyParam.h"

class URSGameInstance;

void ULibraryEnemyParam::ResetAll() {
}

bool ULibraryEnemyParam::IsInitialized() const {
    return false;
}

void ULibraryEnemyParam::InitData(URSGameInstance* GameInstance) {
}

bool ULibraryEnemyParam::GetLibraryDataFromLibraryID(FLibraryEnemyDataCell& Data, FName libraryID, bool isPlayerM, int32 ProgressNo, bool isDebugOpen) {
    return false;
}

bool ULibraryEnemyParam::GetLibraryData(FLibraryEnemyDataCell& Data, FName EnemyId, bool isPlayerM, int32 ProgressNo, bool isDebugOpen) {
    return false;
}

ULibraryEnemyParam::ULibraryEnemyParam() {
    this->gameInst = NULL;
    this->DataTable = NULL;
}

