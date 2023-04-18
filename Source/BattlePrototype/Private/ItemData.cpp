#include "ItemData.h"

bool UItemData::LoadItemDataTable(const FString& ItemTablePath, const FString& ArrangeItemDataTablePath) {
    return false;
}

int32 UItemData::GetTradeNumberOfTimes(FName ID) {
    return 0;
}

FString UItemData::GetName(FName ID) {
    return TEXT("");
}

int32 UItemData::GetItemIndex(FName ID) {
    return 0;
}

TArray<FName> UItemData::GetItemIDs() const {
    return TArray<FName>();
}

EItemFavorability UItemData::GetFavorability(FName ID, EPlayerID charID) {
    return EItemFavorability::Normal;
}

FString UItemData::GetDescription(FName ID) {
    return TEXT("");
}

bool UItemData::GetDataByItemID(FItemDataCell& ItemData, int32 ItemId) {
    return false;
}

bool UItemData::GetData(FItemDataCell& ItemData, FName ID) {
    return false;
}

bool UItemData::GetArrangeData(FArrangeItemDataCell& ArrangeItemData, FName ID) {
    return false;
}

UItemData::UItemData() {
    this->RefItemTable = NULL;
    this->RefArrangeItemTable = NULL;
    this->m_pWorld = NULL;
}

