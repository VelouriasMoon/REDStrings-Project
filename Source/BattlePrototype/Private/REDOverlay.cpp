#include "REDOverlay.h"

class UUIBase;

void UREDOverlay::SetParentUIBase(UUIBase* pUiBase) {
}

void UREDOverlay::SetMouseMode(bool mousemode, int32 inputLevel) {
}

void UREDOverlay::SetMouseInputLevel(int32 inputLevel) {
}

void UREDOverlay::SetMouseDisable(bool Flag) {
}

int32 UREDOverlay::GetMouseInputLevel() const {
    return 0;
}

bool UREDOverlay::GetMouseDisable() const {
    return false;
}

FVector2D UREDOverlay::GetAbsoluteSize() {
    return FVector2D{};
}

FVector2D UREDOverlay::GetAbsolutePosition() {
    return FVector2D{};
}

bool UREDOverlay::CheckRectangleCore(FVector2D Position) {
    return false;
}

bool UREDOverlay::CheckRectangle() {
    return false;
}

bool UREDOverlay::CheckCircleCore(FVector2D Position) {
    return false;
}

bool UREDOverlay::CheckCircle() {
    return false;
}

UREDOverlay::UREDOverlay() {
    this->FlagMouse = false;
    this->DebugMouseHitDisp = false;
    this->bIsStartTick = true;
    this->m_DebugDraw = NULL;
}

