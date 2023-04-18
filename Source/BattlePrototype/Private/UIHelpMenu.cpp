#include "UIHelpMenu.h"

class UCanvasPanel;
class UREDScrollBox;
class UTextBlock;
class UUIGuide;
class UUIHelpParts;
class UUITutoTipsParts;
class UUserWidget;
class UWidgetAnimation;

void UUIHelpMenu::UpdateStateHelpList(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIHelpMenu::ListUpdateElement_Implementation(int32 Index, UUserWidget* Widget) {
}

void UUIHelpMenu::ListUnFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIHelpMenu::ListUnFocus_Implementation(UUserWidget* Widget) {
}

void UUIHelpMenu::ListFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIHelpMenu::ListFocus_Implementation(UUserWidget* Widget) {
}

void UUIHelpMenu::InitializeList(UCanvasPanel* scrollBoxParent, UREDScrollBox* ScrollBox) {
}

void UUIHelpMenu::InitializeHelp(UUITutoTipsParts* uTutoTipsParts) {
}

void UUIHelpMenu::InitializeCommonHelp(UTextBlock* textHelp, UUIGuide* uiKeyGuide) {
}

void UUIHelpMenu::InitializeArrow(int32 Index, UUIHelpParts* arrow) {
}

void UUIHelpMenu::InitializeAnime(UWidgetAnimation* default_none, UWidgetAnimation* default_) {
}

UUIHelpMenu::UUIHelpMenu() {
    this->ListOffsetSize = 0.00f;
    this->ListIndexClass = NULL;
}

