#include "REDebugLines.h"

void UREDebugLines::SetHitData(FVector2D Pos, FVector2D Size) {
}

void UREDebugLines::SetClippingZone(FVector2D NewTopleft, FVector2D NewTopright, FVector2D NewBottomleft, FVector2D NewBottomright) {
}

void UREDebugLines::SetCircle(bool circle) {
}

UREDebugLines::UREDebugLines() : UUserWidget(FObjectInitializer::Get()) {
    this->m_Circle = false;
}

