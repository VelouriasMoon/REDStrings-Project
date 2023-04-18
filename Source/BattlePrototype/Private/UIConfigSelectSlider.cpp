#include "UIConfigSelectSlider.h"

class UREDImage;
class UREDOverlay;
class UTextBlock;
class UWidgetAnimation;

void UUIConfigSelectSlider::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIConfigSelectSlider::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* textTitle, UREDImage* imageSlider, UREDOverlay* gauge_set) {
}

UUIConfigSelectSlider::UUIConfigSelectSlider() {
    this->MinX = 0;
    this->MaxX = 700;
}

