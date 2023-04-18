#include "PsychicObjectManager.h"

class AActor;
class UPsychicObjectSearchComponent;

void APsychicObjectManager::UnregisterPsychicObject(AActor* PsyObjActor) {
}

void APsychicObjectManager::UnregisterMapGimmick(AActor* pActor) {
}

void APsychicObjectManager::SetSearchFocus(bool Flag) {
}

void APsychicObjectManager::SetSearchComponent(UPsychicObjectSearchComponent* comp) {
}

void APsychicObjectManager::SetPsychicObjectTownSetting(bool Flag) {
}

void APsychicObjectManager::SetPsychicObjectRegisterSkip(bool Flag) {
}

void APsychicObjectManager::SetPsychicObjectMaterialValueDither(bool bRestore, float Rate) {
}

void APsychicObjectManager::SetPsychicObjectMaterialDitherParameterOnce(bool bChkOnce, float applyRadius) {
}

void APsychicObjectManager::SetPsychicObjectMaterialDitherParameter(bool bChkDist, float applyRadius) {
}

void APsychicObjectManager::SetPsychicObjectListEventC(bool bStart, bool bTick, bool bVisibility) {
}

void APsychicObjectManager::SetNpcSearchDistanceMin(float Dist) {
}

void APsychicObjectManager::SetFocusSearchPause(bool Flag, FName TagName, bool bResetResult) {
}

void APsychicObjectManager::SetFocusSearchEnable(bool Flag, FName TagName) {
}

void APsychicObjectManager::SetFocusParameter(TArray<float> distList, TArray<int32> distPointList, TArray<float> angleList, TArray<int32> anglePointList) {
}

void APsychicObjectManager::SetEnemySearchID(EPsychicObjectID searchId) {
}

bool APsychicObjectManager::SetEnablePsychicObjectRegister(const FString& refName, bool Flag) {
    return false;
}

bool APsychicObjectManager::SetDuelPoleType(bool bDuelType) {
    return false;
}

void APsychicObjectManager::SearchNpcPsychicObject(bool bUnqObj, bool bEnemy, FVector chkPos, FPsychicObjectFocusResult& Result) {
}

void APsychicObjectManager::SearchFocusPsychicObject(FVector chkPos, FVector chkDir, FPsychicObjectFocusResult& Result) {
}

void APsychicObjectManager::SearchEnemyPsychicObject(bool bUnqObj, FVector chkPos, FPsychicObjectFocusResult& Result) {
}

void APsychicObjectManager::ResetPsychicObjectArrangeTransform() {
}

void APsychicObjectManager::ResetNpcObject(bool bUnqObj, bool bEnemy) {
}

void APsychicObjectManager::RegisterPsychicObject(AActor* PsyObjActor) {
}

void APsychicObjectManager::RegisterMapGimmick(AActor* pActor, float DistMin) {
}

bool APsychicObjectManager::IsSetSearchComponent() const {
    return false;
}

bool APsychicObjectManager::IsFocusSearchPause() {
    return false;
}

bool APsychicObjectManager::IsFocusSearchEnable() {
    return false;
}

bool APsychicObjectManager::IsFloatObjectExist() {
    return false;
}

UClass* APsychicObjectManager::GetRandomSwingTypeObjectRegisterClass() {
    return NULL;
}

UClass* APsychicObjectManager::GetRandomPsychicObjectRegisterClass(EPsychicObjectSizeType objSize) {
    return NULL;
}

int32 APsychicObjectManager::GetPsychicObjectRegisterNum() {
    return 0;
}

AActor* APsychicObjectManager::GetPsychicObjectRegisterActor(int32 idx) {
    return NULL;
}

int32 APsychicObjectManager::GetPsychicObjectNumByLevelName(const FName LevelName) {
    return 0;
}

TArray<AActor*> APsychicObjectManager::GetPsychicObjectListByLevelName(const FName LevelName) {
    return TArray<AActor*>();
}

AActor* APsychicObjectManager::GetNpcObject(bool bUnqObj, bool bEnemy) {
    return NULL;
}

void APsychicObjectManager::GetFocusPsychicObject(FPsychicObjectFocusResult& Result) {
}

AActor* APsychicObjectManager::GetEnemyObject(bool bUnqObj) {
    return NULL;
}

TArray<EPsychicObjectSizeType> APsychicObjectManager::GetAvailableRegisterSizeArray(int32 Len, TArray<EPsychicObjectSizeType> requestSize) {
    return TArray<EPsychicObjectSizeType>();
}

void APsychicObjectManager::DebugPrintString(const FString& logString) {
}

void APsychicObjectManager::DebugPrintRegisterInfo() {
}

void APsychicObjectManager::DebugPrintPsychicObjectSizeList() {
}

void APsychicObjectManager::DebugMultiSphereTraceForObject(TArray<FHitResult>& resultList, FVector posS, FVector Pose, float Radius, bool bDbDraw, bool bDbPrint) {
}

void APsychicObjectManager::DebugLog(const FString& logString) {
}

void APsychicObjectManager::DebugCheckPsychicObjectSizeListNum() {
}

void APsychicObjectManager::ClearPsychicObjectList() {
}

bool APsychicObjectManager::CheckNpcObject_Implementation(bool bUnqObj, bool bEnemy, bool chkCapture, bool chkAttack) {
    return false;
}

bool APsychicObjectManager::CheckEnemyObject_Implementation(bool bUnqObj, bool chkCapture, bool chkAttack) {
    return false;
}

APsychicObjectManager::APsychicObjectManager() {
    this->bSizeListSkipSwingType = true;
    this->SearchDistanceMinEnemy = 3000.00f;
    this->bSearchCheckTraceEnemy = true;
    this->SearchDistanceMinNpc = 3000.00f;
    this->bSearchCheckTraceNpc = true;
    this->FocusParamDistList.AddDefaulted(5);
    this->FocusParamDistPointList.AddDefaulted(5);
    this->FocusParamAngleList.AddDefaulted(5);
    this->FocusParamAnglePointList.AddDefaulted(5);
    this->bDebugDispSearchScore = false;
    this->bDebugDispSearchParam = false;
    this->bDebugDispSearchNpc = false;
}

