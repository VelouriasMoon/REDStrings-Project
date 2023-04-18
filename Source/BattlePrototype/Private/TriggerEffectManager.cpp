#include "TriggerEffectManager.h"

class AActor;
class UForceFeedbackEffect;
class UMeshComponent;

void ATriggerEffectManager::UpdateTriggerEffect() {
}

void ATriggerEffectManager::UnloadHDB(const FString& GroupName) {
}

void ATriggerEffectManager::Unload(const FString& GroupName) {
}

void ATriggerEffectManager::StopTriggerEffect(int32 lr, float lingeringTime) {
}

void ATriggerEffectManager::StopPadEffectName(const FString& Filename, float sec) {
}

void ATriggerEffectManager::StopPadEffect(float sec) {
}

void ATriggerEffectManager::StopEmulateCompatibleVibration(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag) {
}

void ATriggerEffectManager::SetTriggerEffectOff(int32 lr) {
}

void ATriggerEffectManager::SetTriggerEffect2(ETrgEffMode m0, uint8 v00, uint8 v01, uint8 v02, ETrgEffMode m1, uint8 v10, uint8 v11, uint8 v12) {
}

void ATriggerEffectManager::SetTriggerEffect(const FTrgEffParam& L, const FTrgEffParam& R, bool leftInitFlag, bool rightInitFlag) {
}

void ATriggerEffectManager::SetRandomFrequencyVibration(int32 lr, uint8 Pos, uint8 amp, uint8 minFre, uint8 maxFre, bool isReleaseEnhancements) {
}

void ATriggerEffectManager::SetPadEffectVolumeName(const FString& Filename, float wavvol, float vibvol, float sec) {
}

void ATriggerEffectManager::SetPadEffectVolume(float wavvol, float vibvol, float sec) {
}

void ATriggerEffectManager::SetPadEffectStrengthVolume(float vol) {
}

void ATriggerEffectManager::SetPadEffectOuterVibrationMagnification(float mag) {
}

void ATriggerEffectManager::SetPadEffectMasterVolume(float vol) {
}

void ATriggerEffectManager::SetPadEffectMapGimmickVolume(float vol) {
}

void ATriggerEffectManager::SetPadEffectLocationVolume(float vol) {
}

void ATriggerEffectManager::SetPadEffectDirectShotVolume(float vol) {
}

void ATriggerEffectManager::SetPadEffectCompatibleVolume(float vol) {
}

void ATriggerEffectManager::SetPadEffectCompatibleModeSmallVolume(float vol) {
}

void ATriggerEffectManager::SetPadEffectCompatibleModeMasterVolume(float vol) {
}

void ATriggerEffectManager::SetPadEffectCompatibleModeLargeVolume(float vol) {
}

void ATriggerEffectManager::SetPadEffectCompatibleMode2Volume(float vol) {
}

void ATriggerEffectManager::SetPadEffectCompatibleMode2SmallVolume(float vol) {
}

void ATriggerEffectManager::SetPadEffectCompatibleMode2SmallVibAfterglow(float frameNum) {
}

void ATriggerEffectManager::SetPadEffectCompatibleMode2MinRotRateOfSmall(float vol) {
}

void ATriggerEffectManager::SetPadEffectCompatibleMode2MinRotRateOfLarge(float vol) {
}

void ATriggerEffectManager::SetPadEffectCompatibleMode2MaxRotRateOfSmall(float vol) {
}

void ATriggerEffectManager::SetPadEffectCompatibleMode2MaxRotRateOfLarge(float vol) {
}

void ATriggerEffectManager::SetPadEffectCompatibleMode2LargeVolume(float vol) {
}

void ATriggerEffectManager::SetPadEffectCompatibleMode2LargeVibAfterglow(float frameNum) {
}

void ATriggerEffectManager::SetPadEffectBrainFieldVolume(float vol) {
}

void ATriggerEffectManager::SetPadEffectBrainCrashVolume(float vol) {
}

void ATriggerEffectManager::SetIsCompatibleMode2Enabled(bool IsEnable) {
}

void ATriggerEffectManager::SetCompatibleVibrationMode(bool isCompatibleVibMode) {
}

void ATriggerEffectManager::ResumePadEffect() {
}

void ATriggerEffectManager::RegistTargetMeshComponent(UMeshComponent* Mesh, FName TargetSocketName) {
}

void ATriggerEffectManager::RegistDirectShotPsyObj(AActor* Actor) {
}

void ATriggerEffectManager::PlayPadEffectV01(const FString& Filename, float wavvol, float vibvol, bool roopFlag, EVibSndPrio svprio, EVibSndMode svmode, AActor* sndowner, UMeshComponent* sndownerMesh, FName sndownerMeshSocketName, bool isDistanceAttenuation) {
}

void ATriggerEffectManager::PlayPadEffect(const FString& Filename, float wavvol, float vibvol, bool roopFlag, EVibSndPrio svprio, EVibSndMode svmode, AActor* sndowner, UMeshComponent* sndownerMesh, FName sndownerMeshSocketName, bool isDistanceAttenuation) {
}

void ATriggerEffectManager::PlayHaptics(const FString& Filename, EVibSndMode svmode, AActor* sndowner) {
}

void ATriggerEffectManager::PlayEmulateCompatibleVibration(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag, bool bLooping, bool bIgnoreTimeDilation, bool bPlayWhilePaused) {
}

void ATriggerEffectManager::PausePadEffect() {
}

void ATriggerEffectManager::LoadHDB(const FString& GroupName, const FString& Filename) {
}

void ATriggerEffectManager::Load(const FString& GroupName, const FString& Filename, EVibSndPrio prio) {
}

bool ATriggerEffectManager::IsTriggerInputStatus(int32 lr) {
    return false;
}

bool ATriggerEffectManager::IsTriggerEffectStopped(int32 lr) {
    return false;
}

bool ATriggerEffectManager::IsTriggerEffectOff(int32 lr) {
    return false;
}

bool ATriggerEffectManager::IsPadEffectPlaying() {
    return false;
}

void ATriggerEffectManager::IncorporateOffModeIntoTriggerEffect(bool isOffMode) {
}

void ATriggerEffectManager::IgnoreCompatibleVibration(bool Flag) {
}

void ATriggerEffectManager::EraseTargetMeshComponent() {
}

void ATriggerEffectManager::EraseDirectShotPsyObj() {
}

void ATriggerEffectManager::ClearTriggerEffect() {
}

void ATriggerEffectManager::ChangePanRatioOfPadEffect(float padPanRatio) {
}

ATriggerEffectManager::ATriggerEffectManager() {
    this->m_directShotPsyObj = NULL;
}

