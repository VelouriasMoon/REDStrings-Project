#include "UIVisionSimulatorStartEnd.h"

class UTextBlock;
class UWidgetAnimation;

void UUIVisionSimulatorStartEnd::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIVisionSimulatorStartEnd::InitializeThis(UWidgetAnimation* animBar, UWidgetAnimation* animIn, UWidgetAnimation* animStartDefault, UWidgetAnimation* animStartOut, UWidgetAnimation* animEndDefault, UWidgetAnimation* animEndOut, UTextBlock* textStartEnd, UTextBlock* textFileName) {
}

UUIVisionSimulatorStartEnd::UUIVisionSimulatorStartEnd() {
    this->RandomSwithRateLittle = 0.25f;
    this->RandomSwithRateBig = 1.75f;
    this->FixedSwithLongSecond = 0.30f;
    this->m_pDatabaseManager = NULL;
}

