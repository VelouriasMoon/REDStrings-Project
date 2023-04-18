#include "CrashVisionComponent.h"

class ARSCharacterBase;

void UCrashVisionComponent::SetExecuteCrashVisionPlayer(EPlayerID playerId) {
}

EPlayerID UCrashVisionComponent::RequestCrashVision(ARSCharacterBase* TargetCharacter, bool bFirstCrash) {
    return EPlayerID::Invalid;
}

bool UCrashVisionComponent::IsExecCrashVisionPlayerID(EPlayerID playerId) {
    return false;
}

bool UCrashVisionComponent::IsEnableShockWave() {
    return false;
}

FVector UCrashVisionComponent::GetShockWaveLocation() {
    return FVector{};
}

ARSCharacterBase* UCrashVisionComponent::GetNextCrashVisionTarget(TArray<ARSCharacterBase*> IgnoreCharacterList) {
    return NULL;
}

TArray<ARSCharacterBase*> UCrashVisionComponent::GetCrashTargetList() {
    return TArray<ARSCharacterBase*>();
}

void UCrashVisionComponent::FinishCrashVision_Implementation() {
}

void UCrashVisionComponent::DebugVisionSimulatorMode(bool bSet) {
}

void UCrashVisionComponent::DebugSetUsePlayerLocation(bool bSet) {
}

void UCrashVisionComponent::DebugSetProbabilityNotDriveBattleMember(int32 Probability) {
}

void UCrashVisionComponent::DebugSetIgnoreSAS(bool bSet) {
}

void UCrashVisionComponent::DebugSetIgnoreCrashAccumulate(bool bSet) {
}

void UCrashVisionComponent::DebugSetForceLotPlayerID(EPlayerID playerId) {
}

void UCrashVisionComponent::DebugSetCrashVisionRange(float Range) {
}

void UCrashVisionComponent::DebugEnableCrashVision(bool bSet) {
}

void UCrashVisionComponent::DebugCrashVisionDamageOffset(float Offset) {
}

UCrashVisionComponent::UCrashVisionComponent() {
    this->MAX_CRASH_VISION_COUNT = 2;
    this->PROBABILIRY_NOT_DRIVE_BATTLE_MEMBER_LOT = 70;
    this->CrashVisionDataTable = NULL;
    this->CRASH_VISION_RANGE = 3000.00f;
    this->CrashVisionDataTable_VS = NULL;
    this->CRASH_VISION_RANGE_VS = 3000.00f;
}

