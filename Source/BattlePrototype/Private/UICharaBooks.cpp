#include "UICharaBooks.h"

class UImage;
class UREDScrollBox;
class UTextBlock;
class UUIBooksTop;
class UUICharaInfoWindow;
class UUICharaPresentWindow;
class UUIEnemyListIndex;
class UUIGuide;
class UUIMainContents;
class UUserWidget;
class UWidgetAnimation;

void UUICharaBooks::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUICharaBooks::ListUpdateElement_Implementation(int32 Index, UUserWidget* Widget) {
}

void UUICharaBooks::ListUnFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUICharaBooks::ListUnFocus_Implementation(UUserWidget* Widget) {
}

void UUICharaBooks::ListFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUICharaBooks::ListFocus_Implementation(UUserWidget* Widget) {
}

void UUICharaBooks::InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UWidgetAnimation* animPresent, UWidgetAnimation* animPresentIn, UWidgetAnimation* animPresentOut, UREDScrollBox* ScrollBox, UUICharaInfoWindow* childInfoWin, UUIEnemyListIndex* childListIndex, UUICharaPresentWindow* presentWindow) {
}

void UUICharaBooks::InitializeFromMain(UUIMainContents* UIMainContents, UTextBlock* textHelp, UUIGuide* uiKeyGuide) {
}

void UUICharaBooks::InitializeFromBooks(UUIBooksTop* Parent, UImage* imageChara) {
}

UUICharaBooks::UUICharaBooks() {
    this->ListOffsetSize = 0.00f;
    this->ListIndexClass = NULL;
    this->TextureCharacter[0] = NULL;
    this->TextureCharacter[1] = NULL;
    this->TextureCharacter[2] = NULL;
    this->TextureCharacter[3] = NULL;
    this->TextureCharacter[4] = NULL;
}

