#include "TradeItemData.h"

class UDataTable;

UDataTable* UTradeItemData::GetTradeItemDataTable() const {
    return NULL;
}

bool UTradeItemData::GetTItemDataFromDataTable(const FString& tradeTablePath) {
    return false;
}

bool UTradeItemData::GetDataLineByIndex(const FName Index, FTradeItem& TradeItem) {
    return false;
}

UTradeItemData::UTradeItemData() {
    this->tradeItemDataTable_ = NULL;
}

