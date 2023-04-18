#include "BrainMessageData.h"

class UBrainMessageDBAsset;

bool UBrainMessageData::LoadDataAsset(const FString& dtPath, const FString& birthdayPath) {
    return false;
}

FBrainMessageDBDataCell UBrainMessageData::GetBrainMessageDataCellFromAsset(FName RowName, bool& isFound) {
    return FBrainMessageDBDataCell{};
}

UBrainMessageDBAsset* UBrainMessageData::GetBrainMessageDataAsset() {
    return NULL;
}

bool UBrainMessageData::GetBirthdayDataCell(const FName RowName, FBirthdayBrainMessageData& cell) {
    return false;
}

int32 UBrainMessageData::GetAllThreadNum() {
    return 0;
}

void UBrainMessageData::GetAllBirthdayRowNames(TArray<FName>& rowNames) {
}

UBrainMessageData::UBrainMessageData() {
    this->brainMessageDataAsset_ = NULL;
    this->birthdayData_ = NULL;
}

