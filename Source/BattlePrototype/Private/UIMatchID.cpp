#include "UIMatchID.h"

class UTextBlock;
class UWidgetAnimation;

void UUIMatchID::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIMatchID::Start(const FName CharaID, const FName armyCodeMessageID) {
}

void UUIMatchID::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UTextBlock* textID, UTextBlock* textName) {
}

void UUIMatchID::End() {
}

UUIMatchID::UUIMatchID() {
    this->PreShuffleSeconds = 0.00f;
    this->ShuffuleSeconds = 1.00f;
    this->ShuffuleIntervalSeconds = 0.00f;
}

