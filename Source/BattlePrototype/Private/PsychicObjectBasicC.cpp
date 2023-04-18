#include "PsychicObjectBasicC.h"

class UDamageType;
class UMeshComponent;
class USceneComponent;

FHitResult APsychicObjectBasicC::SetSceneComponentLocationRotation(USceneComponent* SceneComp, FVector Location, FRotator Rotation, bool bSweep) {
    return FHitResult{};
}

void APsychicObjectBasicC::SetPsychicObjectSimulateControlRenderCheckParamC(bool Flag, float Radius) {
}

void APsychicObjectBasicC::SetPsychicObjectSimulateControlEnableC(bool Flag) {
}

void APsychicObjectBasicC::SetPsychicObjectSimulateControlCheckC(bool Flag) {
}

void APsychicObjectBasicC::SetPsychicObjectSimulateControlAwakeC(bool Flag) {
}

void APsychicObjectBasicC::SetPsychicObjectSearchSkipCheckRenderedC(bool Flag) {
}

void APsychicObjectBasicC::SetPsychicObjectSearchPosC(bool bFlag, FVector Pos) {
}

void APsychicObjectBasicC::SetPsychicObjectSearchPos(bool bFlag, FVector Pos) {
}

void APsychicObjectBasicC::SetPsychicObjectSearchHeight(bool bFlag, float heightMin, float heightMix) {
}

void APsychicObjectBasicC::SetPsychicObjectSearchableC(bool Flag) {
}

void APsychicObjectBasicC::SetPsychicObjectSearchable(bool Flag) {
}

void APsychicObjectBasicC::SetPsychicObjectRegisterableC(bool Flag) {
}

void APsychicObjectBasicC::SetPsychicObjectMaterialParameterEnableC(bool Flag) {
}

void APsychicObjectBasicC::SetPsychicObjectIdC(EPsychicObjectID psyObjId) {
}

bool APsychicObjectBasicC::SetPsychicObjectFellOutOfWorld_Implementation(const UDamageType* pDmgType) {
    return false;
}

bool APsychicObjectBasicC::SetDistanceDestroyC_Implementation() {
    return false;
}

void APsychicObjectBasicC::ResetArrangeTransformC() {
}

bool APsychicObjectBasicC::IsAllowCpuAccess() {
    return false;
}

void APsychicObjectBasicC::InitializeCpuAccess() {
}



UMeshComponent* APsychicObjectBasicC::GetPsychicObjectShadow() {
    return NULL;
}

UMeshComponent* APsychicObjectBasicC::GetPsychicObjectMesh() {
    return NULL;
}


bool APsychicObjectBasicC::CheckPsychicObjectStillInWorld_Implementation(float killZ) {
    return false;
}

bool APsychicObjectBasicC::CheckDestroyDistanceC(float chkDist) {
    return false;
}

APsychicObjectBasicC::APsychicObjectBasicC() {
    this->PsychicObjectIdC = EPsychicObjectID::Max;
    this->pMeshComp = NULL;
    this->pShadowComp = NULL;
    this->bCpuAccessC = true;
    this->bCheckCpuAccessC = false;
    this->bRegisterableC = true;
    this->bActiveC = false;
    this->bInUseC = false;
    this->bTickC = true;
    this->bMaterialParameterEnableC = true;
    this->bSimulateControlEnableC = true;
    this->bSimulateControlAwakeC = false;
    this->bSimulateControlCheckC = true;
    this->bSimulateControlCheckRenderC = false;
    this->SimulateControlCheckRenderRadiusSqC = 0.00f;
    this->bSimulateControlApplyC = false;
    this->bSimulateControlBackUpC = false;
    this->bRenderC = true;
    this->bSwingTypeC = false;
    this->bBrainFieldObjectC = false;
    this->bUniqueObjectC = false;
    this->bTownSettingC = false;
    this->bBackupSettingC = false;
    this->bBackupSimualteC = false;
    this->bSearchableC = false;
    this->bSkipCheckRenderedC = true;
    this->bFixSearchPosC = false;
    this->bSearchHeightC = false;
    this->SearchHeightMinC = 0.00f;
    this->SearchHeightMaxC = 0.00f;
    this->SearchRadiusC = 0.00f;
    this->SearchSizeValueC = 0.00f;
    this->SearchPointC = 0;
    this->bArrangeResetEnableC = false;
}

