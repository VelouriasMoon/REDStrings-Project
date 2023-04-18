#include "LevelManager.h"


int32 ALevelManager::StreamingTextureLoadAllBlock() {
    return 0;
}

int32 ALevelManager::StreamingTextureBlockTillAllRequestsFinished(float timeLimit, bool bLogResults) {
    return 0;
}

void ALevelManager::SetStreamingSettings(const FRSStreamingSettings Settings) {
}


int32 ALevelManager::GetStreamingTextureNum() {
    return 0;
}

FName ALevelManager::GetShortAreaName(int32 LocationId, int32 areaId) {
    return NAME_None;
}

FRSStreamingSettings ALevelManager::GetCurrentStreamingSettings() const {
    return FRSStreamingSettings{};
}

FName ALevelManager::GetAreaName(int32 LocationId, int32 areaId, int32 VariationID) {
    return NAME_None;
}


FName ALevelManager::GetAreaBGName(int32 LocationId, int32 areaId, int32 VariationID) {
    return NAME_None;
}


bool ALevelManager::CheckTweakConditionFunc(FAreaInfoTweakCondition TweakCondition) {
    return false;
}

bool ALevelManager::CallAreaSelectVariationFunction(int32 LocationId, int32 areaId, int32 VariationID, int32 PortaflID, bool NoChange, int32& OutLocationID, int32& OutAreaID, int32& OutVariationID) {
    return false;
}

bool ALevelManager::CallAreaPostLoadFunction(int32 LocationId, int32 areaId, int32 VariationID, bool IsFirstTry, bool& Initialized) {
    return false;
}

ALevelManager::ALevelManager() {
}

