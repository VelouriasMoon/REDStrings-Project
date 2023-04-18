#include "ShowDestinationData.h"

bool UShowDestinationData::LoadDataAsset(const FString& dtPath) {
    return false;
}

TMap<FName, FShowDestinationDBDataCell> UShowDestinationData::GetDB() const {
    return TMap<FName, FShowDestinationDBDataCell>();
}

void UShowDestinationData::GetDataCellFromActorName(FName ActorName, FShowDestinationDBDataCell& cell) {
}

UShowDestinationData::UShowDestinationData() {
    this->showDestinationAsset_ = NULL;
}

