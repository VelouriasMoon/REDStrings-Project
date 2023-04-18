#include "UILogParts.h"

class UTextBlock;
class UWidgetAnimation;

void UUILogParts::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUILogParts::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* TextBlock) {
}

UUILogParts::UUILogParts() {
    this->ShuffleSeconds = 0.25f;
    this->ShuffleIntervalSeconds = 0.02f;
}

