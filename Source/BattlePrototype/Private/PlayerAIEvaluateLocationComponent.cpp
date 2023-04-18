#include "PlayerAIEvaluateLocationComponent.h"

void UPlayerAIEvaluateLocationComponent::SetParameter(const FPlayerAIParameter& Parameter) {
}

void UPlayerAIEvaluateLocationComponent::SetIgnoreKeepOutArea(bool bIgnore) {
}

void UPlayerAIEvaluateLocationComponent::RegisterActorData(EEvaluateActorType actorType, EEvaluateActorStatus actorStatus, const FVector& Location, const FVector& forwardDir, float Radius, bool bLockOn) {
}

bool UPlayerAIEvaluateLocationComponent::GetOtherHighPriorityLocation(FVector& OutLocation, int32 rank) {
    return false;
}

bool UPlayerAIEvaluateLocationComponent::GetNearLocation(FVector& OutLocation, const FVector& Location) {
    return false;
}

EAIBattleRange UPlayerAIEvaluateLocationComponent::GetLocationRangeType(FVector Location) const {
    return EAIBattleRange::Near;
}

bool UPlayerAIEvaluateLocationComponent::GetLocationPriorityRank(int32& outRank, FVector& OutLocation, const FVector& Location) {
    return false;
}

bool UPlayerAIEvaluateLocationComponent::GetHighPriorityLocationByRange(FVector& OutLocation, EAIBattleRange battleRange) {
    return false;
}

bool UPlayerAIEvaluateLocationComponent::GetHighPriorityLocation(FVector& OutLocation) {
    return false;
}

EAIBattleRange UPlayerAIEvaluateLocationComponent::GetAIBattleRangeType() const {
    return EAIBattleRange::Near;
}

float UPlayerAIEvaluateLocationComponent::GetAIBattleRange(EAIBattleRange Range) const {
    return 0.0f;
}

void UPlayerAIEvaluateLocationComponent::EndEvaluate() {
}

void UPlayerAIEvaluateLocationComponent::DebugDrawEvaluationLocation() {
}

void UPlayerAIEvaluateLocationComponent::ClearActorData() {
}

bool UPlayerAIEvaluateLocationComponent::CheckKeepOutArea(const FVector& Location) {
    return false;
}

void UPlayerAIEvaluateLocationComponent::BeginEvaluate() {
}

UPlayerAIEvaluateLocationComponent::UPlayerAIEvaluateLocationComponent() {
    this->Range_Type = EAIBattleRange::Near;
    this->RANGE_NEAR = 100.00f;
    this->Range_Middle = 400.00f;
    this->RANGE_FAR = 1000.00f;
    this->Width_Near = 100.00f;
    this->Width_Far = 200.00f;
    this->Priority_Init = 1000;
    this->Priority_TargetActor = 500;
    this->Priority_NotTargetActor = -250;
    this->Priority_AttackActor = -3000;
    this->Priority_Friend = -100;
    this->Priority_TargetFront = -200;
    this->Priority_TargetSide = 0;
    this->Priority_TargetBack = 250;
    this->Priority_TargetActorBehind = -200;
    this->Priority_TargetActorInfront = 200;
    this->Priority_CurrentLocation = 0;
}

