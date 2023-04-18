#include "CharactersParameterComponent.h"

class AActor;
class UCharactersParameterComponent;

void UCharactersParameterComponent::SufferPartDamage(int32 part, int32 Damage) {
}

int32 UCharactersParameterComponent::SufferDamage(int32 Damage, bool IsEnemy, bool isNoDead, bool NewIsDelayDeath, bool isGuts, AActor* attacker) {
    return 0;
}

void UCharactersParameterComponent::StartLimitCrashAccumulation() {
}

void UCharactersParameterComponent::StartDamageReactionAccumulationStopTimer() {
}

void UCharactersParameterComponent::SetPauseUpdate() {
}

void UCharactersParameterComponent::SetPauseBrainCrashTimer(bool bPause) {
}

void UCharactersParameterComponent::SetParameterTable(const FCharactersParameterTable& Param) {
}

void UCharactersParameterComponent::SetParameterInitTable(const FCharactersParameterTable& Param) {
}

void UCharactersParameterComponent::SetParameterBasic(const FCharactersParameterTable& Param) {
}

void UCharactersParameterComponent::SetParameterAll(const FCharactersParameterTable& Param) {
}

void UCharactersParameterComponent::SetOilTimeCoefficient(float Coefficient) {
}

void UCharactersParameterComponent::SetOilDownScale(float Num) {
}

void UCharactersParameterComponent::SetOilBaseTime(float Num) {
}

void UCharactersParameterComponent::SetOilAttenuationCoefficient(float Coefficient) {
}

void UCharactersParameterComponent::SetNotUseBrainCrashTimer(bool bNotUse) {
}

void UCharactersParameterComponent::SetNoReleaseBadState(bool bNoRelease) {
}

void UCharactersParameterComponent::SetLevelTable(float HP, float Attack, float brain, float Defense, float Exp) {
}

void UCharactersParameterComponent::SetHpWithoutEvent(int32 HP) {
}

void UCharactersParameterComponent::SetHpPart(int32 no, int32 HP) {
}

void UCharactersParameterComponent::SetHpDownLimit(EHpDownLimitType LimitType, float limitValue) {
}

void UCharactersParameterComponent::SetHp(TArray<int32> HP) {
}

void UCharactersParameterComponent::SetFrameBaseTime(float Num) {
}

void UCharactersParameterComponent::SetFloodedTimeCoefficient(float Coefficient) {
}

void UCharactersParameterComponent::SetFloodedMoveScale(float Num) {
}

void UCharactersParameterComponent::SetFloodedBaseTime(float Num) {
}

void UCharactersParameterComponent::SetFloodedAttenuationCoefficient(float Coefficient) {
}

void UCharactersParameterComponent::SetFlameTimeCoefficient(float Coefficient) {
}

void UCharactersParameterComponent::SetFlameAttenuationCoefficient(float Coefficient) {
}

void UCharactersParameterComponent::SetEndlessOil(bool bEndless) {
}

void UCharactersParameterComponent::SetEndlessFlooded(bool bEndless) {
}

void UCharactersParameterComponent::SetEndlessFlame(bool bEndless) {
}

void UCharactersParameterComponent::SetEnableBadStatusTimeRate(bool bEnable) {
}

void UCharactersParameterComponent::SetElectricTimerOn(bool on) {
}

void UCharactersParameterComponent::SetElectricTimeCoefficient(float Coefficient) {
}

void UCharactersParameterComponent::SetElectricBaseTime(float Num) {
}

void UCharactersParameterComponent::SetElectricAttenuationCoefficient(float Coefficient) {
}

void UCharactersParameterComponent::SetElectricAddTime(float Num) {
}

void UCharactersParameterComponent::SetCrashMax() {
}

void UCharactersParameterComponent::SetConfusionTimeCoefficient(float Coefficient) {
}

void UCharactersParameterComponent::SetConfusionBaseTime(float Num) {
}

void UCharactersParameterComponent::SetConfusionAttenuationCoefficient(float Coefficient) {
}

void UCharactersParameterComponent::SetCharacterIgnoreDamageFlag(int32 Flags) {
}

void UCharactersParameterComponent::SetBrainCrashTimeSeconds(float Seconds) {
}

void UCharactersParameterComponent::SetBrainCrashMissAccumulationScale(float Num) {
}

void UCharactersParameterComponent::SetBrainCrashMiss() {
}

void UCharactersParameterComponent::SetBrainCrashLock(bool Lock) {
}

void UCharactersParameterComponent::SetBrainCrashEnableTime(float Num) {
}

void UCharactersParameterComponent::SetBadStatusAttenuation(const FCharactersParameterBasic& Param) {
}

void UCharactersParameterComponent::SetAttenuation(const FCharactersParameterBasic& Param) {
}

void UCharactersParameterComponent::SetArmorHp(int32 HP) {
}

void UCharactersParameterComponent::SetAddFrameBaseTime(float Num) {
}

void UCharactersParameterComponent::SetAddElectricBaseTime(float Num) {
}

void UCharactersParameterComponent::ResetPauseUpdate() {
}

void UCharactersParameterComponent::ResetHpDownLimit() {
}

void UCharactersParameterComponent::ResetDelayDeath() {
}

void UCharactersParameterComponent::ResetCrash() {
}

void UCharactersParameterComponent::ResetBadStatusAttenuation() {
}

void UCharactersParameterComponent::ResetAttenuation(bool bResetCrash) {
}

void UCharactersParameterComponent::ReleaseOil(bool bRsetAccumulation) {
}

void UCharactersParameterComponent::ReleaseFlooded(bool bRsetAccumulation) {
}

void UCharactersParameterComponent::ReleaseFlame(bool bRsetAccumulation) {
}

void UCharactersParameterComponent::ReleaseElectric(bool bRsetAccumulation) {
}

void UCharactersParameterComponent::ReleaseConfusion(bool bRsetAccumulation) {
}

void UCharactersParameterComponent::ReleaseCable() {
}

void UCharactersParameterComponent::ReleaseAllBadStatus(bool bRsetAccumulation) {
}

void UCharactersParameterComponent::ParameterBasicCopy(const FCharactersParameterBasic& Param) {
}

void UCharactersParameterComponent::OutBreakOil(AActor* attacker, float Time, bool bEndless) {
}

void UCharactersParameterComponent::OutBreakFlooded(AActor* attacker, float Time, bool bEndless) {
}

void UCharactersParameterComponent::OutBreakFlame(AActor* attacker, float Time, bool bEndless) {
}

void UCharactersParameterComponent::OutBreakElectric(AActor* attacker, float Time) {
}

void UCharactersParameterComponent::OutBreakConfusion(AActor* attacker, float Time) {
}

void UCharactersParameterComponent::OutBreakCable(AActor* attacker) {
}

bool UCharactersParameterComponent::NeedsStatusAssist() const {
    return false;
}

void UCharactersParameterComponent::ModifyParameterTable_Attack(int32 NewValue) {
}

bool UCharactersParameterComponent::IsReinfoceFlame() const {
    return false;
}

bool UCharactersParameterComponent::IsPauseUpdate() const {
    return false;
}

bool UCharactersParameterComponent::IsOil() const {
    return false;
}

bool UCharactersParameterComponent::IsLimitCrashAccumulation() {
    return false;
}

bool UCharactersParameterComponent::IsHpDownLimit() const {
    return false;
}

bool UCharactersParameterComponent::IsFlooded() const {
    return false;
}

bool UCharactersParameterComponent::IsFlame() const {
    return false;
}

bool UCharactersParameterComponent::IsEndlessOil() const {
    return false;
}

bool UCharactersParameterComponent::IsEndlessFlooded() const {
    return false;
}

bool UCharactersParameterComponent::IsEndlessFlame() const {
    return false;
}

bool UCharactersParameterComponent::IsElectricTimer() const {
    return false;
}

bool UCharactersParameterComponent::IsElectric() const {
    return false;
}

bool UCharactersParameterComponent::IsDelayDeath() {
    return false;
}

bool UCharactersParameterComponent::IsDead() {
    return false;
}

bool UCharactersParameterComponent::IsConfusion() const {
    return false;
}

bool UCharactersParameterComponent::IsCharacterIgnoreDamage(ECharacterIgnoreDamage CheckFlag) const {
    return false;
}

bool UCharactersParameterComponent::IsBrainCrashLock() {
    return false;
}

bool UCharactersParameterComponent::IsBrainCrashAccess() {
    return false;
}

bool UCharactersParameterComponent::IsBadStateEndless() {
    return false;
}

bool UCharactersParameterComponent::IsAnyBadStatus() const {
    return false;
}

float UCharactersParameterComponent::GetWeakPointRateOldFrame(int32 part) {
    return 0.0f;
}

float UCharactersParameterComponent::GetWeakPointRate(int32 part) {
    return 0.0f;
}

float UCharactersParameterComponent::GetSensingArea() const {
    return 0.0f;
}

float UCharactersParameterComponent::GetSearchRange() const {
    return 0.0f;
}

float UCharactersParameterComponent::GetSearchAngle() const {
    return 0.0f;
}

FCharactersParameterTable UCharactersParameterComponent::GetParameterTable() const {
    return FCharactersParameterTable{};
}

FCharactersParameterTable UCharactersParameterComponent::GetParameterInitTable() const {
    return FCharactersParameterTable{};
}

FCharactersParameterBasic UCharactersParameterComponent::GetParameterBasic() const {
    return FCharactersParameterBasic{};
}

float UCharactersParameterComponent::GetMoveArea() const {
    return 0.0f;
}

int32 UCharactersParameterComponent::GetMaxHpPart(int32 no) const {
    return 0;
}

int32 UCharactersParameterComponent::GetMaxHp() const {
    return 0;
}

int32 UCharactersParameterComponent::GetMaxArmorHp() const {
    return 0;
}

float UCharactersParameterComponent::GetHPPercent() const {
    return 0.0f;
}

int32 UCharactersParameterComponent::GetHpPart(int32 no) const {
    return 0;
}

int32 UCharactersParameterComponent::GetHpDownLimit() const {
    return 0;
}

TArray<int32> UCharactersParameterComponent::GetHpArray() const {
    return TArray<int32>();
}

int32 UCharactersParameterComponent::GetHp() const {
    return 0;
}

float UCharactersParameterComponent::GetFloodedMoveScale() {
    return 0.0f;
}

float UCharactersParameterComponent::GetElectricScaleByFlooded() {
    return 0.0f;
}

float UCharactersParameterComponent::GetCrashResistanceMax() {
    return 0.0f;
}

float UCharactersParameterComponent::GetCrashResistance(int32 part) {
    return 0.0f;
}

UCharactersParameterComponent* UCharactersParameterComponent::GetCharactersParameterComponentFromActor(AActor* Actor) {
    return NULL;
}

int32 UCharactersParameterComponent::GetCharacterIgnoreDamageFlagFromType(ECharacterIgnoreDamageType ignoreType) const {
    return 0;
}

int32 UCharactersParameterComponent::GetCharacterIgnoreDamageFlag() const {
    return 0;
}

float UCharactersParameterComponent::GetCaptureArea() const {
    return 0.0f;
}

float UCharactersParameterComponent::GetBrainCrashTimer() const {
    return 0.0f;
}

float UCharactersParameterComponent::GetBrainCrashMissAccumulationScale() {
    return 0.0f;
}

float UCharactersParameterComponent::GetArmorHPPercent() const {
    return 0.0f;
}

int32 UCharactersParameterComponent::GetArmorHp() const {
    return 0;
}

float UCharactersParameterComponent::GetAllHPPercent() const {
    return 0.0f;
}

int32 UCharactersParameterComponent::GetAllHp() const {
    return 0;
}

void UCharactersParameterComponent::EndLimitCrashAccumulation() {
}

void UCharactersParameterComponent::EnableCharacterIgnoreDamageFromType(ECharacterIgnoreDamageType ignoreType) {
}

void UCharactersParameterComponent::EnableCharacterIgnoreDamageAll() {
}

void UCharactersParameterComponent::EnableCharacterIgnoreDamage(ECharacterIgnoreDamage setFlag) {
}

void UCharactersParameterComponent::DisableCharacterIgnoreDamageFromType(ECharacterIgnoreDamageType ignoreType) {
}

void UCharactersParameterComponent::DisableCharacterIgnoreDamageAll() {
}

void UCharactersParameterComponent::DisableCharacterIgnoreDamage(ECharacterIgnoreDamage setFlag) {
}

void UCharactersParameterComponent::DebugSetEnemyCrashCrashResistance(int32 DebugCrashResistance) {
}

void UCharactersParameterComponent::AddParameterBasic(const FCharactersParameterBasic& Param, AActor* attacker, bool IsEnemy) {
}

void UCharactersParameterComponent::AddHpArray(TArray<int32> HP) {
}

void UCharactersParameterComponent::AddHp(int32 HP) {
}

void UCharactersParameterComponent::AddBrainCrashExtraTime(float ExtraTime) {
}

UCharactersParameterComponent::UCharactersParameterComponent() {
    this->mIsUseTick = false;
    this->mIsBrainCrashLock = true;
    this->mIsNotUseBrainCrashTimer = false;
    this->mBrainCrashTimer = 0.00f;
    this->mIsPauseBrainCrashTimer = false;
    this->mIsElectricTimer = true;
    this->mBrainCrashTime = 4.00f;
    this->mBrainCrashMissAccumulationScale = 0.70f;
    this->mFrameBaseTime = 20.00f;
    this->mElectricBaseTime = 5.00f;
    this->mElectricAddTime = 0.00f;
    this->mFloodedBaseTime = 60.00f;
    this->mOilBaseTime = 60.00f;
    this->mConfusionBaseTime = 30.00f;
    this->mAddFrameBaseTime = 20.00f;
    this->mAddElectricBaseTime = 5.00f;
    this->mOilDownScale = 1.00f;
    this->mFloodedMoveScale = 1.00f;
    this->mFlameScaleByOil = 5.00f;
    this->mElectricScaleByFlooded = 5.00f;
    this->mEndlessFlame = false;
    this->mEndlessFlooded = false;
    this->mEndlessOil = false;
    this->mIsBeforeEndlessFlooded = false;
    this->mIsBeforeEndlessOil = false;
    this->mIsUpdateCrashOldFrame = false;
    this->mUpdateCrashOldFrameCnt = 0;
    this->FlameUpdateTimeRate = 2.00f;
    this->ElectricUpdateTimeRate = 4.00f;
    this->FloodedUpdateTimeRate = 3.00f;
    this->OilUpdateTimeRate = 3.00f;
    this->ConfusionUpdateTimeRate = 4.00f;
    this->mIgnoreDamageFlag = 0;
}

