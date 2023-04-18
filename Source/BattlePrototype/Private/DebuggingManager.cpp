#include "DebuggingManager.h"

class ADebuggingItemBase;
class ADebuggingManager;
class UObject;

void ADebuggingManager::UnregisterChildFromItem(EDebuggingPage InPage, ADebuggingItemBase* InItem) {
}

void ADebuggingManager::UnregisterChildFromHashName(EDebuggingPage InPage, const FText& InHashName) {
}












void ADebuggingManager::StartWindow() {
}

void ADebuggingManager::SetPage(EDebuggingPage InPage) {
}

void ADebuggingManager::SetDebugPhotomodeOutline(bool IsEnable) {
}

void ADebuggingManager::SetDebugNpcNoBattle(bool bEnable) {
}

void ADebuggingManager::SetDebugHasBrokenAllBattlefield(bool AllBroken) {
}

void ADebuggingManager::SetDebuggingSelectStrings(TArray<FName> AreaSelectLabels, TArray<FString> AreaSelectStrings, TArray<FName> ScenarioSelectLabels, TArray<FString> ScenerioSelectStrings, TArray<FName> SevedataSelectLabels, TArray<FString> SavedataSelectStrings) {
}

void ADebuggingManager::SetDebugDrawNpcInputStick(bool Value) {
}

void ADebuggingManager::SetDebugDispRevisions(bool isDisp) {
}

void ADebuggingManager::SetDebugDisablePlanarReflection(bool isDisable) {
}

void ADebuggingManager::SetDebugControlNonePlayerID(EPlayerID ID) {
}

void ADebuggingManager::SetAllSimulatorMissionRelease(bool bRelease) {
}

ADebuggingItemBase* ADebuggingManager::SearchItem(EDebuggingPage InPage, const FText& InHashName, bool InIgnoreCase) {
    return NULL;
}

void ADebuggingManager::SaveDebuggingParameter() {
}

void ADebuggingManager::ResetDebuggingParameter() {
}

void ADebuggingManager::RegisterChild(EDebuggingPage InPage, ADebuggingItemBase* InItem) {
}

void ADebuggingManager::LoadDebuggingParameter(bool IsBroadcast) {
}

bool ADebuggingManager::IsReady() const {
    return false;
}

bool ADebuggingManager::IsOpenWindow() const {
    return false;
}

bool ADebuggingManager::IsEnableDebugPhotomodeOutline() const {
    return false;
}

bool ADebuggingManager::IsEnableDebugPauseInput() const {
    return false;
}

bool ADebuggingManager::IsEnableDebugLotteryParam() const {
    return false;
}

bool ADebuggingManager::IsDispPresentBonsai11349() const {
    return false;
}

bool ADebuggingManager::IsDisplayLogEventAssetLoad() {
    return false;
}

bool ADebuggingManager::IsDebugStopUpdateEnemyTickEnable() const {
    return false;
}

bool ADebuggingManager::IsDebugNpcNoBattle() const {
    return false;
}

bool ADebuggingManager::IsDebugHasBrokenAllBattlefield() const {
    return false;
}

bool ADebuggingManager::IsDebugForceEnableUpdateEnemyTickEnable() const {
    return false;
}


bool ADebuggingManager::IsDebugEnemyRepopNoTime() const {
    return false;
}

bool ADebuggingManager::IsDebugEnemyRepopNoRange() const {
    return false;
}

bool ADebuggingManager::IsDebugEnemyOneKill() const {
    return false;
}

bool ADebuggingManager::IsDebugEnemyOneBreakArmor() const {
    return false;
}

bool ADebuggingManager::IsDebugEnemyNoReaction() const {
    return false;
}

bool ADebuggingManager::IsDebugEnemyNoAttack() const {
    return false;
}


bool ADebuggingManager::IsDebugEnemyInstantBadCondition() const {
    return false;
}

bool ADebuggingManager::IsDebugEnemyForceWait() const {
    return false;
}

bool ADebuggingManager::IsDebugEnemyDrawEyeRay() const {
    return false;
}

bool ADebuggingManager::IsDebugEnemyDispTickControlInfo() const {
    return false;
}

bool ADebuggingManager::IsDebugEnemyDispSettingInfo() const {
    return false;
}

bool ADebuggingManager::IsDebugEnemyDispRepopSettingData() const {
    return false;
}

bool ADebuggingManager::IsDebugEnemyDispGroupInfo() const {
    return false;
}

bool ADebuggingManager::IsDebugEnemyBrainCrashAccess() const {
    return false;
}


bool ADebuggingManager::IsDebugEnemyAllowanceIgnoreRestrictAttackOther() const {
    return false;
}

bool ADebuggingManager::IsDebugEnemyAllowanceIgnoreOutOfScreen() const {
    return false;
}

bool ADebuggingManager::IsDebugEnableEnemyHpRateDamage() const {
    return false;
}

bool ADebuggingManager::IsDebugDamageCalcLog() const {
    return false;
}

bool ADebuggingManager::IsDebugCrushDamageCalcLog() const {
    return false;
}

FString ADebuggingManager::GetRevisionString() {
    return TEXT("");
}

FString ADebuggingManager::GetDispPresentStringsBonsai11349() {
    return TEXT("");
}

int32 ADebuggingManager::GetDebugLotteryParamIndex() const {
    return 0;
}

FString ADebuggingManager::GetDebuggingText(const FString& Key, bool isReferenceJp) {
    return TEXT("");
}

ADebuggingManager* ADebuggingManager::GetDebuggingManagerInstance(const UObject* WorldContextObject) {
    return NULL;
}

float ADebuggingManager::GetDebugEnemyHpRateDamage() const {
    return 0.0f;
}

bool ADebuggingManager::GetDebugDrawNpcInputStick() const {
    return false;
}

EPlayerID ADebuggingManager::GetDebugControlNonePlayerID() const {
    return EPlayerID::Invalid;
}

FString ADebuggingManager::GetDamageCalcLog() {
    return TEXT("");
}

bool ADebuggingManager::GetAllSimulatorMissionRelease() {
    return false;
}

void ADebuggingManager::FinishWindow() {
}

void ADebuggingManager::ExportDebuggingItemText() {
}












void ADebuggingManager::Dump() {
}

void ADebuggingManager::DrawDebugLogger(float DeltaSeconds) {
}

void ADebuggingManager::DebugUpdateDisablePlanarReflection() {
}

void ADebuggingManager::DebugSetEnemyCrashAttenuationOff(bool DebugEnemyCrashAttenuationOff) {
}

void ADebuggingManager::DebugSetEnemyCrashAccumulation(int32 DebugCrashAccumulation) {
}



bool ADebuggingManager::DebugIsDispRevisions() const {
    return false;
}

bool ADebuggingManager::DebugIsDisablePlanarReflection() const {
    return false;
}



bool ADebuggingManager::DebugGetEnemyCrashAttenuationOff() {
    return false;
}

int32 ADebuggingManager::DebugGetEnemyCrashAccumulation() const {
    return 0;
}


void ADebuggingManager::DebugEnemyDispNavMesh() {
}













void ADebuggingManager::AddDebugLogger(const FString& String, float DrawSeconds) {
}

ADebuggingManager::ADebuggingManager() {
    this->Page = EDebuggingPage::System;
    this->DebuggingWidget = NULL;
    this->StartupObject = NULL;
    this->m_pDebugTimeSaveDataComboBox = NULL;
    this->bDebugDriveDrawCrashBonusAll = false;
    this->bDebugAutoInput = false;
    this->bDebugAutoEvent = true;
    this->bDebugPrintSequencerFrame = false;
    this->DebugAutoInputDelayTime = 0.00f;
    this->bDebugPlayerOneBrainCrash = false;
    this->TotalTownPeopleCrowdNum = 0;
    this->ActiveTownPeopleCrowdNum = 0;
    this->TotalTownPeopleNum = 0;
    this->ActiveTownPeopleNum = 0;
    this->bDebugEnemyInstantBadCondition = false;
    this->bDebugEnemyOneKill = false;
    this->bDebugEnemyOneBreakArmor = false;
    this->bDebugEnemyBrainCrashAccess = false;
    this->bDebugEnemyForceWait = false;
    this->bDebugEnemyNoReaction = false;
    this->bDebugEnemyDrawEyeRay = false;
    this->bDebugEnableEnemyHpRateDamage = false;
    this->DebugEnemyHPRateDamage = 0.50f;
    this->DebugEnemyNoAttack = false;
    this->bDebugEnemyAllowanceIgnoreOutOfScreen = false;
    this->bDebugEnemyAllowanceIgnoreRestrictAttackOther = false;
    this->bDebugEnemyRepopNoTime = false;
    this->bDebugEnemyRepopNoRange = false;
    this->bDebugStopUpdateEnemyTickEnable = false;
    this->bDebugForceEnableUpdateEnemyTickEnable = false;
    this->bDebugEnemyDispRepopSettingData = false;
    this->bDebugEnemyDispTickControlInfo = false;
    this->bIsDebugEnemyDispSettingInfo = false;
    this->bIsDebugEnemyDispGroupInfo = false;
    this->bDebugEnemyDispNavMeshFlag = false;
    this->DebugEnemyCrashAccumulation = 0;
    this->bDebugEnemyCrashAttenuationOff = false;
    this->bDebugDisablePlanarReflection = false;
    this->bDebugDispRevision = false;
    this->bDebugDamageCalcLog = false;
    this->bDebugCrushDamageCalcLog = false;
    this->bDebugHasBrokenAllBattlefield = false;
    this->bDisplayLogEventAssetLoad = false;
    this->bDebugNpcNoBattle = false;
    this->DebugControlNonePlayerID = EPlayerID::Invalid;
    this->bDebugDrawNpcInputStick = false;
}

