#include "PlayerCameraComponent.h"

class AActor;
class ACameraActor;
class AMapGimmickObject;
class ARSCharacterBase;
class UCurveFloat;

void UPlayerCameraComponent::UpdateUniqueObjectPlayerLerp(float timeRate) {
}

void UPlayerCameraComponent::UpdateUniqueObjectCameraRemoteType() {
}

void UPlayerCameraComponent::UpdateTriggerInfoLerp() {
}

void UPlayerCameraComponent::UpdateTemporaryParameter() {
}

void UPlayerCameraComponent::UpdateRootLerpActionLerp() {
}

void UPlayerCameraComponent::UpdateLockOnRotateSpeedLerp() {
}

void UPlayerCameraComponent::UpdateLockOnReturnAction() {
}

void UPlayerCameraComponent::UpdateLockOnLookAtObjLerp(float Rate) {
}

void UPlayerCameraComponent::UpdateCameraLockOnLerp() {
}

void UPlayerCameraComponent::UpdateCameraActionReset() {
}

void UPlayerCameraComponent::UpdateBattleCameraLerp() {
}

void UPlayerCameraComponent::UpdateAttentionCamera() {
}

void UPlayerCameraComponent::UpdateAsyncTrace() {
}

void UPlayerCameraComponent::UpdateAsyncParameter() {
}

void UPlayerCameraComponent::TickAsyncSlopeAssist() {
}

void UPlayerCameraComponent::TestTrace(FVector posS, FVector Pose, float Radius, float dTime) {
}

void UPlayerCameraComponent::SetUniqueObjectPlayerPullParameter(float pullDistance, float MoveDistMax) {
}

void UPlayerCameraComponent::SetUniqueObjectPlayerLerpParameter(TArray<float> angleList, float traceDist, float lerpDist, float enmDist, float enmRate) {
}

void UPlayerCameraComponent::SetUniqueObjectPlayerLerpAuto(ARSCharacterBase* pEnemyActor, float radiusEnm, float radiusPly) {
}

void UPlayerCameraComponent::SetUniqueObjectPlayerLerp(FVector tgtPos) {
}

void UPlayerCameraComponent::SetUniqueObjectLookAtRate(float LookAtRate, float LerpTime, float DelayRate) {
}

void UPlayerCameraComponent::SetUniqueObjectEnemyLerp(FVector tgtPos) {
}

void UPlayerCameraComponent::SetUniqueObjectCameraSocketTypeOption(AActor* pObjActor) {
}

void UPlayerCameraComponent::SetUniqueObjectCameraSocketType(bool Flag, FCameraUniqueObjectParameter Param) {
}

void UPlayerCameraComponent::SetUniqueObjectCameraSocketApply(bool Flag, float LerpTime) {
}

void UPlayerCameraComponent::SetUniqueObjectCameraRemoteType(bool Flag, AActor* pRemoteActor, FCameraUniqueObjectParameter Param) {
}

void UPlayerCameraComponent::SetUniqueObjectCameraControlType(bool Flag, AActor* pObjActor, FCameraUniqueObjectParameter Param, bool bSkipResetCamera) {
}

void UPlayerCameraComponent::SetUniqueObjectCamera(bool Flag, AActor* pObjActor, AActor* pEnmActor, FCameraUniqueObjectParameter Param) {
}

void UPlayerCameraComponent::SetTemporaryParameter(bool Flag, float LerpTime, const FString& refName, EPlayerCameraActionPriority Priority, bool bEnableRootOffset, bool bRootOffsetNoRotate, FVector rootOffset, bool bEnableCamDistance, float camDistance, bool bEnableFov, float FOV, TEnumAsByte<EEasingFunc::Type> easeFunc, float easeBlendExp) {
}

void UPlayerCameraComponent::SetTemporaryOption(bool bSkipInput, bool bSkipReturn, bool bSkipKeepAngle) {
}

void UPlayerCameraComponent::SetSlopeAssistSkip(bool Flag) {
}

void UPlayerCameraComponent::SetRootLerpActionParameter(bool Flag, const FString& refName, EPlayerCameraActionPriority prio, float LerpTime, float LerpValue, float maxDist) {
}

void UPlayerCameraComponent::SetRootLerpActionName(bool Flag, const FString& refName, EPlayerCameraActionPriority prio, float LerpTime, FName ActionName) {
}

void UPlayerCameraComponent::SetPlayerCameraMode(EPlayerCameraMode camMode) {
}

void UPlayerCameraComponent::SetPlayerCamera(AActor* CameraActor) {
}

void UPlayerCameraComponent::SetOptionParam(ECameraDistance CameraDistance, uint8 LockonSpeedParam, uint8 BehindSpeed) {
}

void UPlayerCameraComponent::SetMaleOwner(bool bFlag) {
}

void UPlayerCameraComponent::SetLockRootPosParameter(float skipDist, float restoreDist) {
}

void UPlayerCameraComponent::SetLockOnRotateSpeedLerp(bool bSign) {
}

void UPlayerCameraComponent::SetLockOnReturnSkip(bool Flag) {
}

void UPlayerCameraComponent::SetLockOnReturnAction(bool bFlag, bool bLerpHz, float lerpTimeHz, float angleRateHz) {
}

void UPlayerCameraComponent::SetLockOnLookAtObj(bool bFlag, AActor* pObjActor, bool bDelay) {
}

void UPlayerCameraComponent::SetLockOnKeepAngleSkip(bool Flag) {
}

void UPlayerCameraComponent::SetLerpTriggerInfo(FCameraTriggerInfo triggerInfo, UCurveFloat* pEndCurve) {
}

void UPlayerCameraComponent::SetInputMoveParameter(float delayValue, const TArray<float>& delayValueOptionParamList, float delayValueVt, float delayDistMax, float speedRateHz, float decelHz, float vtAngleMin, float vtAngleMax) {
}

void UPlayerCameraComponent::SetEventTriggerInfo(bool Flag, FCameraTriggerInfo triggerInfo) {
}

void UPlayerCameraComponent::SetCameraSpeed(float spinSpeedVt, float spinAccelVt, float spinDecelVt, float spinSpeedHz, float spinAccelHz, float spinDecelHz) {
}

void UPlayerCameraComponent::SetCameraRotation(FRotator Rot, bool bOverwrite) {
}

void UPlayerCameraComponent::SetCameraRoot(AActor* NewPRootActor, FVector Offset, bool bAttachIn) {
}

void UPlayerCameraComponent::SetCameraRoatatLimit(float vtAngleMin, float vtAngleMax) {
}

void UPlayerCameraComponent::SetCameraPlayerParameter(bool bYuito) {
}

void UPlayerCameraComponent::SetCameraMovementDelay(bool bDelay) {
}

void UPlayerCameraComponent::SetCameraLockOnMapGimmick(AMapGimmickObject* pMapGimmick, bool ResetOnly) {
}

void UPlayerCameraComponent::SetCameraLockOn(AActor* pTargetActor) {
}

void UPlayerCameraComponent::SetCameraLocation(FVector Pos) {
}

void UPlayerCameraComponent::SetCameraInputRotate(float spinRateVt, float spinRateHz) {
}

void UPlayerCameraComponent::SetCameraInputMove(FVector inputMove, float hzRate, float vtRate) {
}

void UPlayerCameraComponent::SetCameraFieldOfView(float FOV) {
}

void UPlayerCameraComponent::SetCameraDefault(float angleVt, float angleHz) {
}

void UPlayerCameraComponent::SetCameraCollisionParameter(float camRadius, float distSpeedAccel, float distSpeedMax) {
}

void UPlayerCameraComponent::SetCameraByCameraActor(ACameraActor* pCamActor, bool bPitch, float BlendTime, TEnumAsByte<EViewTargetBlendFunction> BlendFunc, float BlendExp) {
}

void UPlayerCameraComponent::SetCameraActionReset(bool Flag, float LerpTime, float keepTime) {
}

void UPlayerCameraComponent::SetBattleCamera(bool bSign, bool bLerp) {
}

void UPlayerCameraComponent::SetAttentionCameraOption(bool bFixAngleVt, float fixAngleVt, bool bOffsetDistHz, float offsetDistHz) {
}

void UPlayerCameraComponent::SetAttentionCamera(bool Flag, bool bLookAtActor, FVector lookAtPos, AActor* pTgtActor, UCurveFloat* pActorCurve, bool ChangeFov, float tgtFov, UCurveFloat* pFovCurve) {
}

void UPlayerCameraComponent::SetAssistRootHeightParam(float heightDistY, float heightDistK, float minDist, float maxDist, float heightAngleY, float heightAngleK, float minAngle, float maxAngle) {
}

void UPlayerCameraComponent::SetAssistRootHeight(bool Flag) {
}

void UPlayerCameraComponent::SetAssistKeepAngle(bool bFlag) {
}

void UPlayerCameraComponent::SetAreaTriggerInfo(FCameraTriggerInfo triggerInfo, bool bLerp) {
}

void UPlayerCameraComponent::SetAreaChangeSkipLerp(bool Flag, const FString& refName) {
}

void UPlayerCameraComponent::ResetTriggerInfoLerp() {
}

void UPlayerCameraComponent::ResetTriggerInfo() {
}

void UPlayerCameraComponent::ResetSlopeAssist() {
}

void UPlayerCameraComponent::ResetLockOnRotateSpeedRate() {
}

void UPlayerCameraComponent::ResetLockEnemyPos() {
}

void UPlayerCameraComponent::ResetCameraHz(float LerpTime, bool bUpdateAngleHz, bool bSkipCheck) {
}

void UPlayerCameraComponent::ResetCamera(float LerpTime, bool bUpdateAngleHz, bool bSkipCheck) {
}

void UPlayerCameraComponent::PrevUpdateUniqueObjectCamera() {
}

void UPlayerCameraComponent::PrevAsyncSlopeAssist() {
}

void UPlayerCameraComponent::PostUpdateUniqueObjectCamera() {
}

bool UPlayerCameraComponent::isOptionSpinMoveInputEnable() {
    return false;
}

bool UPlayerCameraComponent::isOptionSpinMoveDecelEnable() {
    return false;
}

bool UPlayerCameraComponent::IsMaleOwner() {
    return false;
}

void UPlayerCameraComponent::Initialize() {
}

FRotator UPlayerCameraComponent::GetRootActorRotation(bool bSkipCheck) {
    return FRotator{};
}

bool UPlayerCameraComponent::GetRootActorMeshComponent() {
    return false;
}

FVector UPlayerCameraComponent::GetRootActorLocation(bool bSkipCheck) {
    return FVector{};
}

EPlayerCameraMode UPlayerCameraComponent::GetPlayerCameraMode() {
    return EPlayerCameraMode::PlayerCamera;
}

FVector UPlayerCameraComponent::GetLockRootPos(bool bLockCheck) {
    return FVector{};
}

float UPlayerCameraComponent::GetLockOnReturnAngleHz() {
    return 0.0f;
}

float UPlayerCameraComponent::GetLockOnLookAtObjRate() {
    return 0.0f;
}

FVector UPlayerCameraComponent::GetLockEnemyPos() {
    return FVector{};
}

FRotator UPlayerCameraComponent::GetCameraRotation() {
    return FRotator{};
}

bool UPlayerCameraComponent::GetCameraPreset_Implementation(EPlayerCameraPreset PresetName, FPlayerCameraPreset& dstPreset, bool bOffset) {
    return false;
}

float UPlayerCameraComponent::GetCameraLockOnLerpRate() {
    return 0.0f;
}

FVector UPlayerCameraComponent::GetCameraLocation() {
    return FVector{};
}

float UPlayerCameraComponent::GetCameraFieldOfView() {
    return 0.0f;
}

float UPlayerCameraComponent::GetAspectRatio() {
    return 0.0f;
}

void UPlayerCameraComponent::EnableTemporaryParameter(float LerpTime, const FString& refName, EPlayerCameraActionPriority prio, FVector Offset, bool bEnableRootOffset, bool bRootOffsetNoRotate, FVector rootOffset, bool bEnableDistance, float Distance, bool bEnableFov, float FOV, TEnumAsByte<EEasingFunc::Type> easeFunc, float easeBlendExp) {
}

void UPlayerCameraComponent::DisableTemporaryParameter(float LerpTime, const FString& refName, EPlayerCameraActionPriority prio, TEnumAsByte<EEasingFunc::Type> easeFunc, float easeBlendExp) {
}

void UPlayerCameraComponent::DebugSetRecordListShowIndex(int32 commandNo) {
}

void UPlayerCameraComponent::DebugSetRecordListDraw(bool Flag) {
}

void UPlayerCameraComponent::DebugResetRecordList() {
}

void UPlayerCameraComponent::DebugInitRecordList(TArray<float> Radius, TArray<FColor> Color) {
}

void UPlayerCameraComponent::DebugDrawRecordList() {
}

void UPlayerCameraComponent::DebugDrawLockOnRotateSpeedRateLine() {
}

void UPlayerCameraComponent::DebugDrawLockOnReturnLine() {
}

void UPlayerCameraComponent::DebugAddRecordListCamPos(FVector posCam) {
}

void UPlayerCameraComponent::DebugAddRecordList(int32 posidx, int32 lineIdx, FVector value0, FVector Value1) {
}

FVector UPlayerCameraComponent::CheckRootPos(FVector posRoot, bool bDebugDraw) {
    return FVector{};
}

bool UPlayerCameraComponent::CheckRootOffsetHz() {
    return false;
}

float UPlayerCameraComponent::CalcUniqueObjectPlayerLerpAngle(FVector posCam, FVector posPly) {
    return 0.0f;
}

void UPlayerCameraComponent::CalcDefaultCameraLocationRotation_Implementation(FVector rootPos, FRotator rootRot, FVector& camPos, FRotator& camRot) {
}

void UPlayerCameraComponent::CalcAngleVtDistRate() {
}

void UPlayerCameraComponent::ApplyTriggerInfo(FCameraTriggerInfo triggerInfo) {
}

void UPlayerCameraComponent::ApplyOptionParam() {
}

void UPlayerCameraComponent::ApplyCameraPreset(FPlayerCameraPreset Preset) {
}

UPlayerCameraComponent::UPlayerCameraComponent() {
    this->fDeltaSecond = 0.00f;
    this->bMaleOwner = true;
    this->bMaleOwnerCheck = false;
    this->CameraMode = EPlayerCameraMode::PlayerCamera;
    this->LookAtMode = EPlayerCameraLookAtMode::Normal;
    this->pCameraActor = NULL;
    this->pRootActorCapsule = NULL;
    this->RootActorCapsuleHeight = 0.00f;
    this->pRootActorPlayerScript = NULL;
    this->bCheckRootPosType = false;
    this->bCheckRootPosMidCheck = false;
    this->fAspectRatio = 1.00f;
    this->fAspectRateVt = 0.00f;
    this->fAspectRateHz = 0.00f;
    this->bWorkPosPlayer = false;
    this->bWorkPosRemote = false;
    this->bActionResetApply = false;
    this->fActionResetLerpTime = 0.00f;
    this->fActionResetLerpTimer = 0.00f;
    this->fActionResetKeepTime = 0.00f;
    this->fActionResetKeepTimer = 0.00f;
    this->fActionResetLerpAngleStt = 0.00f;
    this->fActionResetLerpAngleEnd = 0.00f;
    this->bDebugPrintActionReset = false;
    this->bMovementDelay = false;
    this->bTemporaryCameraEnable = true;
    this->TemporaryCameraPriority = EPlayerCameraActionPriority::Invalid;
    this->bTemporaryCameraApply = false;
    this->bTemporaryRootOffsetApply = false;
    this->bTemporaryRootOffsetNoRotate = false;
    this->bTemporaryDistanceOffsetApply = false;
    this->TemporaryDistanceOffset = 0.00f;
    this->bTemporaryFovApply = false;
    this->TemporaryFov = 0.00f;
    this->TemporaryLockOnRate = 1.00f;
    this->TemporaryOptionSkipInput = 0.00f;
    this->TemporaryOptionSkipReturn = 0.00f;
    this->TemporaryOptionSkipKeepAngle = 0.00f;
    this->bDebugTemporaryUseNew = true;
    this->bDebugPrintTemporary = false;
    this->bSlopeAssistEnable = true;
    this->bSlopeAssistSkip = true;
    this->bSlopeAssistAsyncRequestPrevProc = true;
    this->bSlopeAssistAsyncRequestTaskProc = false;
    this->bSlopeAssistAsyncRequestTaskDone = false;
    this->SlopeAssistCheckNum = 4;
    this->SlopeAssistCheckInterval = 100.00f;
    this->SlopeAssistCheckIntervalAngle = 5.00f;
    this->SlopeAssistCheckAngleVtMax = 45.00f;
    this->SlopeAssistCheckAngleVtStt = 25.00f;
    this->SlopeAssistCheckAngleVtEnd = 20.00f;
    this->SlopeAssistCheckAngleHz = 45.00f;
    this->bSlopeAssistSkipMoveDir = false;
    this->bSlopeAssistLerpApply = false;
    this->SlopeAssistLerpRate = 1.50f;
    this->SlopeAssistLerpAngleVt = 0.00f;
    this->SlopeAssistDelayTime = 2.00f;
    this->SlopeAssistDelayTimer = 0.00f;
    this->bSlopeAssistCheckBgEnable = true;
    this->bSlopeAssistFixAngleEnable = true;
    this->SlopeAssistFixAngleInterval = 20.00f;
    this->SlopeAssistFixAngleRange = 15.00f;
    this->bSlopeAssistSpeedLerpEnable = true;
    this->SlopeAssistSpeedLerpMin = 800.00f;
    this->SlopeAssistSpeedLerpMax = 1000.00f;
    this->SlopeAssistSpeedLerpRateMax = 10.00f;
    this->SlopeAssistSpeedLerpRate = 0.00f;
    this->bDebugSlopeAssistSyncApply = false;
    this->bDebugPrintSlopeAssist = false;
    this->bDebugDrawSlopeAssistVector = false;
    this->bDebugDrawSlopeAssistCheckPoint = false;
    this->bDebugDrawSlopeAssistCheckHit = false;
    this->bDebugPrintDistance = false;
    this->bDebugTraceHit = false;
    this->bInputEnable = true;
    this->fInputLtX = 0.00f;
    this->fInputLtY = 0.00f;
    this->fInputRtX = 0.00f;
    this->fInputRtY = 0.00f;
    this->bInputLt = false;
    this->bInputRt = false;
    this->bInputUp = false;
    this->bInputDn = false;
    this->bInputAngle = false;
    this->bTurnCheckEnable = true;
    this->bTurnCheckReturnEnable = false;
    this->fTurnCheckReturnTime = 1.00f;
    this->bDebugTurnCheckFlag1 = false;
    this->bDebugTurnCheckDrawCt = false;
    this->bDebugTurnCheckDrawCtRay = false;
    this->fDefaultFov = 75.00f;
    this->fDefaultAngleVt = 9.00f;
    this->fDefaultAngleHz = 180.00f;
    this->fDefaultDistance = 550.00f;
    this->fDefaultDistanceMin = 50.00f;
    this->fCurrentFov = 0.00f;
    this->fCurrentAngleVt = 0.00f;
    this->fCurrentAngleHz = 0.00f;
    this->fCurrentDistance = 0.00f;
    this->fDestinationAngleVt = 0.00f;
    this->fDestinationAngleHz = 0.00f;
    this->fDestinationDistance = 0.00f;
    this->bDebugDrawDestinationRootList = false;
    this->bBattleOffsetEnable = true;
    this->bBattleOffset = false;
    this->bBattleOffsetLerp = false;
    this->bBattleOffsetLerpSign = false;
    this->fBattleOffsetTime = 1.00f;
    this->fBattleOffsetTimer = 0.00f;
    this->fBattleOffsetLerpRate = 0.00f;
    this->fBattleOffsetDistanceLerp = 0.00f;
    this->fBattleOffsetDistance = 0.00f;
    this->bDebugPrintBattleOffset = false;
    this->bLockRootPosEnable = true;
    this->bLockRootPosSkip = false;
    this->fRestoreRootPosLerpRate = 0.20f;
    this->fLockRootPosDistance = 30.00f;
    this->fRestoreRootPosDistance = 0.10f;
    this->bDebugPrintLockRootPos = false;
    this->bRootLerpEnable = true;
    this->fRootLerpValueDefault = 4.00f;
    this->fRootLerpValueDefaultApplyOption = 4.00f;
    this->fRootLerpValueAction = 0.00f;
    this->fRootLerpValue = 4.00f;
    this->fRootLerpValueVt = 10.00f;
    this->fRootLerpDistanceDefault = 200.00f;
    this->fRootLerpDistanceAction = 0.00f;
    this->fRootLerpDistance = 200.00f;
    this->fRootLerpDistanceWork = 0.00f;
    this->fRootLerpDistanceMin = 100.00f;
    this->fRootLerpDistanceTarget = 0.00f;
    this->fRootLerpDistanceMove = 0.00f;
    this->bRootLerpActionLerp = false;
    this->RootLerpActionPriority = EPlayerCameraActionPriority::Invalid;
    this->fRootLerpActionLerpRate = 0.00f;
    this->bRootLerpAngleEnable = true;
    this->fRootLerpDirLerpRate = 0.00f;
    this->fRootLerpDirLerpRateMin = 0.10f;
    this->fRootLerpMoveLerpValue = 300.00f;
    this->fRootLerpMoveLerpRate = 0.00f;
    this->fRootLerpMoveLerpRateMin = 0.10f;
    this->fRootLerpAngleLerpRate = 15.00f;
    this->fRootLerpAngleRate = 0.00f;
    this->bRootLerpCamDistEnable = true;
    this->fRootLerpCamDistRate = 1.00f;
    this->bDebugPrintRootLerp = false;
    this->bDebugPrintRootLerpAction = false;
    this->fSpinSpeedMaxHz = 112.50f;
    this->fSpinAccelHz = 0.00f;
    this->fSpinDecelHz = 0.00f;
    this->fSpinDirectionHz = 0.00f;
    this->fSpinSpeedHz = 0.00f;
    this->fSpinInputHz = 0.00f;
    this->fSpinMoveInputHz = 0.00f;
    this->fSpinMoveRateHz = 1.00f;
    this->fSpinMoveDecelHz = 0.00f;
    this->fSpinMoveSpeedHz = 0.00f;
    this->fSpinAngleMin = 0.00f;
    this->fSpinAngleMax = 0.00f;
    this->fSpinSpeedMaxVt = 60.00f;
    this->fSpinAccelVt = 0.00f;
    this->fSpinDecelVt = 0.00f;
    this->fSpinDirectionVt = 0.00f;
    this->fSpinSpeedVt = 0.00f;
    this->fSpinInputVt = 0.00f;
    this->fSpinMoveInputVt = 0.00f;
    this->fSpinMoveAngleMinVt = 0.00f;
    this->fSpinMoveAngleMaxVt = 0.00f;
    this->bAngleVtDistEnable = true;
    this->fAngleVtDistRate = 1.00f;
    this->bAngleVtRootEnable = true;
    this->fAngleVtRootRate = 0.00f;
    this->bLockOnApply = false;
    this->LockOnAngleLimitPly = 30.00f;
    this->LockOnAngleLimitCam = 30.00f;
    this->fLockOnAngleUp = 0.00f;
    this->fLockOnAngleDn = 0.00f;
    this->fLockOnAngleLt = 0.00f;
    this->fLockOnAngleRt = 0.00f;
    this->bDebugNoLerpVtAngle = false;
    this->bLockOnRoot = false;
    this->fLookAtDistanceOffset = 0.00f;
    this->bDebugPrintLogLockOn = false;
    this->bLockOnLerp = false;
    this->fLockOnLerpTime = 0.20f;
    this->fLockOnLerpTimeSign = 0.00f;
    this->fLockOnLerpTimer = 0.00f;
    this->fLockOnLerpRate = 0.00f;
    this->bLockOnLerpAngleVtEnable = false;
    this->bLockOnLerpAngleVtApply = false;
    this->fLockOnLerpAngleVtStt = 0.00f;
    this->fLockOnLerpAngleVtEnd = 0.00f;
    this->fLockOnLerpAngleVtEaseBlend = 2.00f;
    this->bDebugPrintLockOnLerp = false;
    this->bLockOnLookAtObj = false;
    this->bLockOnObjLerp = false;
    this->fLockOnObjLerpRateStt = 0.00f;
    this->fLockOnObjLerpRate = 0.00f;
    this->fLockOnObjLerpAngleMax = 5.00f;
    this->fLockOnObjLerpTimeStart = 0.50f;
    this->fLockOnObjLerpTime = 0.00f;
    this->fLockOnObjLerpTimeEnd = 0.20f;
    this->fLockOnObjLerpTimer = 0.00f;
    this->fLockOnObjLerpTimeSign = 0.00f;
    this->bLockOnObjLerpDelayApply = false;
    this->fLockOnObjLerpDelayTime = 0.50f;
    this->fLockOnObjLerpDelayTimer = 0.00f;
    this->bDebugPrintLockOnObjLerp = false;
    this->bLockOnLookAtDistAngleVtLerpEnable = true;
    this->fLockOnLookAtDistAngleVtLerpRate = 0.00f;
    this->bLockOnLookAtDistCamDistEnable = true;
    this->fLockOnLookAtDistCamDistLerpRate = 0.00f;
    this->bLockOnRotateSpeedRateEnable = true;
    this->fLockOnRotateSpeedRateFovRateHz = 1.00f;
    this->fLockOnRotateSpeedRateFovRateVt = 1.00f;
    this->fLockOnRotateSpeedRateAngleHz = 0.00f;
    this->fLockOnRotateSpeedRateAngleVt = 0.00f;
    this->bLockOnRotateSpeedRateLerp = false;
    this->bLockOnRotateSpeedRateSign = false;
    this->fLockOnRotateSpeedRateTimeDecel = 0.50f;
    this->fLockOnRotateSpeedRateTimeReturn = 0.20f;
    this->fLockOnRotateSpeedRateTimer = 0.00f;
    this->fLockOnRotateSpeedRateCurrent = 1.00f;
    this->bDebugPrintLockOnRotateSpeed = false;
    this->bDebugDrawLockOnRotateLine = false;
    this->bLockOnReturnEnable = true;
    this->bLockOnReturnSkip = false;
    this->fLockOnReturnAngleHz = 0.00f;
    this->fLockOnReturnAngleVt = 0.00f;
    this->bLockOnReturnCheck = false;
    this->bLockOnReturnLerpStt = false;
    this->bLockOnReturnLerpHz = false;
    this->bLockOnReturnLerpHzPly = false;
    this->bLockOnReturnLerpVt = false;
    this->fLockOnReturnLerpTime = 0.50f;
    this->fLockOnReturnLerpTimer = 0.00f;
    this->fLockOnReturnAngleHzStt = 0.00f;
    this->fLockOnReturnAngleHzEnd = 0.00f;
    this->fLockOnReturnAngleVtStt = 0.00f;
    this->fLockOnReturnAngleVtEnd = 0.00f;
    this->bLockOnReturnClockwise = false;
    this->bLockOnReturnActionEnableHz = true;
    this->bLockOnReturnActionApplyHz = false;
    this->bLockOnReturnActionLerpHz = false;
    this->bLockOnReturnActionLerpEndHz = false;
    this->fLockOnReturnActionLerpTimeHz = 0.00f;
    this->fLockOnReturnActionLerpTimerHz = 0.00f;
    this->fLockOnReturnActionAngleHz = 0.00f;
    this->bDebugDrawLockOnReturnLine = false;
    this->bDebugPrintLockOnReturnSkip = false;
    this->bKeepAngleEnable = true;
    this->bKeepAngleApply = false;
    this->fKeepAngleLookAtDistance = 1000.00f;
    this->bLockOnKeepAngleEnable = true;
    this->bLockOnKeepAngleSpeedEnable = true;
    this->bLockOnKeepAngleSkip = false;
    this->bLockOnKeepAngleHzSkip = false;
    this->fLockOnKeepAngleHzSpeed = 120.00f;
    this->bLockOnKeepAngleVtSkip = false;
    this->fLockOnKeepAngleVtSpeed = 30.00f;
    this->bDebugPrintLockOnKeepAngleSkip = false;
    this->bLockEnemyPosEnable = true;
    this->bLockEnemyPosUpdateParam = true;
    this->bLockEnemyPosSkip = false;
    this->bLockEnemyPosUpdate = false;
    this->fLockEnemyLerpRate = 0.20f;
    this->fLockEnemyPosLockDistanceHz = 100.00f;
    this->fLockEnemyPosRestoreDistanceHz = 0.10f;
    this->bLockEnemyPosSkipHz = false;
    this->fLockEnemyPosLockDistanceVt = 100.00f;
    this->fLockEnemyPosRestoreDistanceVt = 0.10f;
    this->bLockEnemyPosSkipVt = false;
    this->fLockEnemyPosDistMaxHz = 0.00f;
    this->fLockEnemyPosDistMaxVt = 0.00f;
    this->bDebugPrintLockEnemyPos = false;
    this->LockOnMapGimmickLerpTime = 0.20f;
    this->bUniqueObjectCameraApply = false;
    this->bUniqueObjectCameraSocketType = false;
    this->bUniqueObjectCameraSocketOption = false;
    this->pUniqueObjectCameraMeshComp = NULL;
    this->bUniqueObjectCameraPlayerFix = false;
    this->bUniqueObjectCameraSocketApply = false;
    this->bUniqueObjectCameraSocketLerp = false;
    this->bUniqueObjectCameraSocketLerpEnd = false;
    this->UniqueObjectCameraSocketLerpTimeStt = 0.00f;
    this->UniqueObjectCameraSocketLerpTimeEnd = 0.00f;
    this->UniqueObjectCameraSocketLerpRate = 0.00f;
    this->bUniqueObjectCameraControlType = false;
    this->bUniqueObjectCameraRemoteType = false;
    this->bUniqueObjectCameraLookAtLerpApply = false;
    this->UniqueObjectCameraLookAtRate = 0.00f;
    this->UniqueObjectCameraLookAtLerpTime = 0.00f;
    this->UniqueObjectCameraLookAtLerpTimer = 0.00f;
    this->UniqueObjectCameraLookAtDelayRate = 0.00f;
    this->bUniqueObjectCameraDistNear = false;
    this->UniqueObjectCameraDistRate = 0.00f;
    this->bUniqueObjectCameraLerp = false;
    this->bUniqueObjectCameraLerpEnd = false;
    this->bUniqueObjectCameraLerpEndInstance = false;
    this->UniqueObjectCameraLerpTimer = 0.00f;
    this->UniqueObjectCameraLerpRate = 0.00f;
    this->bUniqueObjectCameraPlayerLeft = false;
    this->bDebugPrintUniqueObjectCamera = false;
    this->bDebugPrintUniqueObjectCameraPos = false;
    this->bDebugPrintUniqueObjectCameraPosLerp = false;
    this->bDebugPrintUniqueObjectCameraLookAt = false;
    this->bDebugPrintUniqueObjectCameraRot = false;
    this->bDebugPrintUniqueObjectCameraFov = false;
    this->bDebugPrintUniqueObjectCameraSocket = false;
    this->bDebugPrintUniqueObjectCameraControl = false;
    this->bDebugUniqueObjectCameraNewLookAt = false;
    this->bDebugPrintUniqueObjectCameraLookAtRate = false;
    this->bDebugDrawUniqueObjectCameraPos = false;
    this->bDebugDrawUniqueObjectCameraPosLerp = false;
    this->bDebugDrawUniqueObjectCameraLookAt = false;
    this->bDebugDrawUniqueObjectCameraTime = 0.00f;
    this->bDebugDrawUniqueObjectCameraBgTrace = 0.00f;
    this->bAttentionCameraApply = false;
    this->bAttentionLerpStt = false;
    this->bAttentionLerpEnd = false;
    this->bAttentionActor = false;
    this->pAttentionActorCurve = NULL;
    this->bAttentionActorFixAngleVt = false;
    this->AttentionActorFixAngleVt = 0.00f;
    this->bAttentionActorOffsetDistHz = false;
    this->AttentionActorOffsetDistHz = 0.00f;
    this->AttentionActorOffsetDistHzSign = 0.00f;
    this->bAttentionFov = false;
    this->pAttentionFovCurve = NULL;
    this->AttentionCameraLerpTime = 0.00f;
    this->AttentionCameraLerpRate = 0.00f;
    this->bDebugPrintAttentionCamera = false;
    this->bPlayerLerpAuto = false;
    this->fPlayerLerpTraceAngleList.AddDefaulted(2);
    this->fPlayerLerpTraceDistance = 500.00f;
    this->fPlayerLerpDistance = 300.00f;
    this->bPlayerLerp = false;
    this->fPlayerLerpRadius = 0.00f;
    this->pPlayerLerpCurve = NULL;
    this->fEnemyLerpDistance = 500.00f;
    this->fEnemyLerpRateDefault = 0.50f;
    this->fEnemyLerpRate = 0.00f;
    this->fEnemyLerpRadius = 0.00f;
    this->fPlayerPullDistance = -1.00f;
    this->fPlayerPullMoveDistMax = -1.00f;
    this->bEnemyLerp = false;
    this->bDebugDrawPlayerLerpVector = false;
    this->bDebugDrawPlayerLerpSphere = false;
    this->bDebugDrawEnemyLerpSphere = false;
    this->bDebugPrintEnemyLerpSphere = false;
    this->bLerpReset = false;
    this->bLerpUpdateAngleHz = false;
    this->bCameraReset = false;
    this->fLerpTime = 0.00f;
    this->fLerpRate = 0.00f;
    this->fCameraHitRadius = 0.00f;
    this->fCameraHitRadiusPlane = 0.00f;
    this->fCameraHitRadiusOffset = 0.00f;
    this->bCameraBuried = false;
    this->fDistSpeedAccel = 20000.00f;
    this->fDistSpeedMax = 10000.00f;
    this->fDistSpeed = 0.00f;
    this->bDebugDrawTraceCorner = false;
    this->bDebugDrawTraceCameraRoot = false;
    this->bDebugDrawTraceCameraDistance = false;
    this->bTriggerInfoLerp = false;
    this->TriggerInfoLerpTimer = 0.00f;
    this->pTriggerInfoLerpCurve = NULL;
    this->TriggerInfoLerpTime = 0.00f;
    this->TriggerInfoLerpTimeDefault = 0.50f;
    this->bTriggerInfoSkipLerp = false;
    this->bDebugNewTriggerEndLerp = true;
    this->bAssistRootHeight = true;
    this->fAssistRootHeightDistYut = 0.00f;
    this->fAssistRootHeightDistKsn = 0.00f;
    this->fAssistRootHeightDistMax = 0.00f;
    this->fAssistRootHeightDistRangeMin = 0.00f;
    this->fAssistRootHeightDistRangeMax = 0.00f;
    this->fAssistRootHeightAngleYut = 0.00f;
    this->fAssistRootHeightAngleKsn = 0.00f;
    this->fAssistRootHeightAngleMax = 0.00f;
    this->fAssistRootHeightAngleRangeMin = 0.00f;
    this->fAssistRootHeightAngleRangeMax = 0.00f;
    this->bDbDispAssistRootHeight = false;
    this->bAsyncRequestPrevProc = true;
    this->bAsyncRequestTaskProc = false;
    this->bAsyncTaskDone = false;
    this->ActorMoveDistMin = 1.00f;
    this->dbDrawTrace = false;
    this->bDebugPrintRootOffsetHz = false;
    this->bDebugDrawTraceRootOffsetHz = false;
    this->bDbTemp0 = false;
    this->bDbTemp1 = false;
    this->bDbTemp2 = false;
}

