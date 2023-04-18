#include "UIGamerTag.h"

class UOverlay;
class UTextBlock;
class UWidgetAnimation;

void UUIGamerTag::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIGamerTag::SetUserName() {
}

void UUIGamerTag::SetGuideVisible(bool IsVisible) {
}

void UUIGamerTag::InitializeThisGuide(UOverlay* NewGuide) {
}

void UUIGamerTag::InitializeThis(UTextBlock* usernametext, UWidgetAnimation* _default) {
}

UUIGamerTag::UUIGamerTag() {
    this->guide = NULL;
    this->XBoxUserName = NULL;
    this->Anime_default = NULL;
}

