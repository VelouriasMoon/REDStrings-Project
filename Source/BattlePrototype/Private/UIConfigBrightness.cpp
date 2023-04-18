#include "UIConfigBrightness.h"

class UImage;
class UPaperFlipbook;
class UREDHorizonFlipbookWidget;
class UREDOverlay;
class UTextBlock;
class UWidgetAnimation;

void UUIConfigBrightness::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIConfigBrightness::InitializeThis(UWidgetAnimation* animDefault, UImage* imageSlider, UTextBlock* textDescription, UREDOverlay* gauge_set) {
}

void UUIConfigBrightness::InitializeArrowLR(bool IsRight, UREDHorizonFlipbookWidget* Widget, UPaperFlipbook* defaultPF, UPaperFlipbook* selectPF, UPaperFlipbook* selectInPF, UPaperFlipbook* selectOutPF, UPaperFlipbook* decisionPF) {
}


UUIConfigBrightness::UUIConfigBrightness() {
    this->MinX = 34;
    this->MaxX = 854;
}

