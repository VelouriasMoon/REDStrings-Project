#include "UICharaPresentWindow.h"

class UBorder;
class UImage;
class UREDScrollBox;
class UTextBlock;
class UUICharaPresentListIndex;
class UUIGuide;
class UUserWidget;

void UUICharaPresentWindow::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}




void UUICharaPresentWindow::ListUpdateElement_Implementation(int32 Index, UUserWidget* Widget) {
}

void UUICharaPresentWindow::ListUnFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUICharaPresentWindow::ListUnFocus_Implementation(UUserWidget* Widget) {
}

void UUICharaPresentWindow::ListFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUICharaPresentWindow::ListFocus_Implementation(UUserWidget* Widget) {
}

void UUICharaPresentWindow::InitializeThis(UREDScrollBox* ScrollBox, UUICharaPresentListIndex* childListIndex, UImage* imagePresent, UTextBlock* textTitleBar, UTextBlock* textCharaName, UBorder* borderBondLevelNum, UTextBlock* textBondLevelNum, UTextBlock* textItemName, UBorder* borderCurrentNum, UTextBlock* textCurrentNum, UTextBlock* textSlash, UTextBlock* textMaxNum, UUIGuide* childGuide, UTextBlock* textKeyBondsQuest) {
}

UUICharaPresentWindow::UUICharaPresentWindow() {
    this->ListOffsetSize = 0.00f;
    this->ListIndexClass = NULL;
}

