#include "UIVisionSimulatorResult.h"

class UTextBlock;

bool UUIVisionSimulatorResult::Share() {
    return false;
}

void UUIVisionSimulatorResult::SetFontColor(UTextBlock* pTextBlock, const FSlateColor& Color, const FLinearColor& OutlineColor) {
}

UUIVisionSimulatorResult::UUIVisionSimulatorResult() {
    this->m_isOpend = false;
}

