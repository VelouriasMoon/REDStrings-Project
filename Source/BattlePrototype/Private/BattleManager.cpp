#include "BattleManager.h"

class AActor;
class ARSCharacterBase;


void ABattleManager::SetForceBattle(bool bForce, FName ClaimantName) {
}

void ABattleManager::SetBattleMode(bool bBattle) {
}

void ABattleManager::RemoveBattleActor(ARSCharacterBase* Actor, EReasonBattleEnd reason) {
}

void ABattleManager::PoolHitEffectData(AActor* HitActor, const FHCHitResult& HitResult, bool bNoLimit) {
}

bool ABattleManager::PlayBrainTalkStealthLost() {
    return false;
}

bool ABattleManager::IsForceBattle() const {
    return false;
}

bool ABattleManager::IsBattleMode() const {
    return false;
}



TArray<ARSCharacterBase*> ABattleManager::GetBattleActorList() const {
    return TArray<ARSCharacterBase*>();
}

void ABattleManager::ForceEndRecordBattleLog() {
}

void ABattleManager::EndRecordBattleLog(bool bBattleField) {
}

void ABattleManager::ClearBattleActor() {
}

bool ABattleManager::CheckBattleLog_StealthLost() const {
    return false;
}

void ABattleManager::BeginRecordBattleLog(bool bBattleField) {
}

void ABattleManager::AddBattleActor(ARSCharacterBase* Actor) {
}

ABattleManager::ABattleManager() {
    this->BATTLEFIELD_SPEEDRUN_TIME = 60.00f;
    this->BATTLEFIELD_HORDE_ENEMY_NUM = 10;
    this->_IsSimulatorMissionBattle = false;
    this->OneFrameHitEffectMax = 3;
    this->HitEffectPoolNum_Other = 1;
    this->HitEffectPoolNum_Npc = 1;
    this->HitEffectPoolNum_Enemy = 1;
    this->HitEffectPoolNum_PlayerDamage = 1;
    this->HitEffectPoolNum_Player = 3;
    this->HitEffectPoolNum_Special = 5;
}

