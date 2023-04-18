#include "ItemDataUtility.h"

class UObject;

int32 UItemDataUtility::MakeItemID(EItemCategory Category, int32 ID) {
    return 0;
}

FName UItemDataUtility::MakeItemDataName(int32 ItemId) {
    return NAME_None;
}

bool UItemDataUtility::IsValidItemId(int32 ItemId) {
    return false;
}

bool UItemDataUtility::IsInvalidSell(const FItemDataCell& ItemDataCell) {
    return false;
}

bool UItemDataUtility::IsCategoryAttachment(EItemCategory Category) {
    return false;
}

int32 UItemDataUtility::getNumOfEquipment(const UObject* WorldContextObject, const FName& ItemId) {
    return 0;
}

bool UItemDataUtility::GetLotteryResultItemID(const UObject* WorldContextObject, const bool isRare, const FArrangeItemDataCell& ArrangeItemDataCell, FName& ItemId, int32& itemNum) {
    return false;
}

EItemRarity UItemDataUtility::GetItemRarity(const FItemDataCell& ItemDataCell) {
    return EItemRarity::Invalid;
}

int32 UItemDataUtility::GetItemIndex(const UObject* WorldContextObject, FName ID) {
    return 0;
}

void UItemDataUtility::GetItemIDs(const UObject* WorldContextObject, TArray<FName>& ItemIDs) {
}

FText UItemDataUtility::GetItemDataName(const UObject* WorldContextObject, const FItemDataCell& ItemDataCell) {
    return FText::GetEmpty();
}

FText UItemDataUtility::GetItemDataDescription(const UObject* WorldContextObject, const FItemDataCell& ItemDataCell) {
    return FText::GetEmpty();
}

bool UItemDataUtility::GetItemDataCellByItemId(const UObject* WorldContextObject, FItemDataCell& ItemData, int32 ItemId) {
    return false;
}

bool UItemDataUtility::GetItemDataCell(const UObject* WorldContextObject, FItemDataCell& ItemData, FName ID) {
    return false;
}

int32 UItemDataUtility::GetItemCategoryID(int32 ItemId) {
    return 0;
}

EItemCategory UItemDataUtility::GetItemCategory(int32 ItemId) {
    return EItemCategory::Invalid;
}

bool UItemDataUtility::GetArrangeItemDataCell(const UObject* WorldContextObject, FArrangeItemDataCell& ItemData, FName ID) {
    return false;
}

UItemDataUtility::UItemDataUtility() {
}

