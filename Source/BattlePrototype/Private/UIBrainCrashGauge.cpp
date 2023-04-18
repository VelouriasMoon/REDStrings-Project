#include "UIBrainCrashGauge.h"

class ARSCharacterBase;
class UImage;
class UWidgetAnimation;

void UUIBrainCrashGauge::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIBrainCrashGauge::SetTarget(ARSCharacterBase* Target, bool isBossGauge) {
}

void UUIBrainCrashGauge::SetBg(UImage* pImage) {
}

bool UUIBrainCrashGauge::isBossMiniGauge() {
    return false;
}

void UUIBrainCrashGauge::InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animFull, UWidgetAnimation* animDecision, UWidgetAnimation* animDecision2, UImage* imageGaugeAdd, UImage* imageGaugeNormal) {
}

void UUIBrainCrashGauge::GetGaugeTimerRate(float& Rate) {
}

UUIBrainCrashGauge::UUIBrainCrashGauge() {
    this->m_pTarget = NULL;
}

