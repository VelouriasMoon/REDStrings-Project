#include "MapGimmickObject.h"
#include "Components/SceneComponent.h"

class AActor;
class AGimmickTriggerVolume;
class AMapGimmickObject;
class UAnimMontage;
class UObject;
class UPrimitiveComponent;
class USkeletalMeshComponent;

bool AMapGimmickObject::UpdateWidgetGauge_Implementation() {
    return false;
}

void AMapGimmickObject::SetUsing(bool Using) {
}

void AMapGimmickObject::SetStateNeedTick(bool Need) {
}

bool AMapGimmickObject::SetNeedTick(bool Need) {
    return false;
}

bool AMapGimmickObject::SetLimitIconVisible_Implementation(bool Visible, bool limit, bool IsSuccess) {
    return false;
}

void AMapGimmickObject::SetIsFinished(bool Finished) {
}

bool AMapGimmickObject::SetIconVisible_Implementation(bool Visible, bool IsSuccess, bool IsCancel) {
    return false;
}

bool AMapGimmickObject::SetIconGaugeEnableProxy_Implementation(bool Enable) {
    return false;
}

void AMapGimmickObject::SetExplosionNeedTick(bool Need) {
}

void AMapGimmickObject::SetEnablePhysicsPerBone_Implementation(USkeletalMeshComponent* SkeletalMesh, FName BoneName, bool Enable) {
}

void AMapGimmickObject::SetEnablePhysics_Implementation(bool Enable) {
}

void AMapGimmickObject::SetEnableAttackCollision_Implementation(bool Enable) {
}

void AMapGimmickObject::SetCanActivate(bool NewCanActivate) {
}

bool AMapGimmickObject::SetAttackCollisionActive_Implementation(bool Active) {
    return false;
}

void AMapGimmickObject::SetAlreadyExplode(bool Explode) {
}

bool AMapGimmickObject::SetActive(bool Active) {
    return false;
}

void AMapGimmickObject::ResetChargeTime() {
}

bool AMapGimmickObject::RequestChangeState(EMapGimmickStateRequest Type) {
    return false;
}

bool AMapGimmickObject::PartnerOnEndTriggerVolumeOverlap_Implementation(RSPartyPlayerKind::Type playerId, AGimmickTriggerVolume* Volume) {
    return false;
}

void AMapGimmickObject::PartnerOnEndOverlapCallback(AGimmickTriggerVolume* Volume, AActor* OverlappedActor, AActor* OtherActor, TEnumAsByte<RSPartyPlayerKind::Type> playerId) {
}

bool AMapGimmickObject::PartnerOnBeginTriggerVolumeOverlap_Implementation(RSPartyPlayerKind::Type playerId, AGimmickTriggerVolume* Volume) {
    return false;
}

void AMapGimmickObject::PartnerOnBeginOverlapCallback(AGimmickTriggerVolume* Volume, AActor* OverlappedActor, AActor* OtherActor, TEnumAsByte<RSPartyPlayerKind::Type> playerId) {
}

void AMapGimmickObject::OnStateEndFunction_Implementation(FName StateName) {
}

void AMapGimmickObject::OnStateBeginFunction_Implementation(FName StateName) {
}

bool AMapGimmickObject::OnMapGimmickChargeStart_Implementation(AMapGimmickObject* GimmickActor) const {
    return false;
}

bool AMapGimmickObject::OnMapGimmickChargeEnd_Implementation(AMapGimmickObject* GimmickActor) const {
    return false;
}

bool AMapGimmickObject::OnMapGimmickChargeCancel_Implementation(AMapGimmickObject* GimmickActor) const {
    return false;
}

bool AMapGimmickObject::OnEndUseLimitIconVisibleOverlap_Implementation() {
    return false;
}

bool AMapGimmickObject::OnEndTriggerVolumeOverlap_Implementation() {
    return false;
}

void AMapGimmickObject::OnEndOverlapCallback(AGimmickTriggerVolume* Volume, AActor* OverlappedActor, AActor* OtherActor) {
}

bool AMapGimmickObject::OnEndForceIconVisibleOverlap_Implementation() {
    return false;
}

void AMapGimmickObject::OnChangeGimmickState_Implementation(FName StateName) {
}

bool AMapGimmickObject::OnBeginUseLimitIconVisibleOverlap_Implementation() {
    return false;
}

bool AMapGimmickObject::OnBeginTriggerVolumeOverlap_Implementation() {
    return false;
}

void AMapGimmickObject::OnBeginOverlapCallback(AGimmickTriggerVolume* Volume, AActor* OverlappedActor, AActor* OtherActor) {
}

bool AMapGimmickObject::OnBeginForceIconVisibleOverlap_Implementation() {
    return false;
}

bool AMapGimmickObject::IsActive() {
    return false;
}

void AMapGimmickObject::InitializeGimmickStatus_Implementation() {
}

FMapGimmickState AMapGimmickObject::GetStateByName(FName StateName) {
    return FMapGimmickState{};
}

float AMapGimmickObject::GetPsychicCost() const {
    return 0.0f;
}

UPrimitiveComponent* AMapGimmickObject::GetPrimitive_Implementation() const {
    return NULL;
}

UAnimMontage* AMapGimmickObject::GetPlayerStartAnimation(EPlayerCaptureAnimPattern Pattern, EPlayerID Player) {
    return NULL;
}

UAnimMontage* AMapGimmickObject::GetPlayerLoopAnimation(EPlayerCaptureAnimPattern Pattern, EPlayerID Player) {
    return NULL;
}

FVector AMapGimmickObject::GetPlayerLookAtPosition_Implementation() const {
    return FVector{};
}

USceneComponent* AMapGimmickObject::GetPlayerLookAtComponent_Implementation() const {
    return NULL;
}

UAnimMontage* AMapGimmickObject::GetPlayerEndAnimation(EPlayerCaptureAnimPattern Pattern, EPlayerID Player) {
    return NULL;
}

float AMapGimmickObject::GetPlayerDeltaSecond() {
    return 0.0f;
}

float AMapGimmickObject::GetPlayerCustomDilation() {
    return 0.0f;
}

UAnimMontage* AMapGimmickObject::GetPlayerCancelAnimation(EPlayerCaptureAnimPattern Pattern, EPlayerID Player) {
    return NULL;
}

FName AMapGimmickObject::GetNextStateName() const {
    return NAME_None;
}

FName AMapGimmickObject::GetNextCancelStateName() const {
    return NAME_None;
}

FVector AMapGimmickObject::GetLookAtPosition_Implementation() const {
    return FVector{};
}

USceneComponent* AMapGimmickObject::GetLookAtComponent_Implementation() const {
    return NULL;
}

bool AMapGimmickObject::GetIsFinished() const {
    return false;
}

FVector AMapGimmickObject::GetIconPosition_Implementation() const {
    return FVector{};
}

USceneComponent* AMapGimmickObject::GetIconComponent_Implementation() const {
    return NULL;
}

float AMapGimmickObject::GetFinishMovementScale_Implementation(EPlayerID Player) {
    return 0.0f;
}

float AMapGimmickObject::GetCaptureMovementScale_Implementation(EPlayerID Player) {
    return 0.0f;
}

UPrimitiveComponent* AMapGimmickObject::GetAttackCollisionPrimitive_Implementation() const {
    return NULL;
}

void AMapGimmickObject::CustomDelay(UObject* worldContextObject_, float Duration, FLatentActionInfo latentInfo_) {
}

FName AMapGimmickObject::ChangeToNextState() {
    return NAME_None;
}

FName AMapGimmickObject::ChangeToNextInCancelState() {
    return NAME_None;
}

FName AMapGimmickObject::ChangeState(FName StateName) {
    return NAME_None;
}

bool AMapGimmickObject::CanCharge() {
    return false;
}

bool AMapGimmickObject::CanAddDriveGauge_Implementation() const {
    return false;
}

bool AMapGimmickObject::CanActivate() const {
    return false;
}

bool AMapGimmickObject::CallStateTickFunction(float DeltaTime, FName StateName) {
    return false;
}

bool AMapGimmickObject::CallStateEndFunction(FName StateName) {
    return false;
}

bool AMapGimmickObject::CallStateCancelFunction(FName StateName) {
    return false;
}

bool AMapGimmickObject::CallStateBeginFunction(FName StateName) {
    return false;
}

bool AMapGimmickObject::CallFunctionByName(FName StateName, float DeltaTime, EMapGimmickStatusFunc Func) {
    return false;
}

bool AMapGimmickObject::CallbackUseThisGimmick_Implementation(AMapGimmickObject* gimmick) {
    return false;
}

AMapGimmickObject::AMapGimmickObject() {
    this->MapGimmickManager = NULL;
    this->MapGimmickType = EMapGimmickType::MGIMMICKTYPE_UNKNOWN;
    this->StateDefineTable = NULL;
    this->UseWeightGauge = false;
    this->UseBossGauge = false;
    this->IsOverlapBroadcastToPlayer = true;
    this->CanUseGimmickFlag = true;
    this->ModelRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ModelRoot"));
    this->CurrentStateStep = 0;
    this->TimeInState = 0.00f;
    this->ChargeTimeToActivate = 1.00f;
    this->ChargeCancelingTime = 0.50f;
    this->PsychicCost = 1.00f;
    this->CurrentChargeTime = 0.00f;
    this->InitialChargeTime = 0.00f;
    this->IsAdjustPlaceInCharge = false;
    this->LengthPlaceInCharge = 1000.00f;
    this->IsAdjustPlaceInFinish = false;
    this->LengthPlaceInFinish = 1000.00f;
    this->UsePlayerTick = false;
    this->PlayerCaptureAnimationInfoDataTable = NULL;
    this->PlayerCaptureLeftAnimationInfoDataTable = NULL;
    this->PlayerFinishAnimationInfoDataTable = NULL;
    this->PlayerKasaneCaptureRightAnimationInfoDataTable = NULL;
    this->PlayerKasaneCaptureLeftAnimationInfoDataTable = NULL;
    this->PlayerKasaneFinishAnimationInfoDataTable = NULL;
    this->IsSearchable = false;
    this->IsSearchUnique = false;
    this->IsSearchMapGimmick = false;
    this->IsInForceIconArea = false;
    this->IsInLimitIconArea = false;
    this->IsCanceling = false;
    this->bIsActive = true;
    this->IsSetupSequencePlay = false;
    this->ActivateCameraBeginInterpSec = 0.00f;
    this->ActivateCameraBeginInterpCurve = NULL;
    this->IsEndPlaybackcameraSequence = false;
    this->ActivateCameraEndInterpSec = 0.00f;
    this->ActivateCameraEndInterpCurve = NULL;
    this->IsNeedTick = false;
    this->IsCharging = false;
    this->IsUsing = false;
    this->ExplodeNeedTick = false;
    this->IsPlayerInVolume = false;
    this->IsFinished = false;
    this->CanReuse = false;
    this->IsFailedByEnemy = false;
    this->LastHitVolumeDir = EMapGimmickFinishDir::MGDIR_FORWARD;
    this->_CanActivate = false;
    this->StateNeedTick = false;
    this->AlreadyExplode = false;
    this->IsDelayUpdateIconVisible = false;
    this->ToBeIconVisible = false;
}

