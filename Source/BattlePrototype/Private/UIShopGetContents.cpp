#include "UIShopGetContents.h"

class UImage;
class UREDScrollBox;
class UREDScrollBoxSimple;
class USpacer;
class UTextBlock;
class UUIShop;
class UUIShopChoice;
class UUIShopGetSubListIndex;
class UUserWidget;

void UUIShopGetContents::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIShopGetContents::ListUpdateElement_Implementation(int32 Index, UUserWidget* Widget) {
}

void UUIShopGetContents::ListUnFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIShopGetContents::ListUnFocus_Implementation(UUserWidget* Widget) {
}

void UUIShopGetContents::ListFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIShopGetContents::ListFocus_Implementation(UUserWidget* Widget) {
}

void UUIShopGetContents::InitializeThis(UREDScrollBox* scrollBoxMain, UREDScrollBoxSimple* scrollBoxSub, UUIShopGetSubListIndex* uiSubListIndex, UTextBlock* textListTitle, UImage* imageSubBaseLine, USpacer* spacerDescription) {
}

void UUIShopGetContents::InitializeFromShop(UUIShop* UIShop, UUIShopChoice* uiChoice) {
}

UUIShopGetContents::UUIShopGetContents() {
    this->ListOffsetSizeMain = 0.00f;
    this->ListIndexClassMain = NULL;
    this->m_pSubItemClass = NULL;
    this->m_pSaveSystem = NULL;
    this->m_pSaveLoadSystemParamManager = NULL;
}

