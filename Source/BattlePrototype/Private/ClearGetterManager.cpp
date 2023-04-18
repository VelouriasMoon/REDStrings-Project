#include "ClearGetterManager.h"

void UClearGetterManager::SetIsClearGetterInfo(EClearGetterInfoType Type, bool IsOn) {
}

bool UClearGetterManager::GetProgressWithBestValue(float& CurrentValue, float& maximumValue, float& bestValue, EClearGetterType Type) {
    return false;
}

bool UClearGetterManager::GetProgressValue(float& CurrentValue, float& maximumValue, EClearGetterType Type) {
    return false;
}

int32 UClearGetterManager::GetClearGetterDataNum() const {
    return 0;
}

bool UClearGetterManager::GetClearGetterData(FClearGetterCell& ClearGetterData, EClearGetterType clearGetterType) const {
    return false;
}

void UClearGetterManager::createTitleString(FString& Output, EClearGetterType Type) {
}

void UClearGetterManager::ClearParameter(bool bExNewGame) {
}

void UClearGetterManager::CheckUniquePsychicObjectSuccess(int32 Num) {
}

void UClearGetterManager::CheckTotalPlayTime() {
}

void UClearGetterManager::CheckTotalNexusDriveTime(float Time) {
}

void UClearGetterManager::CheckTotalExp(int32 AddExp) {
}

void UClearGetterManager::CheckThrowPsychicObject(int32 Num) {
}

void UClearGetterManager::CheckTeamBonds() {
}

void UClearGetterManager::CheckReviveNpc(int32 Num) {
}

void UClearGetterManager::CheckReleaseMission(EClearGetterReleaseType Type, int32 Param1, FName Param2) {
}

void UClearGetterManager::CheckQuestClear(int32 Num) {
}

void UClearGetterManager::CheckProtectVision(int32 Num) {
}

void UClearGetterManager::CheckPresentUnique() {
}

void UClearGetterManager::CheckPresent(int32 Num) {
}

void UClearGetterManager::CheckPlayerParameter(const FPlayerInfo& PlayerInfo) {
}

void UClearGetterManager::CheckPlayerLevel() {
}

void UClearGetterManager::CheckPlayerDrive(int32 Num) {
}

void UClearGetterManager::CheckPhaseClear() {
}

void UClearGetterManager::CheckNpcDrive(int32 Num) {
}

void UClearGetterManager::CheckNexusDrive(int32 Num) {
}

void UClearGetterManager::CheckMoney() {
}

void UClearGetterManager::CheckKarenEpisode(FName KarenEPName) {
}

bool UClearGetterManager::CheckIsClearGetterInfo(EClearGetterInfoType Type) const {
    return false;
}

void UClearGetterManager::CheckGetAnyItem(const FName& WeaponId) {
}

void UClearGetterManager::CheckGameClear() {
}

void UClearGetterManager::CheckExistItem() {
}

void UClearGetterManager::CheckEnemyDefeated(const FHCHitResult& HitResult, bool bBrainField) {
}

void UClearGetterManager::CheckEnableNexusDrive() {
}

void UClearGetterManager::CheckDLCBondsEpisode(FName BondsEPName) {
}

void UClearGetterManager::CheckCrashVisionCombo(int32 Num) {
}

void UClearGetterManager::CheckCombinationVisionDamage(int32 Damage) {
}

void UClearGetterManager::CheckCombinationVisionCombo(int32 Num) {
}

void UClearGetterManager::CheckClearGetterMission() {
}

void UClearGetterManager::CheckBrainField(int32 Num) {
}

void UClearGetterManager::CheckBrainCrash(int32 Num) {
}

void UClearGetterManager::CheckBattleSimulatorClear(FName MissionName, const FBattleSimulatorResult& Result) {
}

void UClearGetterManager::CheckAssaultVision(int32 Num) {
}

void UClearGetterManager::CheckAllClearGetterMission() {
}

void UClearGetterManager::AddItemUseCount(int32 Num) {
}

UClearGetterManager::UClearGetterManager() {
}

