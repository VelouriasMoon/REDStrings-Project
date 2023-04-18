#include "UIConfigKeyboardMouse.h"

class UREDScrollBox;
class UUserWidget;
class UWidgetAnimation;

void UUIConfigKeyboardMouse::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIConfigKeyboardMouse::ListUpdateElement_Implementation(int32 Index, UUserWidget* Widget) {
}

void UUIConfigKeyboardMouse::ListUnFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIConfigKeyboardMouse::ListUnFocus_Implementation(UUserWidget* Widget) {
}

void UUIConfigKeyboardMouse::ListFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIConfigKeyboardMouse::ListFocus_Implementation(UUserWidget* Widget) {
}

void UUIConfigKeyboardMouse::InitializeThis(UWidgetAnimation* animDefault, UREDScrollBox* ScrollBox) {
}

UUIConfigKeyboardMouse::UUIConfigKeyboardMouse() {
    this->ListOffsetSize = 0.00f;
    this->ListIndexClass = NULL;
}

