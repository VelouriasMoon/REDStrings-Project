#include "UIVisionSimulator.h"

class UBorder;
class UImage;
class UOverlay;
class UREDScrollBox;
class UREDScrollBoxSimple;
class USpacer;
class UTextBlock;
class UUIBase;
class UUIGuide;
class UUserWidget;
class UWidgetAnimation;

void UUIVisionSimulator::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}



void UUIVisionSimulator::ListUpdateElement_Implementation(int32 Index, UUserWidget* Widget) {
}

void UUIVisionSimulator::ListUnFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIVisionSimulator::ListUnFocus_Implementation(UUserWidget* Widget) {
}

void UUIVisionSimulator::ListFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUIVisionSimulator::ListFocus_Implementation(UUserWidget* Widget) {
}

void UUIVisionSimulator::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animDefault2, UWidgetAnimation* animChange1, UWidgetAnimation* animChange2, UREDScrollBox* scrollBoxMain, UUIGuide* childGuide, UTextBlock* textScreenTitle, UImage* imageIconDifficulty, UImage* imageIconDifficulty2, UTextBlock* textMissionTitle, UTextBlock* textMissionNumber, UREDScrollBoxSimple* scrollBoxSub, UTextBlock* textOrderTitle, UBorder* borderOrder, UTextBlock* textOrderDetail, UTextBlock* textLocationTitle, UTextBlock* textLocationDetail, UTextBlock* textMissionEnemyTitle, UTextBlock* textMissionEnemy0, UTextBlock* textMissionEnemy1, UTextBlock* textMissionEnemy2, UTextBlock* textMissionEnemy3, UTextBlock* textMissionEnemy4, UTextBlock* textMissionItem, UTextBlock* textOverviewTitle, USpacer* spaceOverview) {
}

void UUIVisionSimulator::InitializeMainItems(int32 Index, UOverlay* textSet, UImage* imageItemRarity, UImage* imageItemCategory) {
}

void UUIVisionSimulator::InitializeHighScore(int32 Index, UImage* imageFace, UTextBlock* textDifficultyTitle, UTextBlock* textDifficultyDetail, UTextBlock* textTotalScoreTitle, UTextBlock* textTotalScoreNum, UTextBlock* textTotalScorePiont, UTextBlock* textRankTitle, UImage* imageRank, UTextBlock* textRankNone, UTextBlock* textDate, UTextBlock* textTimehh, UTextBlock* textTimeColon, UTextBlock* textTimemm) {
}

void UUIVisionSimulator::InitializeCategory(int32 Index, UUIBase* Widget, UImage* imageSeparator, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UTextBlock* textName) {
}

void UUIVisionSimulator::InitializeArrowLR(int32 Index, UUIBase* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision) {
}

UUIVisionSimulator::UUIVisionSimulator() {
    this->ListOffsetSize = 0.00f;
    this->ListIndexClass = NULL;
    this->m_pBattleSimulatorManager = NULL;
}

