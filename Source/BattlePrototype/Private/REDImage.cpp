#include "REDImage.h"

class UUIBase;

void UREDImage::SetParentUIBase(UUIBase* pUiBase) {
}

void UREDImage::SetMouseMode(bool mousemode, int32 inputLevel) {
}

void UREDImage::SetMouseInputLevel(int32 inputLevel) {
}

void UREDImage::SetMouseDisable(bool Flag) {
}

int32 UREDImage::GetMouseInputLevel() const {
    return 0;
}

bool UREDImage::GetMouseDisable() const {
    return false;
}

FVector2D UREDImage::GetAbsoluteSize() {
    return FVector2D{};
}

FVector2D UREDImage::GetAbsolutePosition() {
    return FVector2D{};
}

bool UREDImage::CheckRectangleCore(FVector2D Position) {
    return false;
}

bool UREDImage::CheckRectangle() {
    return false;
}

bool UREDImage::CheckCircleCore(FVector2D Position) {
    return false;
}

bool UREDImage::CheckCircle() {
    return false;
}

UREDImage::UREDImage() {
    this->FlagMouse = false;
    this->DebugMouseHitDisp = false;
    this->bIsStartTick = true;
    this->m_DebugDraw = NULL;
}

