#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BattleLogParam.h"
#include "EGameClearState.h"
#include "EHelpTutorial.h"
#include "EPlayerID.h"
#include "HCGameDifficulty.h"
#include "PresentInfoData.h"
#include "WorldmapOpenLCParam.h"
#include "UserParameterUtility.generated.h"

class UObject;
class USaveLoadExSystemParamManager;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UUserParameterUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUserParameterUtility();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool WorldmapSetLocationSelectable_WithPortal(UObject* WorldContextObject, int32 LocationNo, int32 AreaNo, int32 PortalNo, bool isSelectable, bool isForce, bool isAreaAll);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool WorldmapSetLocationSelectable(UObject* WorldContextObject, int32 LocationNo, int32 AreaNo, bool isSelectable, bool isForce, bool isAreaAll);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool WorldmapSetLocationNotSelectableAll(UObject* WorldContextObject, bool isNotSelectable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool WorldmapSetLocationNotSelectable(UObject* WorldContextObject, int32 LocationId, bool isNotSelectable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool WorldmapSetLocationNewOpen(UObject* WorldContextObject, int32 LocationNo, int32 AreaNo, bool isNewOpen, bool isAreaAll);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool WorldmapOpenLocation(UObject* WorldContextObject, int32 LocationNo, int32 AreaNo, bool isSelectable);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool WorldmapIsLocationSelectable(UObject* WorldContextObject, int32 LocationNo, int32 AreaNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool WorldmapIsLocationNotSelectableAll(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool WorldmapIsLocationNotSelectable(UObject* WorldContextObject, int32 LocationId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool WorldmapIsLocationNewOpen(UObject* WorldContextObject, int32 LocationId, int32 areaId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool WorldmapGetOpenParam(UObject* WorldContextObject, TArray<FWorldmapOpenLCParam>& openedList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool WorldmapCloseLocation(UObject* WorldContextObject, int32 LocationNo, int32 AreaNo, bool isAreaAll);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void WorldmapCheckOpenFromProgressID(UObject* WorldContextObject, int32 ProgressId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UpdateTeamBondsLevel(UObject* WorldContextObject, EPlayerID playerId, int32 ProgressNo, bool isSingleLvUp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool UpdatePresentItemInfo(UObject* WorldContextObject, EPlayerID sendCharaID, EPlayerID recvCharaID, FName ItemId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartDLCBondsEpisode(UObject* WorldContextObject, FName bondsID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartBondsEpisode(UObject* WorldContextObject, EPlayerID playerId, EPlayerID TargetID, int32 bondsEpNumber);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetZeroEpClear(UObject* WorldContextObject, bool zeroEpFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetTransferObjectByName(UObject* WorldContextObject, FName ItemId, int32 ObjectID, bool isOverwrite);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetTransferObject(UObject* WorldContextObject, int32 ItemId, int32 ObjectID, bool isOverwrite);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTitleProductFlag(UObject* WorldContextObject, bool endingAfterFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTeamBondsProgress(UObject* WorldContextObject, EPlayerID playerId, int32 Progress);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetJewelTicketCount(UObject* WorldContextObject, int32 newCount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGameDifficulty(UObject* WorldContextObject, HCGameDifficulty diffuculty);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGameClearState(UObject* WorldContextObject, EGameClearState State);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGameClear(UObject* WorldContextObject, bool clearFlag);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetDispTipsState(UObject* WorldContextObject, EHelpTutorial helpID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsTipsDispEnable(UObject* WorldContextObject, EHelpTutorial helpID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsHelpTutoIDMini(UObject* WorldContextObject, EHelpTutorial helpID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDispTipsOrMiniTips(UObject* WorldContextObject, EHelpTutorial helpID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HaveJewelTicket(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetTransferObjectByName(UObject* WorldContextObject, FName ItemId, int32& ObjectID, bool isRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetTransferObject(UObject* WorldContextObject, int32 ItemId, int32& ObjectID, bool isRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetTeamBondsProgress(UObject* WorldContextObject, EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetTeamBondsMaxLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetTeamBondsLevel(UObject* WorldContextObject, EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetSelectedTogetherCharID(UObject* WorldContextObject, TArray<EPlayerID>& selectedArray);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USaveLoadExSystemParamManager* GetSaveLoadExSystemParamManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetSasControllChange(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FName GetPurposeMessage(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetPresentItemInfoList(UObject* WorldContextObject, EPlayerID sendCharaID, EPlayerID recvCharaID, TArray<FPresentInfoData>& itemList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetNextTips(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetMoney(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetJewelTicketCount(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetItemNum(UObject* WorldContextObject, const FName ItemId);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetIsProgressBondsEpisode(UObject* WorldContextObject, EPlayerID& playerId, EPlayerID& TargetID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GetHasPresentedItemInfoList(UObject* WorldContextObject, EPlayerID sendCharaID, EPlayerID recvCharaID, TArray<FPresentInfoData>& itemList, bool includeEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static HCGameDifficulty GetGameDifficulty(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static EGameClearState GetGameClearState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetBeginningTips(UObject* WorldContextObject, EPlayerID Player, int32 ProgressNo, int32 nextLocation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void EndBondsEpisode(UObject* WorldContextObject, bool IsCancel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float DisplayTipsOrMiniTipsByHelpID(UObject* WorldContextObject, EHelpTutorial helpID, const bool notPauseControll, const bool notCloseOfPause, const bool isPlayableCheck, const bool IsFade);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearRetryTips(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckTeamBondsLevelUp(UObject* WorldContextObject, EPlayerID playerId, int32 ProgressNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckStartTeamBondsEpisode(UObject* WorldContextObject, EPlayerID playerId, int32& episodeNo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckIsNeedRetryTips(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CheckAppliedAddContent(UObject* WorldContextObject, FName contentName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AllOpenBrainMessageIgnorConditionsAndLock(UObject* WorldContextObject, const int32 targetThread);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddMoney(UObject* WorldContextObject, const int32 Money);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddJewelTicketCount(UObject* WorldContextObject, int32 addCount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool AddItemNum(UObject* WorldContextObject, const FName ItemId, const int32 itemNum, const bool isUpdateMapUsable, const bool isDispLog);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddBrainMessageIgnorConditions(UObject* WorldContextObject, const int32 threadNumber, const int32 messageNum);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddBattleLogBuffer(UObject* WorldContextObject, const FBattleLogParam& Param);
    
};

