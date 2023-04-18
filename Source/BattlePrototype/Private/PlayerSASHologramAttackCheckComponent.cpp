#include "PlayerSASHologramAttackCheckComponent.h"

class ARSCharacterBase;

void UPlayerSASHologramAttackCheckComponent::SetTimerPause(bool bPause) {
}

void UPlayerSASHologramAttackCheckComponent::SetManualMode(bool bManual) {
}

void UPlayerSASHologramAttackCheckComponent::SetEnableCheck(bool bSet) {
}

void UPlayerSASHologramAttackCheckComponent::NotifyAttackEnd() {
}

void UPlayerSASHologramAttackCheckComponent::NotifyAttackBegin() {
}


bool UPlayerSASHologramAttackCheckComponent::IsManualMode() {
    return false;
}

bool UPlayerSASHologramAttackCheckComponent::IsExistCall() const {
    return false;
}


bool UPlayerSASHologramAttackCheckComponent::IsDoneCallPlayer() const {
    return false;
}

bool UPlayerSASHologramAttackCheckComponent::IsAttackState() const {
    return false;
}

int32 UPlayerSASHologramAttackCheckComponent::GetHologramRushCount() {
    return 0;
}

EPlayerID UPlayerSASHologramAttackCheckComponent::GetCallPlayer() const {
    return EPlayerID::Invalid;
}


void UPlayerSASHologramAttackCheckComponent::DebugSetIgnoreInterval(bool bSet) {
}

void UPlayerSASHologramAttackCheckComponent::DebugSetFixPlayerID(EPlayerID playerId) {
}

void UPlayerSASHologramAttackCheckComponent::DebugSetAlways(bool bSet) {
}

void UPlayerSASHologramAttackCheckComponent::DebugPrintLog(bool bSet) {
}

void UPlayerSASHologramAttackCheckComponent::CheckHologramAttack(ESASHologramAttackTiming Timing, ARSCharacterBase* RequestCharacter) {
}

void UPlayerSASHologramAttackCheckComponent::CancelCall(bool bInterval) {
}


UPlayerSASHologramAttackCheckComponent::UPlayerSASHologramAttackCheckComponent() {
    this->ENABLE_CALLTIME = 5.00f;
    this->ATTACK_INTERVAL_TIME = 30.00f;
    this->CANCEL_INTERVAL_TIME = 15.00f;
    this->REQUEST_DISTANCE_MAX = 2000.00f;
}

