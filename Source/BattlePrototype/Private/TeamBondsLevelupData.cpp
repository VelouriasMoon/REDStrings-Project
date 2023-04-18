#include "TeamBondsLevelupData.h"

class UDataTable;

void UTeamBondsLevelupData::LoadDataTable() {
}

bool UTeamBondsLevelupData::IsValidResource() const {
    return false;
}

UDataTable* UTeamBondsLevelupData::GetTeamBondsLevelupTable(EPlayerID playerId) const {
    return NULL;
}

UTeamBondsLevelupData::UTeamBondsLevelupData() {
    this->dataTableM = NULL;
    this->dataTableF = NULL;
}

