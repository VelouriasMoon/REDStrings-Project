#include "REDHorizonFlipbookWidget.h"

class UUIBase;

void UREDHorizonFlipbookWidget::SetParentUIBase(UUIBase* pUiBase) {
}

void UREDHorizonFlipbookWidget::SetMouseMode(bool mousemode, int32 inputLevel) {
}

void UREDHorizonFlipbookWidget::SetMouseInputLevel(int32 inputLevel) {
}

void UREDHorizonFlipbookWidget::SetMouseDisable(bool Flag) {
}

int32 UREDHorizonFlipbookWidget::GetMouseInputLevel() const {
    return 0;
}

bool UREDHorizonFlipbookWidget::GetMouseDisable() const {
    return false;
}

FVector2D UREDHorizonFlipbookWidget::GetAbsoluteSize() {
    return FVector2D{};
}

FVector2D UREDHorizonFlipbookWidget::GetAbsolutePosition() {
    return FVector2D{};
}

bool UREDHorizonFlipbookWidget::CheckRectangleCore(FVector2D Position) {
    return false;
}

bool UREDHorizonFlipbookWidget::CheckRectangle() {
    return false;
}

UREDHorizonFlipbookWidget::UREDHorizonFlipbookWidget() {
    this->FlagMouse = false;
    this->DebugMouseHitDisp = false;
    this->m_DebugDraw = NULL;
}

