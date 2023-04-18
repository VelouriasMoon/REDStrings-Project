#include "BrainFieldManager.h"

class AActor;
class ARSCharacterBase;
class ULevelStreaming;

void ABrainFieldManager::VisibleNormalActorsNative(bool IsVisible, int32 ObjectNum, int32& VisibleSplitIndex, const TArray<AActor*>& ActorList, TArray<FBrainFieldRestoreFlag>& SettingFlags) {
}

void ABrainFieldManager::SetupEnemyWaveTransformNative(const TArray<ARSCharacterBase*>& Enemies, const TArray<FBrainFieldWaveEnemyFlag>& EnemyFlags, const FTransform& PlayerTransform) {
}

void ABrainFieldManager::SelectJumpBrainFieldTrainEnemy(TArray<AActor*>& TrainList, TArray<AActor*>& NoTrainList, const TArray<AActor*>& TargetEnemyListBattleField, const TArray<AActor*>& TargetEnemyListBattleFieldWave, const TArray<AActor*>& TargetEnemyListNormal, FVector NormalFieldPlayerLocation) {
}

void ABrainFieldManager::IsValidEventCommandTypeAtBrainField(EEventTriggerCheckType EventCommandType, bool CheckBrainTalkEvent, bool& IsValid) {
}





void ABrainFieldManager::GetNormalLevelActorListNative(const FBrainFieldNormalLevelActorListInput& Inputs, TArray<AActor*>& NormalLevelActors, TArray<AActor*>& Characters, TArray<AActor*>& Weapons, TArray<AActor*>& PsychicObjects, TArray<AActor*>& PsychicGrabs, TArray<AActor*>& EffectBackround, TArray<AActor*>& EffectBackroundMother) {
}

bool ABrainFieldManager::GetLocationSettings(const TArray<AActor*>& TrainEnemyList, FBrainFieldSettingsLocation& OutSettings) {
    return false;
}

int32 ABrainFieldManager::GetEnemyLocationWaveNum(bool LongAway) {
    return 0;
}

bool ABrainFieldManager::GetEnemyLocationWaveFromNo(FTransform& EnemyTransform, int32 LocationNo) {
    return false;
}

bool ABrainFieldManager::GetEnemyLocationWave(FTransform& EnemyTransform, int32 Index, bool LongAway) {
    return false;
}

int32 ABrainFieldManager::GetEnemyLocationNum() const {
    return 0;
}

bool ABrainFieldManager::GetEnemyLocation(FTransform& EnemyTransform, int32 Index) const {
    return false;
}

TArray<AActor*> ABrainFieldManager::GetBrainFieldActors(ULevelStreaming* Level) {
    return TArray<AActor*>();
}

void ABrainFieldManager::DebugCheckEnemyWaveTransformNativeCollision(const FTransform& PlayerTransform, FTransform& EnemyTransform, bool& ValidIndex, bool& UseCollision, int32 Index, bool LongAway) {
}

void ABrainFieldManager::CalcJumpBrainFieldTransformEnemyCustomCollision2(TArray<FTransform>& OutTransforms, const TArray<AActor*>& Enemies, const FBrainFieldSettingsLocation& LocationSetting, float BrainFieldPlayerHeight, bool UserPlayer, AActor* UserActor) {
}

void ABrainFieldManager::CalcJumpBrainFieldTransformEnemyCustomCollision(TArray<FTransform>& OutTransforms, const TArray<AActor*>& Enemies, const TArray<FTransform>& NormalFieldTransforms, FVector CustomCollisionPlayerLocation, float BrainFieldPlayerHeight) {
}

void ABrainFieldManager::CalcJumpBrainFieldTransformEnemy(TArray<FTransform>& OutTransforms, const TArray<AActor*>& Enemies, const TArray<FTransform>& NormalFieldTransforms, const TArray<bool>& IsWaves, FVector NormalFieldPlayerLocation) {
}

void ABrainFieldManager::Broadcast_EDBrainFieldBattleEndNativeEvent(EBrainFieldEndType EndType) {
}

ABrainFieldManager::ABrainFieldManager() {
    this->MaxTrainEnemy = 16;
    this->DebugCollisionMode = false;
}

