#include "UICode.h"

class UREDScrollBox;
class UTextBlock;
class UUserWidget;
class UWidgetAnimation;

void UUICode::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUICode::Start() {
}

void UUICode::ListUpdateElement_Implementation(int32 Index, UUserWidget* Widget) {
}

void UUICode::ListUnFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUICode::ListUnFocus_Implementation(UUserWidget* Widget) {
}

void UUICode::ListFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUICode::ListFocus_Implementation(UUserWidget* Widget) {
}

void UUICode::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UREDScrollBox* ScrollBox, UTextBlock* textTitle) {
}

UUICode::UUICode() {
    this->ListOffsetSize = 0.00f;
    this->ListIndexClass = NULL;
}

