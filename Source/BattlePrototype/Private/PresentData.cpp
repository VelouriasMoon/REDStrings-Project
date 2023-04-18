#include "PresentData.h"

void UPresentData::LoadPresentDataTable(const FString& presentDataPath, const FString& presentLocationDatapath) {
}

bool UPresentData::GetPresentEventData(FPresentEventDataCell& presentEventData, FName ItemId, FName FromCharaID, FName ForCharaID) {
    return false;
}

UPresentData::UPresentData() {
    this->presentData_ = NULL;
    this->presentLocationData_ = NULL;
}

