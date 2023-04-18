#include "UIItemMenu.h"

class UBorder;
class UREDScrollBox;
class UTextBlock;
class UUIGuide;
class UUIItemDetails;
class UUIItemPartyStatus;
class UUserWidget;
class UWidgetAnimation;

void UUIItemMenu::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIItemMenu::SetContentsChange(bool IsChange) {
}

void UUIItemMenu::ListUpdateElement_Implementation(int32 Index, UUserWidget* Widget) {
}

void UUIItemMenu::ListUnFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIItemMenu::ListFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

bool UUIItemMenu::isPlayingProgramAnimation() const {
    return false;
}

bool UUIItemMenu::isEndMenu() const {
    return false;
}

void UUIItemMenu::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UBorder* borderAllColor, UREDScrollBox* ScrollBox, UUIItemDetails* UIItemDetails, UUIItemPartyStatus* uiPartyStatus) {
}

void UUIItemMenu::InitializeItemCategory(int32 Category, UUserWidget* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UWidgetAnimation* animUnselect, UTextBlock* textCategory) {
}

void UUIItemMenu::InitializeCommonParts(UTextBlock* textHelp, UUIGuide* uiKeyGuide) {
}

void UUIItemMenu::InitializeArrowLR(int32 Index, UUserWidget* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision) {
}

UUIItemMenu::UUIItemMenu() {
    this->ListOffsetSize = 0.00f;
    this->ListIndexClass = NULL;
}

