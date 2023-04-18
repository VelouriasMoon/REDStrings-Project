#include "UISaveLoad.h"

class ARSTitleManager;
class UCanvasPanel;
class UREDScrollBox;
class UUIGuide;
class UUISaveLoadChoice;
class UUserWidget;
class UWidgetAnimation;

void UUISaveLoad::UpdateStateSaveLoad(int32 State, int32 SubState, float DeltaSeconds) {
}

void UUISaveLoad::Start(ESaveLoad modeType, ESaveLoadSubType subModeType) {
}

void UUISaveLoad::SetTitleManager(ARSTitleManager* ptitlemanager) {
}

void UUISaveLoad::ListUpdateElement_Implementation(int32 Index, UUserWidget* Widget) {
}

void UUISaveLoad::ListUnFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUISaveLoad::ListUnFocus_Implementation(UUserWidget* Widget) {
}

void UUISaveLoad::ListFocusMouse_Implementation(int32 isMouseScroll, int32 Index, UUserWidget* Widget) {
}

void UUISaveLoad::ListFocus_Implementation(UUserWidget* Widget) {
}

bool UUISaveLoad::isSavedError() {
    return false;
}

bool UUISaveLoad::isSaved() {
    return false;
}

bool UUISaveLoad::isClearChara(int32 slotNo, bool& yuito, bool& kasane) {
    return false;
}

void UUISaveLoad::InitializeSaveLoad(UUIGuide* NewUGuide, UUISaveLoadChoice* SaveLoadChoice) {
}

void UUISaveLoad::InitializeList(UCanvasPanel* NewScrollBoxParent, UREDScrollBox* NewScrollBox) {
}

void UUISaveLoad::InitializeAnime(UWidgetAnimation* info_Win_out, UWidgetAnimation* info_Win_in, UWidgetAnimation* info_Win, UWidgetAnimation* Out, UWidgetAnimation* In, UWidgetAnimation* default_none, UWidgetAnimation* default_) {
}

ESaveLoadSubType UUISaveLoad::GetCurrentSubMode() {
    return ESaveLoadSubType::NormalMode;
}

ESaveLoad UUISaveLoad::GetCurrentMode() {
    return ESaveLoad::Save;
}

UUISaveLoad::UUISaveLoad() {
    this->ListOffsetSize = 0.00f;
    this->ListIndexClass = NULL;
    this->m_pAutoSave = NULL;
    this->m_pAutoSaveLoadScreenParamManager = NULL;
    this->m_pSave = NULL;
    this->m_pSaveLoadScreenParamManager = NULL;
    this->scrollBoxParent = NULL;
    this->m_SaveLoadChoice = NULL;
    this->m_pRSHudBase = NULL;
    this->m_pTitleManager = NULL;
    this->ScrollBox = NULL;
    this->uGuide = NULL;
    this->LastAnimation = NULL;
    this->Anime_info_Win_out = NULL;
    this->Anime_info_Win_in = NULL;
    this->Anime_info_Win = NULL;
    this->Anime_out = NULL;
    this->Anime_in = NULL;
    this->Anime_default_none = NULL;
    this->Anime_default_ = NULL;
}

