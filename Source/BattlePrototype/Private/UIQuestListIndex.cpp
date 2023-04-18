#include "UIQuestListIndex.h"

class UImage;
class UOverlay;
class UTextBlock;
class UWidgetAnimation;

void UUIQuestListIndex::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUIQuestListIndex::SetInfo_Implementation(EQuestDataType QuestType, const FName& ID, int32 Progress, int32 Index, bool IsActive) {
}

void UUIQuestListIndex::SetClearGetterInfo_Implementation(const FString& strTitle, int32 Progress, bool IsNew, bool isGetReward) {
}

void UUIQuestListIndex::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animDefaultLock, UWidgetAnimation* animSelectLock, UWidgetAnimation* animSelectLockIn, UImage* imageNewIcon, UImage* imageQuest, UImage* imageBlackPattern1, UImage* imageBlackPattern2, UOverlay* overlayYuito, UOverlay* overlayKasane, UImage* imageChallenge, UTextBlock* textQuestName) {
}

UUIQuestListIndex::UUIQuestListIndex() {
}

