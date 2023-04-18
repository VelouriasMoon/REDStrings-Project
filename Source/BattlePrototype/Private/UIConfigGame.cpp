#include "UIConfigGame.h"

class UBackgroundBlur;
class UBorder;
class UImage;
class UOverlay;
class UREDScrollBoxSimple;
class UTextBlock;
class UUIConfigBrightness;
class UUIConfigChoice;
class UUIConfigController;
class UUIConfigGraphics;
class UUIConfigKeyboardMouse;
class UUIConfigOther;
class UUIConfigSelect2;
class UUIConfigSelect3;
class UUIConfigSelect4;
class UUIConfigSelect5;
class UUIConfigSelectMulti;
class UUIConfigSelectSlider;
class UUIGuide;
class UUIMainContents;
class UUserWidget;
class UWidgetAnimation;

void UUIConfigGame::UpdateStateThis(int32 State, int32 SubState, float DeltaSeconds) {
}


void UUIConfigGame::StartFromTitle() {
}

void UUIConfigGame::SetContentsChange(bool IsChange) {
}

void UUIConfigGame::SetChangeMainMenuTabR() {
}

void UUIConfigGame::SetChangeMainMenuTabL() {
}

void UUIConfigGame::setAnyKey(const FKey& Key) {
}


void UUIConfigGame::OnReceivedCustomerID_Implementation(const FString& ID) {
}

bool UUIConfigGame::isPlayingProgramAnimation() const {
    return false;
}

bool UUIConfigGame::isEndMenu() const {
    return false;
}

bool UUIConfigGame::IsChangeMainMenuTabR() const {
    return false;
}

bool UUIConfigGame::IsChangeMainMenuTabL() const {
    return false;
}

bool UUIConfigGame::isAllowChangeMainMenuTab() {
    return false;
}

void UUIConfigGame::InitializeThis(UWidgetAnimation* animDefault, UWidgetAnimation* animIn, UWidgetAnimation* animOut, UWidgetAnimation* animInfoWin, UWidgetAnimation* animInfoWinIn, UWidgetAnimation* animInfoWinOut, UBackgroundBlur* BackgroundBlur, UBorder* borderAllColor, UImage* imageCoverBlack, UREDScrollBoxSimple* ScrollBox, UTextBlock* textTitle, UTextBlock* textHelp, UOverlay* menuSet, UUIGuide* UIGuide, UUIConfigBrightness* uiBrightness, UUIConfigKeyboardMouse* uiKeyboardMouse, UUIConfigController* uiController, UUIConfigGraphics* uiGraphics, UUIConfigOther* uiOther, UImage* imageOtherCategoryLine, UUIConfigChoice* UIConfigChoice, UUIConfigSelect4* uiIndexDifficulty, UUIConfigSelect2* uiIndexAutoLockOn, UUIConfigSelect2* uiIndexAttackDirOrtho, UUIConfigSelect2* uiIndexAttackDirOrthoLockon, UUIConfigSelect3* uiIndexCameraDistance, UUIConfigSelect2* uiIndexAutoCamera, UUIConfigSelect5* uiIndexBehindCameraSpeed, UUIConfigSelect2* uiIndexCameraAfterMoveType, UUIConfigSelect2* uiIndexDisplayEnemyDamage, UUIConfigSelect2* uiIndexMiniMapDisplay, UUIConfigSelect2* uiIndexMiniMapRotation, UUIConfigSelect2* uiIndexMiniMapScaling, UUIConfigSelect2* uiIndexSASCutin, UUIConfigSelect2* uiIndexBrainCrashCutin, UUIConfigSelect2* uiIndexLetterSize, UUIConfigSelect2* uiIndexAutoSkip, UUIConfigSelectMulti* uiIndexVoiceLanguage, UUIConfigSelectSlider* uiIndexVoiceVolume, UUIConfigSelectSlider* uiIndexBGMVolume, UUIConfigSelectSlider* uiIndexSEVolume, UUIConfigSelect5* uiIndexCameraRotationSpeed, UUIConfigSelect5* uiIndexCameraSpeedLockon, UUIConfigSelect2* uiIndexCameraRotationPitch, UUIConfigSelect2* uiIndexCameraRotatinoYaw, UUIConfigSelect2* uiIndexControllerVibration, UTextBlock* textCustomerID) {
}

void UUIConfigGame::InitializeCommonParts(UTextBlock* textHelp, UUIGuide* uiKeyGuide, UUIMainContents* Parent, UWidgetAnimation* animMainMenuInfoWin, UWidgetAnimation* animMainMenuInfoWinIn, UWidgetAnimation* animMainMenuInfoWinOut) {
}

void UUIConfigGame::InitializeCategory(int32 Category, UUserWidget* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision, UTextBlock* textCategory) {
}

void UUIConfigGame::InitializeArrowLR(int32 Index, UUserWidget* Widget, UWidgetAnimation* animDefault, UWidgetAnimation* animSelect, UWidgetAnimation* animSelectIn, UWidgetAnimation* animSelectOut, UWidgetAnimation* animDecision) {
}


UUIConfigGame::UUIConfigGame() {
    this->LineHeight = 54.00f;
    this->IndexPerPage = 12;
    this->ControllerIndexPerPage = 12;
    this->KeyboardIndexPerPage = 11;
    this->m_pSoundSampleVoiceJP = NULL;
    this->m_pSoundSampleVoiceEN = NULL;
    this->m_pSystemSaveLoadScreenParamManager = NULL;
}

