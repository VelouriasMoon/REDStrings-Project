#include "RSHUDBase.h"

class UUIBase;


void ARSHUDBase::UnLockInputSubMenu() {
}

void ARSHUDBase::UnlockDetailMapWarning() {
}

void ARSHUDBase::UnloadResidentWidget() {
}

void ARSHUDBase::TDebugDrawWidgetLayout() {
}



void ARSHUDBase::startVisionSimulatorStart_Implementation() {
}

void ARSHUDBase::startVisionSimulatorSelect_Implementation() {
}


void ARSHUDBase::startVisionSimulatorEnd_Implementation() {
}

bool ARSHUDBase::StartTutoTips(EHelpTutorial TutoID, bool notPauseControll, bool notCloseOfPause, bool NewIsFade) {
    return false;
}



bool ARSHUDBase::StartSubQuestReward(FName SubQuestID) {
    return false;
}

void ARSHUDBase::StartSubMenu(ESubMenuType SubMenuType, int32 Parameter, int32 Parameter2) {
}

void ARSHUDBase::StartStaffRoll_Implementation(float Speed) {
}



void ARSHUDBase::StartPhotoModeOutGame() {
}

bool ARSHUDBase::StartPhotoMode_Implementation() {
    return false;
}





void ARSHUDBase::StartGeneralChoice4(const FString& TextMain, int32 DefaultIndex, const FString& textIndex1, const FString& textIndex2, const FString& textIndex3, const FString& textIndex4, bool cancelable, int32 CancelIndex, bool NewIsFade) {
}

void ARSHUDBase::StartGeneralChoice3(const FString& TextMain, int32 DefaultIndex, const FString& textIndex1, const FString& textIndex2, const FString& textIndex3, bool cancelable, int32 CancelIndex, bool NewIsFade) {
}

void ARSHUDBase::StartGeneralChoice2(const FString& TextMain, int32 DefaultIndex, const FString& textIndex1, const FString& textIndex2, bool cancelable, int32 CancelIndex, bool NewIsFade) {
}

void ARSHUDBase::StartGeneralChoice1(const FString& TextMain, const FString& textIndex, bool cancelable, int32 CancelIndex, bool NewIsFade) {
}

void ARSHUDBase::StartEventFinishWaitMode_AfterCounter() {
}



void ARSHUDBase::StartBrainMessageMenu(bool IsAutoMode) {
}

void ARSHUDBase::StartBossName(const FString& bossId, EBossNameMode Mode, float freeFixedDrawSecond) {
}





void ARSHUDBase::SetWeaponMenuDefaultCursor(EPlayerID CharaID, bool IsVisual) {
}

bool ARSHUDBase::SetVisionSimulatorTimerDraw_Implementation(bool IsDraw) {
    return false;
}

void ARSHUDBase::SetVisibleActionUI(bool FlagVisible) {
}

void ARSHUDBase::SetTDebugInvisibleAll(bool IsInvisible) {
}

void ARSHUDBase::SetReserveShopMenu(bool isReserve) {
}

void ARSHUDBase::SetPlayBattleUI(bool FlagPlay) {
}

void ARSHUDBase::SetPartyMenuViewerMode(bool IsViewerMode) {
}

void ARSHUDBase::SetOverlapEventInvalidFlag(bool Enable) {
}

void ARSHUDBase::SetOutGame(bool isOutGame) {
}

void ARSHUDBase::SetOpenWorldMap() {
}

void ARSHUDBase::SetOpenMainMenu() {
}

void ARSHUDBase::SetOpenDetailMap() {
}

void ARSHUDBase::SetOpenBrainMessage() {
}

void ARSHUDBase::SetMouseEnableMainTab(bool Flag) {
}

void ARSHUDBase::SetMouseDispRectangle(bool dispflag) {
}

void ARSHUDBase::SetMouseDispIcon(bool icondisp) {
}

void ARSHUDBase::SetMouseCursorUse(bool useflag) {
}

void ARSHUDBase::SetMouseCursorShow(bool showflag, bool foceshow) {
}






void ARSHUDBase::SetGuideVisibleSysMess(bool isGuide) {
}

void ARSHUDBase::SetEnablePartyMenu(bool enableFlag) {
}

void ARSHUDBase::setDebugWorldmapUnlockFlag(bool UnlockFlag) {
}

void ARSHUDBase::setDebugSaveLoadMenuSetting(int32 settingIndex) {
}

void ARSHUDBase::setDebugMinimapAreaSetting(const FString& settingAreaName) {
}

void ARSHUDBase::setDebugKeyboard(bool IsEnable) {
}

void ARSHUDBase::SetDebugDispUserTag(bool dispflag) {
}


void ARSHUDBase::SetCameraCutPhotoMode(bool Flag) {
}

void ARSHUDBase::SetBrainMessageDefaultThread(FName ThreadTitle) {
}

void ARSHUDBase::SetBrainMapCursorSpeed(float Speed) {
}

void ARSHUDBase::SetBrainMapCursorCorrectSpeed(float Speed) {
}

void ARSHUDBase::SetBrainMapCursorCorrectArea(float Area) {
}

void ARSHUDBase::SetBPUnFoucusMouse() {
}

void ARSHUDBase::SetBPFoucusMouse() {
}

void ARSHUDBase::SasSetChangePageReady(bool ReadyFlagL, bool ReadyFlagR) {
}

void ARSHUDBase::ResumeTutoOperation() {
}

void ARSHUDBase::RestrictOpenTips(bool bRestrict, FName ClaimantName) {
}

void ARSHUDBase::RestrictOpenMenu(bool bRestrict, FName ClaimantName) {
}

void ARSHUDBase::ResetWeaponMenuDefaultCursor() {
}

void ARSHUDBase::ResetCustomTimeDilationAccelerateInValidSettings() {
}

void ARSHUDBase::RemoveFromManageWidget(UUIBase* Widget) {
}

void ARSHUDBase::RemoveDiscoverIndexList(int32 Index) {
}



void ARSHUDBase::releaseVisionSimulatorStartEnd() {
}

void ARSHUDBase::releaseVisionSimulatorResult() {
}


bool ARSHUDBase::PlayDecideAnimeBrainTuto() {
    return false;
}

void ARSHUDBase::PauseTutoOperation() {
}


void ARSHUDBase::OpenWorldMap() {
}

void ARSHUDBase::OpenSystemMessage(const FString& SystemMessage, bool isWarning, bool isGuide, bool NewIsFade) {
}

bool ARSHUDBase::OpenStartSubQuest(FName SubQuestID) {
    return false;
}

bool ARSHUDBase::OpenStartBondsQuest(FName bondsQuestId) {
    return false;
}

void ARSHUDBase::OpenScarletLogo() {
}

bool ARSHUDBase::OpenMinimap(bool Force) {
    return false;
}

bool ARSHUDBase::OpenBrainTuto() {
    return false;
}




void ARSHUDBase::OnAvoid() {
}






void ARSHUDBase::LockInputSubMenu() {
}

void ARSHUDBase::LockDetailMapWarning() {
}

void ARSHUDBase::LoadResidentWidget() {
}


bool ARSHUDBase::isTutoTips() {
    return false;
}


bool ARSHUDBase::IsTDebugInvisibleAll() const {
    return false;
}

bool ARSHUDBase::isSavedSaveLoadMenuError() {
    return false;
}

bool ARSHUDBase::isSavedSaveLoadMenu() {
    return false;
}



bool ARSHUDBase::isPlayBrainTuto() {
    return false;
}

bool ARSHUDBase::IsPhotoModeOutlineSetting() const {
    return false;
}

bool ARSHUDBase::IsPhotoMode() {
    return false;
}

bool ARSHUDBase::IsPartyMenuViewerMode() const {
    return false;
}

bool ARSHUDBase::IsOutGamePhotoMode() {
    return false;
}

bool ARSHUDBase::isOutGameHudMain() {
    return false;
}

bool ARSHUDBase::isOpenSubMenu() {
    return false;
}


bool ARSHUDBase::isOpenedCode() const {
    return false;
}


bool ARSHUDBase::islockInputSubMenu() {
    return false;
}


bool ARSHUDBase::isFoucusMouse() {
    return false;
}

bool ARSHUDBase::IsFadeAnimation() const {
    return false;
}

bool ARSHUDBase::IsFade() const {
    return false;
}

bool ARSHUDBase::IsEventFinishWaitMode_AfterCounter() {
    return false;
}

bool ARSHUDBase::isEndVisionSimulatorStart() const {
    return false;
}

bool ARSHUDBase::isEndVisionSimulatorSelect() {
    return false;
}


bool ARSHUDBase::isEndVisionSimulatorEnd() const {
    return false;
}

bool ARSHUDBase::isEndSystemMessage() {
    return false;
}

bool ARSHUDBase::IsEndSubMenu(ESubMenuType SubMenuType) {
    return false;
}

bool ARSHUDBase::IsEndStaffRoll() {
    return false;
}

bool ARSHUDBase::isEndPhotoModeUI() const {
    return false;
}


bool ARSHUDBase::IsEndGeneralChoice() {
    return false;
}

bool ARSHUDBase::IsEndGameOverFromNative() {
    return false;
}

bool ARSHUDBase::isEndCode() const {
    return false;
}







bool ARSHUDBase::IsCustomTimeDilationAccelerate(float& CurrentCustomTimeDilation) {
    return false;
}



bool ARSHUDBase::isChangedIconDeviceType() const {
    return false;
}


bool ARSHUDBase::IsCancelGeneralChoice() {
    return false;
}

bool ARSHUDBase::isCanceledVisionSimulatorSelect() {
    return false;
}

bool ARSHUDBase::isCanceledCode() const {
    return false;
}

bool ARSHUDBase::IsCameraCutPhotoMode() {
    return false;
}



bool ARSHUDBase::IsBattleMenuInitialized() const {
    return false;
}

void ARSHUDBase::initMouseCursor() {
}

void ARSHUDBase::InitFade() {
}

void ARSHUDBase::initCreateScarletLogo() {
}


FName ARSHUDBase::getResultVisionSimulatorSelect() {
    return NAME_None;
}


FName ARSHUDBase::getResultCode() const {
    return NAME_None;
}

bool ARSHUDBase::GetReserveShopMenu() {
    return false;
}

bool ARSHUDBase::GetOverlapEventInvalidFlag() {
    return false;
}

bool ARSHUDBase::GetMouseDispRectangle() {
    return false;
}

bool ARSHUDBase::GetMouseDispIcon() {
    return false;
}



int32 ARSHUDBase::GetInputLevel() {
    return 0;
}

ERSInputDeviceType ARSHUDBase::getIconDeviceType() const {
    return ERSInputDeviceType::eNone;
}

int32 ARSHUDBase::GetGeneralChoiceResult() {
    return 0;
}

float ARSHUDBase::getFadeAlpha(bool isUnderCaption) {
    return 0.0f;
}

bool ARSHUDBase::GetEnablePartyMenu() {
    return false;
}

bool ARSHUDBase::getDebugWorldmapUnlockFlag() const {
    return false;
}

FVector2D ARSHUDBase::GetDebugViewportSize() {
    return FVector2D{};
}

int32 ARSHUDBase::getDebugSaveLoadMenuSetting() {
    return 0;
}

bool ARSHUDBase::getDebugMinimapTraceTickDisable() {
    return false;
}

bool ARSHUDBase::getDebugMinimapTickDisable() {
    return false;
}

bool ARSHUDBase::getDebugMinimapMaterialTickDisable() {
    return false;
}

bool ARSHUDBase::getDebugMinimapIconUpdateAdjust() {
    return false;
}

bool ARSHUDBase::getDebugMinimapIconTickDisable() {
    return false;
}

bool ARSHUDBase::getDebugMinimapIconNpcTickDisable() {
    return false;
}

bool ARSHUDBase::getDebugMinimapIconFootTickDisable() {
    return false;
}

bool ARSHUDBase::getDebugMinimapIconEnemyTickDisable() {
    return false;
}

bool ARSHUDBase::getDebugMinimapCreateMapDisable() {
    return false;
}

FString ARSHUDBase::getDebugMinimapAreaSetting() {
    return TEXT("");
}

bool ARSHUDBase::getDebugKeyboard() const {
    return false;
}

UClass* ARSHUDBase::getDebugDrawClass() const {
    return NULL;
}

bool ARSHUDBase::GetDebugDispUserTag() {
    return false;
}


float ARSHUDBase::GetBrainMapCursorSpeed() const {
    return 0.0f;
}

float ARSHUDBase::GetBrainMapCursorCorrectSpeed() const {
    return 0.0f;
}

float ARSHUDBase::GetBrainMapCursorCorrectArea() const {
    return 0.0f;
}

FVector2D ARSHUDBase::GetAnalogStickR(UUIBase* Widget) {
    return FVector2D{};
}

FVector2D ARSHUDBase::GetAnalogStickL(UUIBase* Widget) {
    return FVector2D{};
}

void ARSHUDBase::ForceEndGeneralChoice() {
}

void ARSHUDBase::FadeOutWhite(bool isUnderCaption, float second) {
}

void ARSHUDBase::FadeOutFreeColor(FLinearColor Color, bool isUnderCaption, float second) {
}

void ARSHUDBase::FadeOutDefineColor(EUIFadeColorType Color, bool isUnderCaption, float second) {
}

void ARSHUDBase::FadeOutBlack(bool isUnderCaption, float second) {
}

void ARSHUDBase::FadeInWhite(bool isUnderCaption, float second) {
}

void ARSHUDBase::FadeInFreeColor(FLinearColor Color, bool isUnderCaption, float second) {
}

void ARSHUDBase::FadeInDefineColor(EUIFadeColorType Color, bool isUnderCaption, float second) {
}

void ARSHUDBase::FadeInBlack(bool isUnderCaption, float second) {
}

void ARSHUDBase::FadeIn(bool isUnderCaption, float second) {
}

void ARSHUDBase::EndSubMenu() {
}

void ARSHUDBase::EndStaffRoll() {
}

void ARSHUDBase::EndPhotoModeOutGame() {
}

bool ARSHUDBase::EndPhotoMode_Implementation() {
    return false;
}





void ARSHUDBase::DebugDrawInvalidationWidget() {
}


void ARSHUDBase::DEBUG_PRINT(const FText& Message, float posX, float posY, FLinearColor Color, FVector2D Scale) {
}

bool ARSHUDBase::CloseTutoTips() {
    return false;
}


void ARSHUDBase::CloseSystemMessage() {
}

bool ARSHUDBase::CloseStartSubQuest(FName SubQuestID) {
    return false;
}

bool ARSHUDBase::CloseStartBondsQuest(FName bondsQuestId) {
    return false;
}

void ARSHUDBase::CloseScarletLogo() {
}

bool ARSHUDBase::CloseMinimap(bool Force) {
    return false;
}




int32 ARSHUDBase::CheckSubQuestRewardResult() {
    return 0;
}

bool ARSHUDBase::CheckSubQuestReward() {
    return false;
}

bool ARSHUDBase::CheckInputPhotoMode() {
    return false;
}

void ARSHUDBase::CheckInput(UUIBase* Widget, EUIInputButton ButtonType, EUIInputType InputType, bool& IsInput) {
}




void ARSHUDBase::ChangeStaffRollSpeed(float Speed) {
}




ARSHUDBase::ARSHUDBase() {
    this->m_pAtomComponentClass = NULL;
    this->m_pUILetterBoxMaskClass = NULL;
    this->UILetterBoxMask = NULL;
    this->m_pUIFadeClass = NULL;
    this->UIFadeArray[0] = NULL;
    this->UIFadeArray[1] = NULL;
    this->m_pUIGeneralChoiceClass = NULL;
    this->UIGeneralChoice = NULL;
    this->m_pUISystemNoticeChoiceClass = NULL;
    this->UISystemNoticeChoice = NULL;
    this->m_pUITipsClass = NULL;
    this->UITips = NULL;
    this->m_pUISystemMessageClass = NULL;
    this->UISystemMessage = NULL;
    this->InitFlag = false;
    this->DebugDrawMessageFlag = true;
    this->m_pUIMouseClass = NULL;
    this->UIMouse = NULL;
    this->m_pUIScarletLogoClsss = NULL;
    this->m_pUIScarletLogo = NULL;
    this->CurrentTickUnit = 0;
    this->NoticeQuest = NULL;
    this->NoticeQuestReward = NULL;
    this->inputLevel = 0;
    this->HUD_battle_menu = NULL;
    this->CurrentSubMenu = ESubMenuType::None;
    this->PrevInputManagerLayoutType = ERSGamepadLayoutType::BATTLE;
    this->PrevGameViewRenderLayer = 0;
    this->StateSubMenu = 0;
    this->WidgetDetailMap = NULL;
    this->WidgetWorldMap = NULL;
    this->WorldMapStartParam = 0;
    this->WorldMapOpenFlag = false;
    this->WidgetShop = NULL;
    this->WidgetCode = NULL;
    this->WidgetParty = NULL;
    this->WidgetSaveLoad = NULL;
    this->WidgetPresent = NULL;
    this->WidgetPresentNext = NULL;
    this->WidgetAreaHere = NULL;
    this->WidgetAreaNext = NULL;
    this->WidgetCredit = NULL;
    this->WidgetOperation = NULL;
    this->WidgetBrainTalk = NULL;
    this->WidgetVisionSimulator = NULL;
    this->WidgetVisionSimulatorResult = NULL;
    this->WidgetVisionSimulatorStartEnd = NULL;
    this->WidgetPhotoMode = NULL;
    this->IsTitleOutGame = false;
    this->m_PhotoModeCameraActor = NULL;
    this->m_IsPhotoMode = false;
    this->m_IsOutGamePhotoMode = false;
    this->m_IsCameraCutPhotoMode = false;
    this->m_StorePhotoModeBeforeAA = 0;
    this->m_StorePhotoModeBeforeFlagPlayUI = false;
    this->m_pConfigClassBrightness = NULL;
    this->m_pConfigClassChoice = NULL;
    this->m_pConfigClassController = NULL;
    this->m_pConfigClassSelect2 = NULL;
    this->m_pConfigClassSelect3 = NULL;
    this->m_pConfigClassSelect5 = NULL;
    this->m_pConfigClassSelectMulti = NULL;
    this->m_pConfigClassSelectSlider = NULL;
    this->m_pTabClassParts4 = NULL;
    this->m_pTabClassParts5 = NULL;
    this->m_pTabClassParts6 = NULL;
    this->m_pConfigBrightness = NULL;
    this->m_pConfigChoice = NULL;
    this->m_pConfigController = NULL;
    this->m_pConfigSelect2 = NULL;
    this->m_pConfigSelect3 = NULL;
    this->m_pSConfigelect5 = NULL;
    this->m_pConfigSelectMulti = NULL;
    this->m_pConfigSelectSlider = NULL;
    this->m_pTabParts4 = NULL;
    this->m_pTabParts5 = NULL;
    this->m_pTabParts6 = NULL;
    this->DebugIsDrawInvalidationInfo = false;
    this->m_pDebugDrawClass = NULL;
}

