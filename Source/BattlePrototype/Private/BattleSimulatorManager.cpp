#include "BattleSimulatorManager.h"

class AActor;

void ABattleSimulatorManager::UpdateCheckActorEnemyHpRate() {
}

void ABattleSimulatorManager::StoreMissionCompleteDateTime() {
}

void ABattleSimulatorManager::StopPrintResultPoint() {
}

void ABattleSimulatorManager::SetSlowTimer(bool bSlow, FName ClaimantName) {
}

void ABattleSimulatorManager::SetRetryDialogSelectNo(int32 selectNo) {
}

void ABattleSimulatorManager::SetReleaseConditionData(FName DataName) {
}

void ABattleSimulatorManager::SetPauseTimer(bool bPause, FName ClaimantName) {
}

void ABattleSimulatorManager::SetMissionStartBefore(bool StartBefore) {
}

void ABattleSimulatorManager::SetMissionReleased(FName DataName, bool IsReleased, bool IsYuito) {
}

void ABattleSimulatorManager::SetMissionDetailData(FName DataName) {
}

void ABattleSimulatorManager::SetMissionData(FName DataName) {
}

void ABattleSimulatorManager::SetMissionCleared(FName DataName, bool IsCleared, bool IsYuito) {
}

void ABattleSimulatorManager::SetIsNew(bool IsNew, FName DataName, bool IsYuito) {
}

void ABattleSimulatorManager::SetIgnoreFenceFinishMission(bool IgnoreFenceFinishMission) {
}

void ABattleSimulatorManager::SetDebugOutputMissionResult(bool bOutput) {
}

void ABattleSimulatorManager::SetDebugOutputEnemyDamageLog(bool bOutput) {
}

void ABattleSimulatorManager::SetDebugOutputEnemyBrainCrashDamageLog(bool bOutput) {
}

void ABattleSimulatorManager::SetDebugEnableTimerSlow(bool bSet) {
}

void ABattleSimulatorManager::SetCheckActorEnemyHpRate(bool bCheck) {
}

void ABattleSimulatorManager::SetBattleTIme(float Time) {
}

void ABattleSimulatorManager::SetBattleSimulatorPlayerInvalidDamage(bool InvalidDamage) {
}

void ABattleSimulatorManager::Set_TagAndHpRateEnemyHpRate(FName EnemyTag, float HpRate) {
}

void ABattleSimulatorManager::ResetBattleTime() {
}


void ABattleSimulatorManager::OnMissionSubMakeEvent(AActor* Actor) {
}

void ABattleSimulatorManager::OnMissionEnemyDead() {
}


void ABattleSimulatorManager::OnFinishMission() {
}


void ABattleSimulatorManager::OnBeforeSimulatorResult() {
}

bool ABattleSimulatorManager::IsTimerPause() const {
    return false;
}


bool ABattleSimulatorManager::IsMissionStartBefore() {
    return false;
}

bool ABattleSimulatorManager::IsMissionReleased(FName DataName, bool IsYuito) {
    return false;
}

bool ABattleSimulatorManager::IsMissionCleared(FName DataName, bool IsYuito) {
    return false;
}

bool ABattleSimulatorManager::IsMissionActive() {
    return false;
}

bool ABattleSimulatorManager::IsCurrentPlayerYuito() {
    return false;
}

bool ABattleSimulatorManager::IsCurrentMissionTypeKillJewelPool() {
    return false;
}

FBattleSimulatorResult ABattleSimulatorManager::GetSaveResult(FName DataName, bool IsYuito) {
    return FBattleSimulatorResult{};
}

TMap<EBattleSimulatorPublicationCategory, FBattleSimulatorReleaseDataList> ABattleSimulatorManager::GetReleaseConditionList() {
    return TMap<EBattleSimulatorPublicationCategory, FBattleSimulatorReleaseDataList>();
}

FBattleSimulatorMissionReleaseCondition ABattleSimulatorManager::GetReleaseConditionData(FName DataName) {
    return FBattleSimulatorMissionReleaseCondition{};
}

FBattleSimulatorRareSpawnCondisionData ABattleSimulatorManager::GetRareSpawnCondisionData(FName DataName) {
    return FBattleSimulatorRareSpawnCondisionData{};
}

int32 ABattleSimulatorManager::GetRareEnmySubjugationNum(bool IsYuito) {
    return 0;
}

int32 ABattleSimulatorManager::GetRareEnemyAppearanceNum(bool IsYuito) {
    return 0;
}

FName ABattleSimulatorManager::GetPrevMissionName() {
    return NAME_None;
}

int32 ABattleSimulatorManager::GetPlayerDamageSum() {
    return 0;
}

int32 ABattleSimulatorManager::GetPlayerBadStatusNum() {
    return 0;
}

TArray<FName> ABattleSimulatorManager::GetPauseTimerList() {
    return TArray<FName>();
}

int32 ABattleSimulatorManager::GetMissionID() {
    return 0;
}

FBattleSimulatorMissionDetailData ABattleSimulatorManager::GetMissionDetailData(FName DataName) {
    return FBattleSimulatorMissionDetailData{};
}

FDateTime ABattleSimulatorManager::GetMissionCompleteDateTime() {
    return FDateTime{};
}

int32 ABattleSimulatorManager::GetKillUniqueObjectNum() {
    return 0;
}

int32 ABattleSimulatorManager::GetKillDriveNum() {
    return 0;
}

int32 ABattleSimulatorManager::GetKillCombinationVisionNum() {
    return 0;
}

int32 ABattleSimulatorManager::GetJewelPoolTotalDefeatedCount(FName DataName, bool IsYuito) {
    return 0;
}

int32 ABattleSimulatorManager::GetItemNum() {
    return 0;
}

bool ABattleSimulatorManager::GetIsNew(FName DataName, bool IsYuito) {
    return false;
}

int32 ABattleSimulatorManager::GetHitUniqueObjectNum() {
    return 0;
}

int32 ABattleSimulatorManager::GetEnemyDamageSum() {
    return 0;
}

int32 ABattleSimulatorManager::GetEnemyBadStatusNum() {
    return 0;
}

FName ABattleSimulatorManager::GetCurrentMissionName() {
    return NAME_None;
}

int32 ABattleSimulatorManager::GetBrainCrashNum() {
    return 0;
}

float ABattleSimulatorManager::GetBattleTime() {
    return 0.0f;
}

AActor* ABattleSimulatorManager::GetActorAndHpRateEnemyHpRate(float& HpRate) {
    return NULL;
}

void ABattleSimulatorManager::EndMission() {
}

void ABattleSimulatorManager::DrawDebugPrintScorePoint() {
}

void ABattleSimulatorManager::DrawDebugPrintMissionResult() {
}

void ABattleSimulatorManager::ClearScore() {
}

void ABattleSimulatorManager::ClearRareEnemySubjugationNum(bool IsYuito) {
}

void ABattleSimulatorManager::ClearRareEnemyAppearanceNum(bool IsYuito) {
}

void ABattleSimulatorManager::CancelMission() {
}

FBattleSimulatorResult ABattleSimulatorManager::CalcMissionResult() {
    return FBattleSimulatorResult{};
}

FBattleSimulatorJewelPoolResult ABattleSimulatorManager::CalcMissionJewelPoolResult() {
    return FBattleSimulatorJewelPoolResult{};
}

void ABattleSimulatorManager::BeginMissionCheck() {
}

void ABattleSimulatorManager::BeginMission() {
}

void ABattleSimulatorManager::AddScore_PlayerDamageDirect(int32 Damage) {
}

void ABattleSimulatorManager::AddScore_PlayerDamage(int32 Damage, const FHCHitResult& HitResult) {
}

void ABattleSimulatorManager::AddScore_Item(int32 Num) {
}

int32 ABattleSimulatorManager::AddScore_EnemyDamageDirect(int32 Damage) {
    return 0;
}

int32 ABattleSimulatorManager::AddScore_EnemyDamage(int32 Damage, const FHCHitResult& HitResult, EBattleSimulatorEnemyDamageAddType AddType, float HpRate, bool bBoss) {
    return 0;
}

void ABattleSimulatorManager::AddScore_BrainCrash(int32 Num) {
}

void ABattleSimulatorManager::AddRareEnemySubjugatopmNum(int32 Num, bool IsYuito) {
}

void ABattleSimulatorManager::AddRareEnemyAppearanceNum(int32 Num, bool IsYuito) {
}


void ABattleSimulatorManager::Add_PlayerBadStatus(int32 Num) {
}

void ABattleSimulatorManager::Add_KillUniqueObject(int32 Num) {
}

void ABattleSimulatorManager::Add_KillDrive(int32 Num) {
}

void ABattleSimulatorManager::Add_KillCombinationVision(int32 Num) {
}

void ABattleSimulatorManager::Add_HitUniqueObject(int32 Num) {
}

void ABattleSimulatorManager::Add_EnemyBadStatus(int32 Num) {
}

ABattleSimulatorManager::ABattleSimulatorManager() {
    this->bUnuseEndMissionCheck = false;
    this->bCalledFinishMoveStart = false;
    this->MissionScoreDataTable = NULL;
    this->RareSpawnCondisionDataTable = NULL;
    this->BattleSimulatorDetailDataTable = NULL;
    this->BattleSimulatorReleaseConditonDataTable = NULL;
}

