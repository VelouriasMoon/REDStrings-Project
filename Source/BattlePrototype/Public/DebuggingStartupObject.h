#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "DebuggingStartupObject.generated.h"

class ADebuggingItemBase;
class ADebuggingItemBool;
class ADebuggingItemEvent;
class ADebuggingItemInt;
class ADebuggingItemStringArray;
class USaveLoadScreenParamManager;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UDebuggingStartupObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SaveDataNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugSaveDataNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* m_pDebugSaveLoadScreenParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* m_pDebugAutoSaveLoadScreenParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* m_pDebugSystemSaveLoadScreenParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveLoadScreenParamManager* m_pDebugDebugSaveLoadScreenParamManager;
    
public:
    UDebuggingStartupObject();
    UFUNCTION(BlueprintCallable)
    void OnVisionSimulatorArtCheck(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnUseMouseCursor(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnTrial2AchievementSaveDataCheck(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnTitleBack(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemSaveGameData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemLoadGameData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemChangeZeroEpClearFlag(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSystemChangeClearFlag(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSUTestDoSharePlat2(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSUTestDoSharePlat(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSUTestDoShareLaunchURL(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSUDoSharePlat(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSetSaveIndex(const ADebuggingItemInt* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSetDebugSaveIndex(const ADebuggingItemInt* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveSystemData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveRetryData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveLoadMenuSetting(const ADebuggingItemStringArray* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveGameData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveDataCapture(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveAutoData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnReloadLevel(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnPrintScreenFadeCallStack(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnOutputUIBaseList(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnOutputUIBaseAnimationList(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnOutputFlagUpdateAlways(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnOpenSaveMenu(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnOpenLoginUI(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnOpenLoadMenu(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnMinimapTraceTickDisable(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnMinimapTickDisable(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnMinimapScale(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnMinimapRotate(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnMinimapMenuSetting(const ADebuggingItemStringArray* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnMinimapMaterialTickDisable(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnMinimapIconUpdateAdjust(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnMinimapIconTickDisable(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnMinimapIconNpcTickDisable(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnMinimapIconFootTickDisable(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnMinimapIconEnemyTickDisable(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnMinimapDisp(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnMinimapCreateMapDisable(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadTrialSaveData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadTrial2SaveData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadSystemData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadRetryData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadLaunchScreen(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadGameData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadAutoData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnLoadAreaSelectLevel(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnKeyRightCEBankGroup(const ADebuggingItemBase* Item, bool IsRepeat, int32 InSpeed);
    
    UFUNCTION(BlueprintCallable)
    void OnIsExistTrial2SaveData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnGameSuspend(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnGameResume(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnForceExecGarbageCollect(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnForceCrcCheckError(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnForceAutoSaveEnable(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnForceAutoSaveDisable(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnFlushFontCache(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExitGame(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteWorldMapNewFlagClear(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteTutorialNewFlagClear(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteTutoGetFlag(const ADebuggingItemStringArray* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteTradeItemNewFlagClear(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteSubQuestNewFlagClear(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteShopItemNewFlagClear(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteRich(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteResetDropItemLotteryParam(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteMainQuestNewFlagClear(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteItemNewFlagClear(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteEnemyLibraryNewFlagClear(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteContentsClosedFlagClear(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteCollectDebugMenuStrings(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteCharaLibraryNewFlagClear(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteBTTutorialListChanged(const ADebuggingItemStringArray* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteBTTutorialDebugPlay(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteBTSysSkipProgressIDCheckChanged(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteBTSysSkipIsOnceCheckChanged(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteBTSysListChanged(const ADebuggingItemStringArray* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteBTSysForceWataruHarukaFlagChanged(const ADebuggingItemStringArray* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteBTSysDebugPlay(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteBTSysBattleSimOnChanged(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteBTMapGimmickListChanged(const ADebuggingItemStringArray* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteBTMapGimmickDebugPlay(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteBTEnemyListChanged(const ADebuggingItemStringArray* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteBTEnemyDebugPlay(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteBrainCrashOpendChange(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteBondsQuestNewFlagClear(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteAllMaterials(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteAllKeyItem(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteAllFoods(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteAllEquipments(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteAllBattleItems(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecuteAllBaseItems(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnExecExSystemSaveDump(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDrawUIBaseProperty(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDrawShopTradeProperty(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDrawNoticeStack(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDrawInactiveUIBaseProperty(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDrawFontAtlasProperty(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDrawBattleControlProperty(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDrawActionIconProperty(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDispMouseRectangle(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDeleteSystemData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDeleteGameData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDeleteFileGameData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDebugTimeSaveGameData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDebugSaveGameData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDebugLoadGameData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDebugKeyboard(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDebugDrawWidgetName(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnDebugDrawAnimationName(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnConvertTrial2SaveData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnClearGetterDebugMode(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeTransferObject(const ADebuggingItemStringArray* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeSelectDebugTimeSaveData(const ADebuggingItemStringArray* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeScenarioClearM(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeScenarioClearF(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangePresentInfo_Bonsai11349(const ADebuggingItemStringArray* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangepDeepenTheBondsResetIntervalTimer(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangepDeepenTheBondsDebugOutputFlag(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangepBTGiveItemsWithField_LogFlag(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangepBTGiveItemsWithField_ForceEnable(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangepBTGiveItemsWithAjito_LogFlag(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeMouseCameraMove(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeMoney(const ADebuggingItemInt* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeLoadingTipsID(const ADebuggingItemStringArray* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeLastTradeShopID(const ADebuggingItemInt* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeLastShopID(const ADebuggingItemInt* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeGuideDeviceType(const ADebuggingItemStringArray* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDropItemGetRule(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDispType_Bonsai11349(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDisplayDropItemLotteryParam(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDispIndexDropItemLotteryParam(const ADebuggingItemInt* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDispBrainTalkLogFlag(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDecideButtonType(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeDebugPauseInput(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedDispMessageId(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBrainTalkBTInvalidFlag(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBrainTalkAllInvalidFlag(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBoolSoundSpawnDisable(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBoolSample(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBoolParticleSpawnDisable(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBoolDirectPause(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeBoolBrainCrashOpend(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeArrangeItemGetLog(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeArrangeItemForceRepopTimeFlag(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeArrangeItemForceRepopTime(const ADebuggingItemInt* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeAnimInterLockingSuccessTest(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeAnimInterLockingQuestRelease(const ADebuggingItemInt* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeAnimInterLockingFailTest(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeAnimInterLockingErrorTest(const ADebuggingItemStringArray* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnBTResetIsOnce(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnBTResetBeforePlayTime(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnBirthdayBMYear(const ADebuggingItemStringArray* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnBirthdayBMMonth(const ADebuggingItemInt* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnBirthdayBMDay(const ADebuggingItemInt* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoSaveGameData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoLoadGameData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoDeleteGameData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoDeleteFileGameData(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnAllTutoList(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnAllShop(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnAllQuests(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnAllPresentList(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnAllGetContents(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnAllEnemyLibrary(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnAllClearGetters(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnAllCharaLibraryDLC(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnAllCharaLibrary(const ADebuggingItemBool* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnACTickOutputLogOn(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnACTickOutputLogOff(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnACFirstProfileCheck(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    void OnACAccountControllerInfo(const ADebuggingItemEvent* Item);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSaveDataNo();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDebugSaveDataNo();
    
};

