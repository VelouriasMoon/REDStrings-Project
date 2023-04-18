#include "UIQuestDetailsSub.h"

class UCanvasPanel;
class UHorizontalBox;
class UImage;
class UOverlay;
class UREDScrollBoxSimple;
class USpacer;
class UTextBlock;
class UUIQuestIcon;
class UUIQuestNamePlate;

void UUIQuestDetailsSub::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}



void UUIQuestDetailsSub::InitializeThis(UREDScrollBoxSimple* ScrollBox, UTextBlock* textTitle, UTextBlock* textIndexClient, UTextBlock* textIndexLocation, UTextBlock* textIndexProgress, UTextBlock* textIndexReward, UTextBlock* textClient, UTextBlock* TextLocation, USpacer* spacerDescription1, USpacer* spacerDescription2, UUIQuestIcon* UIQuestIcon, UUIQuestNamePlate* UIQuestNamePlate, UCanvasPanel* questPanel) {
}

void UUIQuestDetailsSub::InitializeReward(int32 Index, UOverlay* textSet, UImage* imageItemRarity, UImage* imageItemCategory) {
}

void UUIQuestDetailsSub::InitializeProgress(int32 Index, UHorizontalBox* HorizontalBox, UOverlay* iconSet, UImage* imageItemRarity, UImage* imageItemCategory, UTextBlock* TextBlock, UOverlay* numSet, UTextBlock* textProgressCurrent, UTextBlock* textProgressSlash, UTextBlock* textProgressTarget) {
}

UUIQuestDetailsSub::UUIQuestDetailsSub() {
}

