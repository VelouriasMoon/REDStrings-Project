#include "LoadTipsParamManager.h"

class URSGameInstance;

void ULoadTipsParamManager::InitData(URSGameInstance* gameInst) {
}

int32 ULoadTipsParamManager::GetNextTips() {
    return 0;
}

int32 ULoadTipsParamManager::GetBeginningTips(EPlayerID playerId, int32 ProgressNo, int32 nextLocation) {
    return 0;
}

ULoadTipsParamManager::ULoadTipsParamManager() {
    this->beforeSelectTipsID_ = -1;
    this->gameInst_ = NULL;
    this->loadTipsData_ = NULL;
}

