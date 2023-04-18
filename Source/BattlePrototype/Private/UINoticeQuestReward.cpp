#include "UINoticeQuestReward.h"

class UImage;
class UOverlay;
class UTextBlock;
class UUIBase;
class UWidgetAnimation;

bool UUINoticeQuestReward::UpdateCursor() {
    return false;
}

bool UUINoticeQuestReward::SetRewardText(FName questId) {
    return false;
}




void UUINoticeQuestReward::InitializeRarity(UImage* rarity1, UImage* rarity2, UImage* rarity3) {
}

void UUINoticeQuestReward::initializeQuestRewardChoiceIndex(int32 Index, UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UTextBlock* textIndex) {
}

void UUINoticeQuestReward::InitializeOverlay(UOverlay* overlay1, UOverlay* overlay2, UOverlay* overlay3) {
}

void UUINoticeQuestReward::InitializeCategory(UImage* category1, UImage* category2, UImage* category3) {
}

int32 UUINoticeQuestReward::getQuestRewardResult() const {
    return 0;
}

UUINoticeQuestReward::UUINoticeQuestReward() {
}

