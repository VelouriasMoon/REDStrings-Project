#include "DetailedMapData.h"

bool UDetailedMapData::LoadDataAsset(const FString& dtPath) {
    return false;
}

void UDetailedMapData::GetDetailedMapLocationData(FName LocationName, TMap<FName, FDetailedMapContentFloorDataArrayCell>& rDetailedMapLocation) {
}

void UDetailedMapData::GetDetailedMapDataAsset(TMap<FName, FDetailedMapDBDataCell>& rDetailedMap) {
}

void UDetailedMapData::GetDetailedMapAreaData(FName LocationName, FName AreaName, TArray<FDetailedMapContentFloorDataCell>& rDetailedMapArea) {
}

UDetailedMapData::UDetailedMapData() {
    this->detailedMapAsset_ = NULL;
}

