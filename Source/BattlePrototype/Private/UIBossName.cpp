#include "UIBossName.h"

class UTextBlock;
class UWidgetAnimation;

void UUIBossName::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIBossName::Start(const FString& bossId, EBossNameMode Mode, float freeFixedDrawSecond) {
}

void UUIBossName::InitializeThis(UWidgetAnimation* animDefaultNone, UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* textBossName) {
}

UUIBossName::UUIBossName() {
    this->PreShuffleSeconds = 0.10f;
    this->ShuffuleSeconds = 3.00f;
    this->ShuffuleIntervalSeconds = 0.05f;
    this->FixedDrawSecond = 1.00f;
}

