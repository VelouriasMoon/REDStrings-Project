#include "UIEnemyBooks.h"

class UImage;
class UREDScrollBox;
class UTextBlock;
class UUIBooksTop;
class UUIEnemyInfoWindow;
class UUIEnemyListIndex;
class UUIGuide;
class UUIMainContents;
class UUserWidget;
class UWidgetAnimation;

void UUIEnemyBooks::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIEnemyBooks::ListUpdateElement_Implementation(int32 Index, UUserWidget* Widget) {
}

void UUIEnemyBooks::ListUnFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIEnemyBooks::ListUnFocus_Implementation(UUserWidget* Widget) {
}

void UUIEnemyBooks::ListFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIEnemyBooks::ListFocus_Implementation(UUserWidget* Widget) {
}

void UUIEnemyBooks::InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UREDScrollBox* ScrollBox, UUIEnemyInfoWindow* childInfoWin, UUIEnemyListIndex* childListIndex) {
}

void UUIEnemyBooks::InitializeFromMain(UUIMainContents* UIMainContents, UTextBlock* textHelp, UUIGuide* uiKeyGuide) {
}

void UUIEnemyBooks::InitializeFromBooks(UUIBooksTop* Parent, UImage* imageEnemy) {
}

UUIEnemyBooks::UUIEnemyBooks() {
    this->ListOffsetSize = 0.00f;
    this->ListIndexClass = NULL;
    this->TextureEnemy[0] = NULL;
    this->TextureEnemy[1] = NULL;
    this->TextureEnemy[2] = NULL;
    this->TextureEnemy[3] = NULL;
}

