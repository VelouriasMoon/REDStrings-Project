#include "DebuggingStartupObject.h"

class ADebuggingItemBase;
class ADebuggingItemBool;
class ADebuggingItemEvent;
class ADebuggingItemInt;
class ADebuggingItemStringArray;

void UDebuggingStartupObject::OnVisionSimulatorArtCheck(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnUseMouseCursor(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnTrial2AchievementSaveDataCheck(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnTitleBack(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnSystemSaveGameData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnSystemLoadGameData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnSystemChangeZeroEpClearFlag(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnSystemChangeClearFlag(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnSUTestDoSharePlat2(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnSUTestDoSharePlat(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnSUTestDoShareLaunchURL(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnSUDoSharePlat(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnSetSaveIndex(const ADebuggingItemInt* Item) {
}

void UDebuggingStartupObject::OnSetDebugSaveIndex(const ADebuggingItemInt* Item) {
}

void UDebuggingStartupObject::OnSaveSystemData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnSaveRetryData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnSaveLoadMenuSetting(const ADebuggingItemStringArray* Item) {
}

void UDebuggingStartupObject::OnSaveGameData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnSaveDataCapture(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnSaveAutoData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnReloadLevel(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnPrintScreenFadeCallStack(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnOutputUIBaseList(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnOutputUIBaseAnimationList(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnOutputFlagUpdateAlways(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnOpenSaveMenu(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnOpenLoginUI(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnOpenLoadMenu(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnMinimapTraceTickDisable(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnMinimapTickDisable(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnMinimapScale(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnMinimapRotate(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnMinimapMenuSetting(const ADebuggingItemStringArray* Item) {
}

void UDebuggingStartupObject::OnMinimapMaterialTickDisable(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnMinimapIconUpdateAdjust(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnMinimapIconTickDisable(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnMinimapIconNpcTickDisable(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnMinimapIconFootTickDisable(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnMinimapIconEnemyTickDisable(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnMinimapDisp(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnMinimapCreateMapDisable(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnLoadTrialSaveData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnLoadTrial2SaveData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnLoadSystemData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnLoadRetryData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnLoadLaunchScreen(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnLoadGameData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnLoadAutoData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnLoadAreaSelectLevel(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnKeyRightCEBankGroup(const ADebuggingItemBase* Item, bool IsRepeat, int32 InSpeed) {
}

void UDebuggingStartupObject::OnIsExistTrial2SaveData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnGameSuspend(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnGameResume(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnForceExecGarbageCollect(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnForceCrcCheckError(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnForceAutoSaveEnable(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnForceAutoSaveDisable(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnFlushFontCache(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExitGame(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteWorldMapNewFlagClear(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteTutorialNewFlagClear(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteTutoGetFlag(const ADebuggingItemStringArray* Item) {
}

void UDebuggingStartupObject::OnExecuteTradeItemNewFlagClear(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteSubQuestNewFlagClear(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteShopItemNewFlagClear(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteRich(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteResetDropItemLotteryParam(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteMainQuestNewFlagClear(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteItemNewFlagClear(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteEnemyLibraryNewFlagClear(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteContentsClosedFlagClear(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteCollectDebugMenuStrings(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteCharaLibraryNewFlagClear(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteBTTutorialListChanged(const ADebuggingItemStringArray* Item) {
}

void UDebuggingStartupObject::OnExecuteBTTutorialDebugPlay(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteBTSysSkipProgressIDCheckChanged(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnExecuteBTSysSkipIsOnceCheckChanged(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnExecuteBTSysListChanged(const ADebuggingItemStringArray* Item) {
}

void UDebuggingStartupObject::OnExecuteBTSysForceWataruHarukaFlagChanged(const ADebuggingItemStringArray* Item) {
}

void UDebuggingStartupObject::OnExecuteBTSysDebugPlay(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteBTSysBattleSimOnChanged(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnExecuteBTMapGimmickListChanged(const ADebuggingItemStringArray* Item) {
}

void UDebuggingStartupObject::OnExecuteBTMapGimmickDebugPlay(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteBTEnemyListChanged(const ADebuggingItemStringArray* Item) {
}

void UDebuggingStartupObject::OnExecuteBTEnemyDebugPlay(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteBrainCrashOpendChange(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteBondsQuestNewFlagClear(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteAllMaterials(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteAllKeyItem(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteAllFoods(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteAllEquipments(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteAllBattleItems(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecuteAllBaseItems(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnExecExSystemSaveDump(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnDrawUIBaseProperty(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnDrawShopTradeProperty(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnDrawNoticeStack(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnDrawInactiveUIBaseProperty(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnDrawFontAtlasProperty(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnDrawBattleControlProperty(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnDrawActionIconProperty(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnDispMouseRectangle(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnDeleteSystemData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnDeleteGameData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnDeleteFileGameData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnDebugTimeSaveGameData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnDebugSaveGameData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnDebugLoadGameData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnDebugKeyboard(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnDebugDrawWidgetName(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnDebugDrawAnimationName(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnConvertTrial2SaveData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnClearGetterDebugMode(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeTransferObject(const ADebuggingItemStringArray* Item) {
}

void UDebuggingStartupObject::OnChangeSelectDebugTimeSaveData(const ADebuggingItemStringArray* Item) {
}

void UDebuggingStartupObject::OnChangeScenarioClearM(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeScenarioClearF(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangePresentInfo_Bonsai11349(const ADebuggingItemStringArray* Item) {
}

void UDebuggingStartupObject::OnChangepDeepenTheBondsResetIntervalTimer(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnChangepDeepenTheBondsDebugOutputFlag(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangepBTGiveItemsWithField_LogFlag(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangepBTGiveItemsWithField_ForceEnable(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangepBTGiveItemsWithAjito_LogFlag(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeMouseCameraMove(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeMoney(const ADebuggingItemInt* Item) {
}

void UDebuggingStartupObject::OnChangeLoadingTipsID(const ADebuggingItemStringArray* Item) {
}

void UDebuggingStartupObject::OnChangeLastTradeShopID(const ADebuggingItemInt* Item) {
}

void UDebuggingStartupObject::OnChangeLastShopID(const ADebuggingItemInt* Item) {
}

void UDebuggingStartupObject::OnChangeGuideDeviceType(const ADebuggingItemStringArray* Item) {
}

void UDebuggingStartupObject::OnChangeDropItemGetRule(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeDispType_Bonsai11349(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeDisplayDropItemLotteryParam(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeDispIndexDropItemLotteryParam(const ADebuggingItemInt* Item) {
}

void UDebuggingStartupObject::OnChangeDispBrainTalkLogFlag(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeDecideButtonType(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeDebugPauseInput(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangedDispMessageId(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeBrainTalkBTInvalidFlag(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeBrainTalkAllInvalidFlag(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeBoolSoundSpawnDisable(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeBoolSample(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeBoolParticleSpawnDisable(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeBoolDirectPause(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeBoolBrainCrashOpend(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeArrangeItemGetLog(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeArrangeItemForceRepopTimeFlag(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeArrangeItemForceRepopTime(const ADebuggingItemInt* Item) {
}

void UDebuggingStartupObject::OnChangeAnimInterLockingSuccessTest(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeAnimInterLockingQuestRelease(const ADebuggingItemInt* Item) {
}

void UDebuggingStartupObject::OnChangeAnimInterLockingFailTest(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnChangeAnimInterLockingErrorTest(const ADebuggingItemStringArray* Item) {
}

void UDebuggingStartupObject::OnBTResetIsOnce(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnBTResetBeforePlayTime(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnBirthdayBMYear(const ADebuggingItemStringArray* Item) {
}

void UDebuggingStartupObject::OnBirthdayBMMonth(const ADebuggingItemInt* Item) {
}

void UDebuggingStartupObject::OnBirthdayBMDay(const ADebuggingItemInt* Item) {
}

void UDebuggingStartupObject::OnAutoSaveGameData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnAutoLoadGameData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnAutoDeleteGameData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnAutoDeleteFileGameData(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnAllTutoList(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnAllShop(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnAllQuests(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnAllPresentList(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnAllGetContents(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnAllEnemyLibrary(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnAllClearGetters(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnAllCharaLibraryDLC(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnAllCharaLibrary(const ADebuggingItemBool* Item) {
}

void UDebuggingStartupObject::OnACTickOutputLogOn(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnACTickOutputLogOff(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnACFirstProfileCheck(const ADebuggingItemEvent* Item) {
}

void UDebuggingStartupObject::OnACAccountControllerInfo(const ADebuggingItemEvent* Item) {
}

int32 UDebuggingStartupObject::GetSaveDataNo() {
    return 0;
}

int32 UDebuggingStartupObject::GetDebugSaveDataNo() {
    return 0;
}

UDebuggingStartupObject::UDebuggingStartupObject() {
    this->SaveDataNo = 0;
    this->DebugSaveDataNo = 0;
    this->m_pDebugSaveLoadScreenParamManager = NULL;
    this->m_pDebugAutoSaveLoadScreenParamManager = NULL;
    this->m_pDebugSystemSaveLoadScreenParamManager = NULL;
    this->m_pDebugDebugSaveLoadScreenParamManager = NULL;
}

