#include "CalcMemoryManager.h"

void UCalcMemoryManager::SwitchCalcTargetPlayer() {
}

void UCalcMemoryManager::SwitchCalcTargetObject() {
}

void UCalcMemoryManager::SwitchCalcTargetNPC() {
}

void UCalcMemoryManager::SwitchCalcTargetLevel() {
}

void UCalcMemoryManager::SwitchCalcTargetEnemy() {
}

CalcMode UCalcMemoryManager::SwitchCalcMode(bool isLevel) {
    return CalcMode::Default;
}

void UCalcMemoryManager::StartCurrentAsset() {
}

void UCalcMemoryManager::StartCalcMemory() {
}

void UCalcMemoryManager::StartCalcLevel() {
}

void UCalcMemoryManager::SetCancel() {
}

void UCalcMemoryManager::SelectPrevPageAsset() {
}

void UCalcMemoryManager::SelectPrevAsset(int32 subValue) {
}

void UCalcMemoryManager::SelectNextPageAsset() {
}

void UCalcMemoryManager::SelectNextAsset(int32 addValue) {
}

void UCalcMemoryManager::ResetStartCalcMemory() {
}

void UCalcMemoryManager::ResetCalcMemory() {
}

void UCalcMemoryManager::RefleshSelectAsset() {
}

void UCalcMemoryManager::ReadyNextAsset() {
}

void UCalcMemoryManager::PrintLevelInfo() {
}

void UCalcMemoryManager::PreMeasureLevel() {
}

void UCalcMemoryManager::PostMeasureLevel() {
}

bool UCalcMemoryManager::IsStartCalcMemory() const {
    return false;
}

bool UCalcMemoryManager::IsRequestLevel() const {
    return false;
}

bool UCalcMemoryManager::IsReadyCurrentAsset() const {
    return false;
}

bool UCalcMemoryManager::IsFinishedCurrentAsset() const {
    return false;
}

bool UCalcMemoryManager::IsFinished() const {
    return false;
}

bool UCalcMemoryManager::IsExecLevel() const {
    return false;
}

bool UCalcMemoryManager::IsExec() const {
    return false;
}

bool UCalcMemoryManager::IsCancel() const {
    return false;
}

bool UCalcMemoryManager::IsCalcTargetPlayer() const {
    return false;
}

bool UCalcMemoryManager::IsCalcTargetObject() const {
    return false;
}

bool UCalcMemoryManager::IsCalcTargetNPC() const {
    return false;
}

bool UCalcMemoryManager::IsCalcTargetLevel() const {
    return false;
}

bool UCalcMemoryManager::IsCalcTargetEnemy() const {
    return false;
}

void UCalcMemoryManager::IncrementLevel() {
}

CalcTarget UCalcMemoryManager::IncrementCalcTarget() {
    return CalcTarget::Player;
}

FString UCalcMemoryManager::GetStatusText() const {
    return TEXT("");
}

FString UCalcMemoryManager::GetLevelStatusText() const {
    return TEXT("");
}

FString UCalcMemoryManager::GetIndividualStatusText() const {
    return TEXT("");
}

FName UCalcMemoryManager::GetCurrentLevelName() {
    return NAME_None;
}

CalcMode UCalcMemoryManager::GetCalcMode() {
    return CalcMode::Default;
}

CalcTarget UCalcMemoryManager::DecrementCalcTarget() {
    return CalcTarget::Player;
}

void UCalcMemoryManager::CancelLevel() {
}

void UCalcMemoryManager::CalcMemory() {
}

UCalcMemoryManager::UCalcMemoryManager() {
    this->CurCalcMode = CalcMode::Default;
    this->ListIndex = 0;
    this->bStartCalcMemory = false;
    this->bCalcPlayer = true;
    this->bCalcEnemy = true;
    this->bCalcNPC = true;
    this->bCalcObject = false;
    this->bCalcLevel = false;
    this->bCancel = false;
    this->bRequestLevel = false;
    this->CreateObject = NULL;
    this->CurrentIndex = 0;
    this->WaitTimer = 0.00f;
    this->bFinishedCurrentAsset = false;
    this->bExecLevel = false;
    this->CurrentLevelIndex = 0;
    this->MyProcess = CalcProcess::None;
    this->PreUsedPhysical = 0;
    this->PreUsedVirtual = 0;
    this->PostUsedPhysical = 0;
    this->PostUsedVirtual = 0;
}

