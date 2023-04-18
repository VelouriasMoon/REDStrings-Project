#include "UIItemTradeMaterialListIndex.h"

class UTextBlock;
class UWidgetAnimation;

void UUIItemTradeMaterialListIndex::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

bool UUIItemTradeMaterialListIndex::SetItemInfo_Implementation(const FName& ItemId, int32 needNum, bool isLackMaterial) {
    return false;
}

void UUIItemTradeMaterialListIndex::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animDefaultMax, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectMax, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectInMax, UWidgetAnimation* animDefaultLack, UWidgetAnimation* animSelectLack, UWidgetAnimation* animSelectInLack, UTextBlock* textItemName, UTextBlock* textNumHave, UTextBlock* textNumNeed) {
}

UUIItemTradeMaterialListIndex::UUIItemTradeMaterialListIndex() {
}

