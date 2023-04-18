#include "UIItemTrade.h"

class UREDScrollBox;
class UTextBlock;
class UUIItemTradeListIndex;
class UUIItemTradeMaterialListIndex;
class UUIShop;
class UUIShopChoice;
class UUIShopItemDetails;
class UUIShopPartyStatus;
class UUIWishList;
class UUserWidget;

void UUIItemTrade::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIItemTrade::StartWishList() {
}

void UUIItemTrade::Start(int32 tradeShopId, bool& isNewItemAvailableAddLineup) {
}

void UUIItemTrade::ListUpdateElement_Implementation(int32 Index, UUserWidget* Widget) {
}

void UUIItemTrade::ListUnFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIItemTrade::ListUnFocus_Implementation(UUserWidget* Widget) {
}

void UUIItemTrade::ListFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIItemTrade::ListFocus_Implementation(UUserWidget* Widget) {
}

void UUIItemTrade::InitializeThis(UREDScrollBox* ScrollBox, UUIItemTradeListIndex* uiListIndexBase, UTextBlock* textIndexItem, UTextBlock* textIndexHaveNum, UUIItemTradeMaterialListIndex* uiMaterialListIndex1, UUIItemTradeMaterialListIndex* uiMaterialListIndex2, UUIItemTradeMaterialListIndex* uiMaterialListIndex3, UTextBlock* textMaterialName, UTextBlock* textMaterialHaveNum, UTextBlock* textMaterialNeedNum) {
}

void UUIItemTrade::InitializeFromWishList(UUIWishList* UIWishList, UUIShopItemDetails* uiItemDetail, UUIShopPartyStatus* uiPartyStatus) {
}

void UUIItemTrade::InitializeFromShop(UUIShop* UIShop, UUIShopItemDetails* uiItemDetail, UUIShopChoice* uiChoice, UUIShopPartyStatus* uiPartyStatus) {
}

void UUIItemTrade::CloseWishList() {
}

UUIItemTrade::UUIItemTrade() {
    this->ListOffsetSize = 0.00f;
    this->ListIndexClass = NULL;
}

