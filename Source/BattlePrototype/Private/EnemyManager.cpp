#include "EnemyManager.h"

class AActor;
class ARSCharacterBase;
class UMeshComponent;

ARSCharacterBase* AEnemyManager::UsableBrainCrashLockTarget_Native(ARSCharacterBase* Player) {
    return NULL;
}

void AEnemyManager::UpdateRestrictSelfDead(float _DeltaSec) {
}

void AEnemyManager::UpdateOutRangeFade(float OutRange) {
}

void AEnemyManager::UpdateEnemyTickEnable(AActor* Enemy, AActor* Player, float Range, float Height, float OutRange) {
}

void AEnemyManager::UpdateCheckCut() {
}

void AEnemyManager::UpdateBrainCrashTarget_Native() {
}

void AEnemyManager::UnregisterNeedCheckCutActor(ARSCharacterBase* _unregisterActor) {
}

void AEnemyManager::SubMovingList(ARSCharacterBase* subCharacter) {
}

void AEnemyManager::SubEnemyList(ARSCharacterBase* subEnemy) {
}

void AEnemyManager::SubEnemyBossList(AActor* subEnemy) {
}

void AEnemyManager::SubBrainCrashCandidate(ARSCharacterBase* subChara) {
}


bool AEnemyManager::SimulatorCancelMission_Implementation() {
    return false;
}

void AEnemyManager::SetTickEnableTargetDroneMesh(UMeshComponent* DroneMesh) {
}

void AEnemyManager::SetTickEnableTargetDroneActor(AActor* DroneActor) {
}

void AEnemyManager::SetSpawnWaitDelay(ARSCharacterBase* chara, float DelayTime) {
}

void AEnemyManager::SetSelectParameter(TArray<float> distList, TArray<int32> distPointList, TArray<float> angleList, TArray<int32> anglePointList) {
}

void AEnemyManager::SetRestrictSelfDead(bool _RestrictSelfDead, float _RestrictTime) {
}


void AEnemyManager::SetRepopExtendInfoToList(FEnemyRepopExtendInfo& EnemyRepopExtendInfo, bool IsIgnoreRestrictAttackOther, bool IsIgnoreAllowance, bool IsNoCheckCaptureArea, bool IsChangeSearchAngle, float ChangeSearchAngle, bool IsAlwayChangeSearchAngle, bool IsChangeSearchRange, float ChangeSearchRange, bool IsAlwayChangeSearchRange, bool IsChangeSensingAngle, float ChangeSensingAngle, bool IsAlwaySensingAngle, bool IsChangeCaptureArea, float ChangeCaptureArea, bool IsAlwayCaptureArea) {
}

void AEnemyManager::SetRepopExtendInfoToActor(FEnemyRepopExtendInfo EnemyRepopExtendInfo, bool& IsIgnoreRestrictAttackOther, bool& IsIgnoreAllowance, bool& IsNoCheckCaptureArea, bool& IsChangeSearchAngle, float& ChangeSearchAngle, bool& IsAlwayChangeSearchAngle, bool& IsChangeSearchRange, float& ChangeSearchRange, bool& IsAlwayChangeSearchRange, bool& IsChangeSensingAngle, float& ChangeSensingAngle, bool& IsAlwaySensingAngle, bool& IsChangeCaptureArea, float& ChangeCaptureArea, bool& IsAlwayCaptureArea) {
}

void AEnemyManager::SetMaxMovingCount(int32 count) {
}

void AEnemyManager::SetEnemyIgnoreDamageFlag(int32 Flags) {
}


ARSCharacterBase* AEnemyManager::SelectBrainCrashTarget(const FVector& chkPos, const FVector& chkDir) const {
    return NULL;
}

TArray<ARSCharacterBase*> AEnemyManager::SelectBrainCrashMultiTarget(const FVector& chkPos, const FVector& chkDir) const {
    return TArray<ARSCharacterBase*>();
}

ARSCharacterBase* AEnemyManager::SelectBrainCrashCharacter_Native() {
    return NULL;
}

void AEnemyManager::ResetUpdateEnemyNative() {
}

void AEnemyManager::ResetUniqueBrainCrashPlayedList() {
}

bool AEnemyManager::RepopUpdateNative(FName NowLocationName, bool IsInScene, float DeltaSeconds) {
    return false;
}


bool AEnemyManager::RepopCheckInsideCameraNative(FVector MyPos) {
    return false;
}

void AEnemyManager::RemoveEnemyRepopLevelInfoList(FName Name) {
}

void AEnemyManager::RegisterNeedCheckCutActor(ARSCharacterBase* _registerActor) {
}

bool AEnemyManager::PreUpdateEnemyTickEnable(AActor* Enemy, AActor* Player, float OutRange) {
    return false;
}

void AEnemyManager::NotifyPlayerDead() {
}

bool AEnemyManager::MakeUniqueBrainCrashPlayedList(const TMap<FName, bool>& srcList) {
    return false;
}

bool AEnemyManager::MakeEnemyRepopLevelInfoList(TMap<FName, FEnemyRepopLevelInfo> _srcList) {
    return false;
}

bool AEnemyManager::IsUniqueBrainCrashPlayed(FName Name) {
    return false;
}

bool AEnemyManager::IsStealthSeeFlagNative() {
    return false;
}

bool AEnemyManager::IsRestrictSelfDead() const {
    return false;
}

int32 AEnemyManager::IsEntryBrainCrashCandidate(ARSCharacterBase* findChara) {
    return 0;
}

bool AEnemyManager::IsEnemyIgnoreDamage(ECharacterIgnoreDamage CheckFlag) const {
    return false;
}


void AEnemyManager::IncrementUpdateEnemyNative() {
}

TMap<FName, bool> AEnemyManager::GetUniqueBrainCrashPlayedList() {
    return TMap<FName, bool>();
}

FVector AEnemyManager::GetTickEnableTargetLocation() {
    return FVector{};
}

AActor* AEnemyManager::GetTickEnableTargetActor() {
    return NULL;
}

TMap<FName, FEnemyRepopLevelInfo> AEnemyManager::GetEnemyRepopLevelInfoList() {
    return TMap<FName, FEnemyRepopLevelInfo>();
}

int32 AEnemyManager::GetEnemyNumByLevelName(const FName LevelName) {
    return 0;
}

int32 AEnemyManager::GetEnemyNum() const {
    return 0;
}

TArray<ARSCharacterBase*> AEnemyManager::GetEnemyListRef() {
    return TArray<ARSCharacterBase*>();
}

TArray<AActor*> AEnemyManager::GetEnemyListByLevelName(const FName LevelName) {
    return TArray<AActor*>();
}

TArray<ARSCharacterBase*> AEnemyManager::GetEnemyList() {
    return TArray<ARSCharacterBase*>();
}

int32 AEnemyManager::GetEnemyIgnoreDamageFlag() const {
    return 0;
}

UClass* AEnemyManager::GetEnemyClass(const FString& Path) {
    return NULL;
}

int32 AEnemyManager::GetEnemyBossNumByLevelName(const FName LevelName) {
    return 0;
}

TArray<AActor*> AEnemyManager::GetEnemyBossListByLevelName(const FName LevelName) {
    return TArray<AActor*>();
}

TArray<AActor*> AEnemyManager::GetEnemyBossList() {
    return TArray<AActor*>();
}


int32 AEnemyManager::GetBrainCrashCandidateNum() const {
    return 0;
}

TArray<ARSCharacterBase*> AEnemyManager::GetBrainCrashCandidateList() {
    return TArray<ARSCharacterBase*>();
}

FName AEnemyManager::GetActorLevelName(const AActor* Actor) {
    return NAME_None;
}

void AEnemyManager::GetActorLevelAreaID(const AActor* Actor, int32& LocationId, int32& areaId) {
}

bool AEnemyManager::FindEnemyRepopLevelInfoList(FName Name, FEnemyRepopLevelInfo& EnemyRepopLevelInfo) {
    return false;
}

void AEnemyManager::EntryRepopNative(float RepopTimeBase, float Range, float Probability, const FString& ClassBpPath, FVector InitPos, float MoveArea, FName LevelName, int32 Group, int32 SubGroup, FName UniqueId, FName Level, int32 DropId, ARSCharacterBase* RepopTarget) {
}

bool AEnemyManager::EnableUniqueBrainCrashPlayedList(FName Name) {
    return false;
}

void AEnemyManager::EnableEnemyIgnoreDamageAll() {
}

void AEnemyManager::EnableEnemyIgnoreDamage(ECharacterIgnoreDamage setFlag) {
}

void AEnemyManager::DisableEnemyIgnoreDamageAll() {
}

void AEnemyManager::DisableEnemyIgnoreDamage(ECharacterIgnoreDamage setFlag) {
}

void AEnemyManager::DebugLog(const FString& logString) {
}

void AEnemyManager::ClearEnemyRepopLevelInfoList() {
}

bool AEnemyManager::CheckRepopCharaInListNative(FName CharaUniqueId, int32 GroupID) {
    return false;
}

bool AEnemyManager::CanUpdateEnemyNative() {
    return false;
}

bool AEnemyManager::CanPlayCutSceneEnemy() const {
    return false;
}

bool AEnemyManager::CanAddMovingList(const ARSCharacterBase* newCharacter) const {
    return false;
}

int32 AEnemyManager::CalcRelationScore(const FVector& cameraPos, const FVector& cameraDir, const FVector& checkPos, float possibleBrainCrashRange) const {
    return 0;
}

int32 AEnemyManager::CalcBrainCrashScore(float& outDist, float& outAngle, const ARSCharacterBase* chkChara, const FVector& chkPos, const FVector& chkDir, float longestDist) const {
    return 0;
}

void AEnemyManager::AllEnemyTickStop() {
}

void AEnemyManager::AddMovingList(ARSCharacterBase* AddCharacter) {
}

void AEnemyManager::AddEnemyRepopLevelInfoList(FName Name, FEnemyRepopLevelInfo EnemyRepopLevelInfo) {
}

void AEnemyManager::AddEnemyList(ARSCharacterBase* addEnemy) {
}

void AEnemyManager::AddEnemyBossList(AActor* addEnemy) {
}

void AEnemyManager::AddBrainCrashCandidate(ARSCharacterBase* addChara) {
}

AEnemyManager::AEnemyManager() {
    this->mTickEnableTargetDroneActor = NULL;
    this->mbIsStealthSeeFlag = false;
    this->SelectParamDistList.AddDefaulted(15);
    this->SelectParamDistPointList.AddDefaulted(15);
    this->SelectParamAngleList.AddDefaulted(15);
    this->SelectParamAnglePointList.AddDefaulted(15);
    this->_enemyIgnoreDamageFlag = 0;
    this->RestrictSelfDead = false;
    this->RestrictSelfDeadTimer = 0.00f;
    this->mUpdateEnemyCount = 0;
    this->mEnemyCountMax = 2;
    this->EnemyMovingCount = 8;
    this->bExecBrainCrash = false;
    this->bLastEnableBc = false;
    this->bIsDisplayCursor = false;
    this->mCanPlayCutScene = false;
}

