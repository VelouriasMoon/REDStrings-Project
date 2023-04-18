#include "UIQuestMenu.h"

class UBorder;
class UREDScrollBox;
class UTextBlock;
class UUIBase;
class UUIGuide;
class UUIMainContents;
class UUIQuestChoice;
class UUIQuestDetailsBonds;
class UUIQuestDetailsMain;
class UUIQuestDetailsSub;
class UUIQuestListIndex;
class UUserWidget;
class UWidgetAnimation;

void UUIQuestMenu::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIQuestMenu::SetContentsChange(bool IsChange) {
}

void UUIQuestMenu::ListUpdateElement_Implementation(int32 Index, UUserWidget* Widget) {
}

void UUIQuestMenu::ListUnFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIQuestMenu::ListUnFocus_Implementation(UUserWidget* Widget) {
}

void UUIQuestMenu::ListFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIQuestMenu::ListFocus_Implementation(UUserWidget* Widget) {
}

bool UUIQuestMenu::isPlayingProgramAnimation() const {
    return false;
}

bool UUIQuestMenu::isEndMenu() const {
    return false;
}


void UUIQuestMenu::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animInfoWindow, UWidgetAnimation* animInfoWindowIn, UWidgetAnimation* animInfoWindowOut, UBorder* borderAllColor, UREDScrollBox* ScrollBox, UUIQuestListIndex* uiListIndexBase, UUIQuestChoice* childQuestPopup, UUIBase* childErrorPopup, UUIQuestDetailsMain* childDetailsMain, UUIQuestDetailsSub* childDetailsSub, UUIQuestDetailsBonds* childDetailsBounds) {
}

void UUIQuestMenu::InitializeCommonParts(UUIMainContents* UIMainContents, UTextBlock* textHelp, UUIGuide* uiKeyGuide) {
}

void UUIQuestMenu::InitializeCategory(int32 Category, UUserWidget* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UWidgetAnimation* animUnselect, UTextBlock* textCategory) {
}

void UUIQuestMenu::InitializeArrowLR(int32 Index, UUserWidget* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision) {
}

UUIQuestMenu::UUIQuestMenu() {
    this->ListOffsetSize = 0.00f;
    this->ListIndexClass = NULL;
}

