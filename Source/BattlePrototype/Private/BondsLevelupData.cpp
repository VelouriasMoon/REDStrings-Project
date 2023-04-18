#include "BondsLevelupData.h"

void UBondsLevelupData::LoadDataTable() {
}

bool UBondsLevelupData::IsValidResource() const {
    return false;
}

TArray<int32> UBondsLevelupData::GetBondsLevelupTable(EPlayerID playerId, EPlayerID TargetID) const {
    return TArray<int32>();
}

UBondsLevelupData::UBondsLevelupData() {
    this->expListM.AddDefaulted(11);
    this->expListF.AddDefaulted(11);
}

