#include "UITitleFirstConfigBrightness.h"

class UImage;
class UPaperFlipbook;
class UREDHorizonFlipbookWidget;
class UREDOverlay;
class UREDTextBlock;
class USpacer;
class UTextBlock;
class UUIBase;
class UWidgetAnimation;

void UUITitleFirstConfigBrightness::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

bool UUITitleFirstConfigBrightness::isBack() const {
    return false;
}

void UUITitleFirstConfigBrightness::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UImage* imageSlider, UTextBlock* textTopDescription, UTextBlock* textBottomDescription, UREDOverlay* gauge_set, USpacer* guideSpacer) {
}

void UUITitleFirstConfigBrightness::initializeIndex(UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UREDTextBlock* textIndex) {
}

void UUITitleFirstConfigBrightness::InitializeArrowLR(bool IsRight, UREDHorizonFlipbookWidget* Widget, UPaperFlipbook* defaultPF, UPaperFlipbook* selectPF, UPaperFlipbook* selectInPF, UPaperFlipbook* selectOutPF, UPaperFlipbook* decisionPF) {
}


UUITitleFirstConfigBrightness::UUITitleFirstConfigBrightness() {
    this->MinX = 37;
    this->MaxX = 850;
}

