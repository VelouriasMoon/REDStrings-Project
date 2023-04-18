#include "UIHealthControl.h"

class UImage;
class UTextBlock;

void UUIHealthControl::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIHealthControl::SetTextHP(UTextBlock* textMaxHP, UTextBlock* textCurrentHP) {
}

void UUIHealthControl::SetProgressBar(UImage* Base, UImage* Override, UImage* base_add) {
}

void UUIHealthControl::SetPlayerName(EPlayerID CharaID, UTextBlock* text) {
}

void UUIHealthControl::SetNotHealAnimationFlag(bool IsNotAnimation) {
}

void UUIHealthControl::setIconType(int32 Type) {
}

void UUIHealthControl::SetIconDraw(int32 Index, bool IsDraw) {
}



void UUIHealthControl::SetIcon(int32 Index, UImage* Icon) {
}

void UUIHealthControl::SetHpDirect(float Max, float current) {
}

void UUIHealthControl::SetHp(float Max, float current) {
}

void UUIHealthControl::ResetFlagFirstSet() {
}


int32 UUIHealthControl::GetBadStateNum() const {
    return 0;
}

UUIHealthControl::UUIHealthControl() {
}

