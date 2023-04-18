#include "EnemyDropData.h"

class URSGameInstance;

void UEnemyDropData::SetGameInst(URSGameInstance* inst) {
}

bool UEnemyDropData::LoadEnemyDropDataTable(const FString& EnemyDropTablePath) {
    return false;
}

bool UEnemyDropData::LoadBattleSimulateEnemyDropDataTable(const FString& BattleSimulateEnemyDropTablePath) {
    return false;
}

bool UEnemyDropData::IsValidResource() const {
    return false;
}

FName UEnemyDropData::GetIdFromIndex(int32 Index) {
    return NAME_None;
}

bool UEnemyDropData::GetEnemyDropDataFromIndex(FEnemyDropDataCell& EnemyDropData, int32 Index) {
    return false;
}

bool UEnemyDropData::GetEnemyDropDataAllRound(FEnemyDropDataCell& EnemyDropData, FName ID, FName CharacterItemDropId) {
    return false;
}

bool UEnemyDropData::GetEnemyDropData(FEnemyDropDataCell& EnemyDropData, FName ID) {
    return false;
}

bool UEnemyDropData::GetBattleSimulateEnemyDropData(FEnemyDropDataCell& EnemyDropData, FName characterId) {
    return false;
}

UEnemyDropData::UEnemyDropData() {
    this->gameInst_ = NULL;
    this->RefEnemyDropTable = NULL;
    this->RefBattleSimulateEnemyDropTable = NULL;
}

