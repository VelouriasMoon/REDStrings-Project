#include "UIShop.h"

class UBorder;
class UCanvasPanel;
class UImage;
class UOverlay;
class UREDScrollBox;
class UTextBlock;
class UUIBase;
class UUIGuide;
class UUIItemTrade;
class UUIShopChoice;
class UUIShopGetContents;
class UUIShopItemDetails;
class UUIShopPartyStatus;
class UUIShopPayment;
class UUserWidget;
class UWidgetAnimation;

void UUIShop::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIShop::Start(int32 shopId, int32 tradeShopId, EShopMode Mode) {
}

void UUIShop::ListUpdateElement_Implementation(int32 Index, UUserWidget* Widget) {
}

void UUIShop::ListUnFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIShop::ListUnFocus_Implementation(UUserWidget* Widget) {
}

void UUIShop::ListFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIShop::ListFocus_Implementation(UUserWidget* Widget) {
}

void UUIShop::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animInfoWindow, UWidgetAnimation* animInfoWindowIn, UWidgetAnimation* animInfoWindowOut, UWidgetAnimation* animChange1, UWidgetAnimation* animChange2, UCanvasPanel* scrollBoxParent, UREDScrollBox* ScrollBox, UUIItemTrade* UIItemTrade, UUIShopGetContents* uiGetContents, UUIShopItemDetails* UIShopItemDetails, UOverlay* uiPaymentParent, UUIShopPayment* UIShopPayment, UUIShopChoice* uiChoice, UUIShopPartyStatus* uiPartyStatus, UUIGuide* UIGuide, UTextBlock* textTitle, UTextBlock* textIndexItem, UTextBlock* textIndexHaveNum, UTextBlock* textIndexPrice, UTextBlock* textIndexBuySellNum, UTextBlock* textHelp, UBorder* shopListColor, UBorder* shopGoldSet) {
}

void UUIShop::InitializeModeTab(int32 Mode, UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UTextBlock* textBuySell) {
}

void UUIShop::InitializeItemCategory(int32 Category, UUIBase* Widget, UImage* imageSeparator, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UWidgetAnimation* animUnselect, UTextBlock* textCategory) {
}

void UUIShop::InitializeArrowLR(int32 Index, UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision) {
}

UUIShop::UUIShop() {
    this->ListOffsetSize = 0.00f;
    this->ListIndexClass = NULL;
    this->BGModelClass = NULL;
    this->BGModel = NULL;
}

