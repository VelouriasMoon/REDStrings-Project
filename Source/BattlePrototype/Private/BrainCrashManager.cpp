#include "BrainCrashManager.h"

class ABrainCrashSettingVolume;
class UBrainCrashLocationSettings;

void ABrainCrashManager::SetupSafePointGroup(UBrainCrashLocationSettings* LocationSettings, bool ForceUpdate) {
}

bool ABrainCrashManager::SearchUniqueFinishEnemyLocation(FTransform& OutEnmeyTransform, FTransform SeqeuncerEnemyTransform, FTransform SeqeuncerPlayerTransform, FTransform PlayerTransform, const TArray<FVector>& CollisionCheckOffset, int32 CollisionCheckRadius, const TArray<TEnumAsByte<EObjectTypeQuery>>& CollisionObjectTypes, TEnumAsByte<EDrawDebugTrace::Type> CollisionDebugType) {
    return false;
}

ABrainCrashSettingVolume* ABrainCrashManager::GetTriggerTransformVolume() {
    return NULL;
}

bool ABrainCrashManager::GetTriggerTransform(FTransform& TriggerTransform) {
    return false;
}

TArray<FBrainCrashSafePoint> ABrainCrashManager::GetSafePointGroupPointsFromUnbound(UBrainCrashLocationSettings* LocationSettings) {
    return TArray<FBrainCrashSafePoint>();
}

TArray<FBrainCrashSafePoint> ABrainCrashManager::GetSafePointGroupPointsFromID(UBrainCrashLocationSettings* LocationSettings, int32 SafePointID) {
    return TArray<FBrainCrashSafePoint>();
}

TArray<FBrainCrashSafePoint> ABrainCrashManager::GetSafePointGroupPoints(UBrainCrashLocationSettings* LocationSettings) {
    return TArray<FBrainCrashSafePoint>();
}

int32 ABrainCrashManager::GetSafePointGroupPlayerID(UBrainCrashLocationSettings* LocationSettings) {
    return 0;
}

bool ABrainCrashManager::CheckUseCutin() {
    return false;
}

ABrainCrashManager::ABrainCrashManager() {
    this->bEmptyTriggerTransform = true;
}

