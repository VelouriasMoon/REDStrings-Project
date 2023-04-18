#include "PlayerDriveComponent.h"

void UPlayerDriveComponent::UpdateNpcDriveInterval(float DeltaSeconds) {
}

void UPlayerDriveComponent::UpdateDriveTick(float DeltaSeconds) {
}

void UPlayerDriveComponent::SetSASCharge(bool bEnable) {
}

void UPlayerDriveComponent::SetRegenerateInterval(float Interval) {
}

void UPlayerDriveComponent::SetRegenerateHPRate(float Rate) {
}

void UPlayerDriveComponent::SetRegenerate(bool bEnable) {
}

void UPlayerDriveComponent::SetRecoveryBadStatus(bool bEnable) {
}

void UPlayerDriveComponent::SetPauseDriveTimer(bool bPause) {
}

void UPlayerDriveComponent::SetNpcDriveData(FNpcDriveData& InData) {
}

void UPlayerDriveComponent::SetNexusDriveSeeThroughAddRate(float Rate) {
}

void UPlayerDriveComponent::SetExtendTimeBrainCrash(float ExtendTime) {
}

void UPlayerDriveComponent::SetDriveParameter(FPlayerDriveParameter Parameter) {
}

void UPlayerDriveComponent::SetDriveGaugeParameter(FPlayerDriveGaugeParameter Parameter) {
}

void UPlayerDriveComponent::SetDriveGaugeIncreaseRate(float Rate) {
}

void UPlayerDriveComponent::SetDriveGaugeDirect(float Value) {
}

void UPlayerDriveComponent::SetDriveCommonParameter(FPlayerDriveCommonParameter Parameter) {
}

void UPlayerDriveComponent::RestrictDriveBegin(bool bRestrict) {
}

void UPlayerDriveComponent::ResetNpcDriveInterval() {
}

void UPlayerDriveComponent::ResetDriveGauge() {
}

void UPlayerDriveComponent::ResetBrainFieldCount() {
}

void UPlayerDriveComponent::ReserveNpcDrive(bool bCrashVision) {
}

void UPlayerDriveComponent::OnNotifyDriveEvent(ENotifyDriveEvent Type, int32 Param) {
}

bool UPlayerDriveComponent::IsSASCharge() const {
    return false;
}

bool UPlayerDriveComponent::IsReservedNpcDrive() const {
    return false;
}

bool UPlayerDriveComponent::IsRecoveryBadStatus() const {
    return false;
}

bool UPlayerDriveComponent::IsEnableDriveNpc(bool bIgnoreInterval) const {
    return false;
}

bool UPlayerDriveComponent::IsEnableDrive() const {
    return false;
}

bool UPlayerDriveComponent::IsEnableBrainField() const {
    return false;
}

bool UPlayerDriveComponent::IsDriveMode() const {
    return false;
}



float UPlayerDriveComponent::GetPsychicWaitGaugeRate() const {
    return 0.0f;
}

float UPlayerDriveComponent::GetPsychicGaugeRate() const {
    return 0.0f;
}

float UPlayerDriveComponent::GetParameterMaxTime() const {
    return 0.0f;
}

float UPlayerDriveComponent::GetNpcDriveIntervalTimerRemain() const {
    return 0.0f;
}

float UPlayerDriveComponent::GetMoveSpeedRate() const {
    return 0.0f;
}

float UPlayerDriveComponent::GetMaxDriveTime() const {
    return 0.0f;
}

float UPlayerDriveComponent::GetMaxDriveGauge() const {
    return 0.0f;
}

float UPlayerDriveComponent::GetDriveTimerRemain() const {
    return 0.0f;
}

float UPlayerDriveComponent::GetDriveGaugeRate() const {
    return 0.0f;
}

float UPlayerDriveComponent::GetDriveGauge() const {
    return 0.0f;
}

float UPlayerDriveComponent::GetDisableDriveLastEnemyHpRate() const {
    return 0.0f;
}

float UPlayerDriveComponent::GetCurrentParameterRate() const {
    return 0.0f;
}

float UPlayerDriveComponent::GetCurrentDriveTimeRate() const {
    return 0.0f;
}

float UPlayerDriveComponent::GetCurrentDriveTime() const {
    return 0.0f;
}

float UPlayerDriveComponent::GetCrashRate() const {
    return 0.0f;
}

int32 UPlayerDriveComponent::GetBrainFieldCount() const {
    return 0;
}

float UPlayerDriveComponent::GetAttackRate() const {
    return 0.0f;
}

float UPlayerDriveComponent::GetAttackAnimationPlayRate() const {
    return 0.0f;
}

void UPlayerDriveComponent::ForceBeginNpcDriveInterval() {
}

void UPlayerDriveComponent::EndDriveMode(bool bInterruption, bool bLocationChange) {
}

void UPlayerDriveComponent::DisableDrive(bool bDisable, FName ClaimantName) {
}

void UPlayerDriveComponent::DirectDriveTimeSetting(float CurrentTime, float ExtendTime) {
}

void UPlayerDriveComponent::ClearReserveNpcDrive() {
}

bool UPlayerDriveComponent::CheckNpcDrive(ENpcDriveCheckType CheckType, int32 bondsLevel, float PlayerDriveRate, float PlayerHpRate) {
    return false;
}

void UPlayerDriveComponent::BeginDriveTimer() {
}

void UPlayerDriveComponent::BeginDriveMode(bool bDelayTimerTick, bool bDisableTimer, bool bNpcDrive) {
}

void UPlayerDriveComponent::AddDefeatedEnemy(int32 defeatedNum) {
}

void UPlayerDriveComponent::AddBrainFieldCount(bool bItemUse, bool bNoEffect) {
}

void UPlayerDriveComponent::AddBrainCrashDefeatedEnemy(int32 defeatedNum, bool bUniqueBrainCrash) {
}

UPlayerDriveComponent::UPlayerDriveComponent() {
}

