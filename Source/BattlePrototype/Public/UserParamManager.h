#pragma once
#include "CoreMinimal.h"
//-FallbackName=Object
#include "BattlefieldInfo.h"
#include "BondsLevelEventDelegate.h"
#include "BondsProgressEventDelegate.h"
#include "EBrainTalkCategory.h"
#include "ECanBeAddedItems.h"
#include "EGameClearState.h"
#include "EMapGimmickType.h"
#include "EPlayerID.h"
#include "EPlayerSkill.h"
#include "ESASEquipStatus.h"
#include "E_SASButton.h"
#include "E_SASKindNative.h"
#include "HCGameDifficulty.h"
#include "LIBRARY_FLAG.h"
#include "ManagerInterface.h"
#include "MemberSlotInfo.h"
#include "OnChangeNoticeUiRemoveStateDelegate.h"
#include "OnChangeNoticeUiStateDelegate.h"
#include "OnStartBondsEpisodeEventDelegate.h"
#include "PresentInfoData.h"
#include "RSSaveGameInterface.h"
#include "SASEquipEventDelegate.h"
#include "SASEquipExtendEventDelegate.h"
#include "SASEquipStatusEventDelegate.h"
#include "UserItemInfo.h"
#include "UserParam.h"
#include "UserSystemParam.h"
#include "WorldmapOpenLCParam.h"
#include "WorldmapSelectableChangeEventDelegate.h"
#include "UserParamManager.generated.h"

class UBattleLogBuffer;
class UBrainMessageParamManager;
class UCharactersParameterManager;
class UDeepenTheBondsParamManager;
class ULibraryCharacterParam;
class ULibraryEnemyParam;
class ULoadTipsParamManager;
class UOptionParam;
class UPresentInfoParam;
class UPurposeMessageParamManager;
class UQuestParamManager;
class UTipsCountParamManager;
class UWorldmapOpenParam;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UUserParamManager : public UObject, public IRSSaveGameInterface, public IManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserParam m_userParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCharactersParameterManager* m_pCharaParamManage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldmapOpenParam* m_worldmapOpenParamM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorldmapOpenParam* m_worldmapOpenParamF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> m_transObjMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_tradeWishList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UQuestParamManager* m_questParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBrainMessageParamManager* m_brainMessageParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULoadTipsParamManager* m_loadingTipsParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptionParam* m_optionParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPurposeMessageParamManager* m_purposeMessageParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULibraryEnemyParam* m_libraryEnemyParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULibraryCharacterParam* m_libraryCharaParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserSystemParam m_UserSystemParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPresentInfoParam* m_presentInfoParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTipsCountParamManager* m_tipsCountParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDeepenTheBondsParamManager* m_deepenTheBondsParamManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_seenAjitoPatternList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattleLogBuffer* m_battleLogBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_AllAddContentsNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_AppliedAddContentsNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_NotifiedNotAppliedAddContentsNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BrainTalkBt_ReturnToTheAjito_BeforePlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BrainTalkBt_GiveItemsFromFriendsWithAjito_BeforePlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BrainTalkBt_GiveItemsFromFriendsWithField_BeforePlayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUserItemInfo> m_mapUsableItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isForceNewGameFlowFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_PurchasedAddContentNameList;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBondsProgressEvent bondsProgressEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBondsLevelEvent bondsLevelEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSASEquipExtendEvent sasEquipExtendEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSASEquipEvent sasEquipEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSASEquipStatusEvent sasEquipStatusEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWorldmapSelectableChangeEvent wmSelectableChangeEvent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartBondsEpisodeEvent onStartBondsEpisodeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartBondsEpisodeEvent onEndBondsEpisodeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeNoticeUiState OnChangeNoticeUiStateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangeNoticeUiRemoveState OnChangeNoticeUiStateRemoveDelegate;
    
    UUserParamManager();
    UFUNCTION(BlueprintCallable)
    bool WorldmapSetLocationSelectable_WithPortal(int32 LocationNo, int32 AreaNo, int32 PortalNo, bool isSelectable, bool isForce, bool isAreaAll);
    
    UFUNCTION(BlueprintCallable)
    bool WorldmapSetLocationSelectable(int32 LocationNo, int32 AreaNo, bool isSelectable, bool isForce, bool isAreaAll);
    
    UFUNCTION(BlueprintCallable)
    bool WorldmapSetLocationNotSelectable(int32 LocationNo, bool isNotSelectable);
    
    UFUNCTION(BlueprintCallable)
    bool WorldmapSetLocationNewOpen(int32 LocationNo, int32 AreaNo, bool isNewOpen, bool isAreaAll);
    
    UFUNCTION(BlueprintCallable)
    bool WorldmapSetAllLocationNotSelectable(bool isNotSelectable);
    
    UFUNCTION(BlueprintCallable)
    bool WorldmapOpenLocation(int32 LocationNo, int32 AreaNo, bool isSelectable);
    
    UFUNCTION(BlueprintCallable)
    bool WorldmapIsLocationSelectable(int32 LocationNo, int32 AreaNo);
    
    UFUNCTION(BlueprintCallable)
    bool WorldmapIsLocationNotSelectable(int32 LocationNo);
    
    UFUNCTION(BlueprintCallable)
    bool WorldmapIsLocationNewOpen(int32 LocationNo, int32 AreaNo);
    
    UFUNCTION(BlueprintCallable)
    bool WorldmapIsAllLocationNotSelectable();
    
    UFUNCTION(BlueprintCallable)
    bool WorldmapGetOpenParam(TArray<FWorldmapOpenLCParam>& openedList);
    
    UFUNCTION(BlueprintCallable)
    bool WorldmapCloseLocation(int32 LocationNo, int32 AreaNo, bool isAreaAll);
    
    UFUNCTION(BlueprintCallable)
    void WorldmapCheckOpenFromProgressIDAndCharaID(EPlayerID playerId, int32 ProgressId, bool checkNearly);
    
    UFUNCTION(BlueprintCallable)
    void WorldmapCheckOpenFromProgressID(int32 ProgressId, bool checkNearly);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateTeamBondsLevel(EPlayerID playerId, int32 ProgressNo, bool isSingleLvUp);
    
    UFUNCTION(BlueprintCallable)
    bool UpdatePresentItemInfo(EPlayerID sendCharaID, EPlayerID recvCharaID, FName ItemId);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateBondsLevel(EPlayerID playerId, EPlayerID TargetID, bool isSingleLvUp);
    
    UFUNCTION(BlueprintCallable)
    void TempDisableSkill(bool bDisable);
    
    UFUNCTION(BlueprintCallable)
    void StartBondsEpisode(EPlayerID playerId, EPlayerID TargetID);
    
    UFUNCTION(BlueprintCallable)
    void SetZeroEpClear(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    bool SetWishList(const TArray<int32>& wishList);
    
    UFUNCTION(BlueprintCallable)
    bool SetTransferObjectByName(const FName& ItemId, int32 ObjectID, bool isOverwrite);
    
    UFUNCTION(BlueprintCallable)
    bool SetTransferObject(int32 ItemId, int32 ObjectID, bool isOverwrite);
    
    UFUNCTION(BlueprintCallable)
    void SetTitleProductFlag(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamBondsProgress(EPlayerID playerId, int32 Progress);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamBondsLevel(EPlayerID playerId, int32 teamBondsLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetSuspendPauseTimeLockFlag(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetStartSuspendPauseTime(const int32 Time);
    
    UFUNCTION(BlueprintCallable)
    void SetSkillPoint(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectSaveSlot(int32 selectSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectNewGame(bool selectSlot);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedScenario(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedMapUsableItem(FName ItemId);
    
    UFUNCTION(BlueprintCallable)
    void SetSeenAjitoPattern(const FName AjitoPatternName);
    
    UFUNCTION(BlueprintCallable)
    void SetSASEquipStatus(E_SASKindNative kind, ESASEquipStatus Status, bool bNotEquip);
    
    UFUNCTION(BlueprintCallable)
    void SetReceiveOrderQuestID(const int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetPurchasedAddContentNameList(TArray<FName> List);
    
    UFUNCTION(BlueprintCallable)
    void SetPrivacyPolicy(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcAccessoryExtend2(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcAccessoryExtend1(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void SetNotifiedNotAppliedAddContentsNameList(TArray<FName> nameList);
    
    UFUNCTION(BlueprintCallable)
    void SetMoney(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMemberSlotInfo(const int32 Index, const int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetLibraryTerminologyFlag(const int32 ID, const uint8 Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetLibraryEpisodeFlag(const int32 ID, const uint8 Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetLibraryEnemyFlag(const int32 ID, const uint8 Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetLearnedSkill(EPlayerID playerId, EPlayerSkill SkillID, bool bLearn);
    
    UFUNCTION(BlueprintCallable)
    void SetJewelTicketCount(int32 newCount);
    
    UFUNCTION(BlueprintCallable)
    void SetItemNum(const FName& ID, const int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetItemKind(const FName& ID, const int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetIsForceNewGameFlowFlag(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsExNewGameFlow(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsExNewGame_TakeOverCharacterLevel(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsExNewGame_TakeOverBrainMap(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetGameDifficulty(HCGameDifficulty diffuculty);
    
    UFUNCTION(BlueprintCallable)
    void SetGameClearState(EGameClearState State);
    
    UFUNCTION(BlueprintCallable)
    void SetGameClear(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetExtendEquipSAS(bool bExtend);
    
    UFUNCTION(BlueprintCallable)
    void SetEula(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetEquipSAS(E_SASButton Button, E_SASKindNative kind);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableNexusDrive(bool bEnable, EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCrashVision(bool bEnable, EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void SetClearLapNum(const int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetCeBank(bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainTalkBt_ReturnToTheAjito_BeforePlayTime(const int32 beforePlayTime);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainTalkBt_GiveItemsFromFriendsWithField_BeforePlayTime(const int32 beforePlayTime);
    
    UFUNCTION(BlueprintCallable)
    void SetBrainTalkBt_GiveItemsFromFriendsWithAjito_BeforePlayTime(const int32 beforePlayTime);
    
    UFUNCTION(BlueprintCallable)
    void SetBondsValue(EPlayerID playerId, EPlayerID TargetID, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBondsProgress(EPlayerID playerId, EPlayerID TargetID, int32 Progress);
    
    UFUNCTION(BlueprintCallable)
    void SetBondsMaxLevel(int32 maxLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetBondsLevel(EPlayerID playerId, EPlayerID TargetID, int32 Level, bool adjustExp);
    
    UFUNCTION(BlueprintCallable)
    void SetBondsFValue(EPlayerID playerId, EPlayerID TargetID, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBattlefieldRandomSeed(const int32 Seed);
    
    UFUNCTION(BlueprintCallable)
    void SetBattlefieldInfos(const TMap<FString, FBattlefieldInfo>& Infos);
    
    UFUNCTION(BlueprintCallable)
    void SetAppliedAddContentsNameList(TArray<FName> List);
    
    UFUNCTION(BlueprintCallable)
    void SetAllAddContentsNameList(TArray<FName> List);
    
    UFUNCTION(BlueprintCallable)
    void ResetTotalPlayTimeCount();
    
    UFUNCTION(BlueprintCallable)
    void ResetMapGimmickUseTimesAll();
    
    UFUNCTION(BlueprintCallable)
    void ResetMapGimmickUseTimes(EMapGimmickType Type);
    
    UFUNCTION(BlueprintCallable)
    void ResetLearnedSkill(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void ResetBattlefieldInfos();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveWishList(int32 Content);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemList(const FName _ID);
    
    UFUNCTION(BlueprintCallable)
    void RegisterUseMapGimmick(EMapGimmickType Type);
    
    UFUNCTION(BlueprintCallable)
    void ReCalcSkillPoint();
    
    UFUNCTION(BlueprintCallable)
    void OnSetEventProgressID(int32 ProgressNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidLibraryTerminologyFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidLibraryEpisodeFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidLibraryEnemyFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsSuspendPauseTimeLockFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSeenAjitoPattern(const FName AjitoPatternName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSASEquipAble(E_SASKindNative kind) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsReleaseNexusDrive();
    
    UFUNCTION(BlueprintCallable)
    bool IsReleaseCrashVision();
    
    UFUNCTION(BlueprintCallable)
    bool IsNpcAccesoryExtend2(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    bool IsNpcAccesoryExtend1(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLearnedSkill(EPlayerID playerId, EPlayerSkill SkillID) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHaveRepairItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForceNewGameFlowFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExtendEquipSAS() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsExNewGameFlow();
    
    UFUNCTION(BlueprintCallable)
    bool IsExNewGame_TakeOverCharacterLevel();
    
    UFUNCTION(BlueprintCallable)
    bool IsExNewGame_TakeOverBrainMap();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistInWishList(int32 Content);
    
    UFUNCTION(BlueprintCallable)
    bool IsEquipSAS(E_SASKindNative kind);
    
    UFUNCTION(BlueprintCallable)
    bool isEnableNexusDrive(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    bool isEnableCrashVision(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    bool IsBrainTalkOnceCheck_InSaveData_Find(const EBrainTalkCategory _Category, const FName _ID);
    
    UFUNCTION(BlueprintCallable)
    bool isBattleFieldCheckToWorldMapSystems();
    
    UFUNCTION(BlueprintCallable)
    void InitializeTotalPlayTime();
    
    UFUNCTION(BlueprintCallable)
    void InitializeParam(bool isNewGame);
    
    UFUNCTION(BlueprintCallable)
    void InitializeItemParam();
    
    UFUNCTION(BlueprintCallable)
    bool HaveJewelTicket();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetZeroEpClear();
    
    UFUNCTION(BlueprintCallable)
    UWorldmapOpenParam* GetWorldmapOpenParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWishListNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetWishList() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTransferObjectByName(const FName& ItemId, int32& ObjectID, bool isRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTransferObject(int32 ItemId, int32& ObjectID, bool isRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalPlayTime(const bool isRealData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTitleProductFlag();
    
    UFUNCTION(BlueprintCallable)
    UTipsCountParamManager* GetTipsCountParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamBondsProgress(EPlayerID playerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamBondsMaxLevel() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetTeamBondsLevel(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    int32 GetStartSuspendPauseTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkillPoint() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectSaveSlot();
    
    UFUNCTION(BlueprintCallable)
    bool GetSelectNewGame();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedScenario() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSelectedMapUsableItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESASEquipStatus GetSASEquipStatus(E_SASKindNative kind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReceiveOrderQuestID() const;
    
    UFUNCTION(BlueprintCallable)
    UQuestParamManager* GetQuestParamManager();
    
    UFUNCTION(BlueprintCallable)
    UPurposeMessageParamManager* GetPurposeMessageParamManager();
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetPurchasedAddContentNameList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPrivacyPolicy();
    
    UFUNCTION(BlueprintCallable)
    bool GetPresentItemInfoList(EPlayerID sendCharaID, EPlayerID recvCharaID, TArray<FPresentInfoData>& itemList);
    
    UFUNCTION(BlueprintCallable)
    UPresentInfoParam* GetPresentInfoParam();
    
    UFUNCTION(BlueprintCallable)
    UOptionParam* GetOptionParam();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNpcAccessoryExtendNum(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetNotifiedNotAppliedAddContentsNameList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMoneyDirty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMoney() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMemberSlotInfo GetMemberSlotInfo(const int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUserItemInfo GetMapUsableItemListPrevInfo(const int32 CurrentIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMapUsableItemListPrevIndex(const int32 CurrentIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMapUsableItemListNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUserItemInfo GetMapUsableItemListNextInfo(const int32 CurrentIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMapUsableItemListNextIndex(const int32 CurrentIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FUserItemInfo GetMapUsableItemListInfo(const int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<EMapGimmickType, int32> GetMapGimmickUseTimes() const;
    
    UFUNCTION(BlueprintCallable)
    ULoadTipsParamManager* GetLoadTipsParamManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetLibraryTerminologyFlag(const int32 ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetLibraryEpisodeFlag(const int32 ID) const;
    
    UFUNCTION(BlueprintCallable)
    ULibraryEnemyParam* GetLibraryEnemyParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetLibraryEnemyFlag(const int32 ID) const;
    
    UFUNCTION(BlueprintCallable)
    ULibraryCharacterParam* GetLibraryCharaParam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastTradeShopID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastShopID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastAcquisitionTime(const FName& ID) const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetJewelTicketCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemNum(const FName& ID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUserItemInfo> GetItemList();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsProgressBondsEpisode(EPlayerID& playerId, EPlayerID& TargetID);
    
    UFUNCTION(BlueprintCallable)
    bool GetHasPresentedItemInfoList(EPlayerID sendCharaID, EPlayerID recvCharaID, TArray<FPresentInfoData>& itemList, bool includeEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    HCGameDifficulty GetGameDifficulty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameClearState GetGameClearState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGameClear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetEula();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    E_SASKindNative GetEquipSAS(E_SASButton Button) const;
    
    UFUNCTION(BlueprintCallable)
    UDeepenTheBondsParamManager* GetDeepenTheBondsParamManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetClearLapNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCeBank();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBrainTalkBt_ReturnToTheAjito_BeforePlayTime();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBrainTalkBt_GiveItemsFromFriendsWithField_BeforePlayTime();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBrainTalkBt_GiveItemsFromFriendsWithAjito_BeforePlayTime();
    
    UFUNCTION(BlueprintCallable)
    UBrainMessageParamManager* GetBrainMessageParamManager();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBondsValue(EPlayerID playerId, EPlayerID TargetID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBondsProgress(EPlayerID playerId, EPlayerID TargetID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBondsMaxLevel(EPlayerID playerId, EPlayerID TargetID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetBondsLevel(EPlayerID playerId, EPlayerID TargetID);
    
    UFUNCTION(BlueprintCallable)
    float GetBondsFValue(EPlayerID playerId, EPlayerID TargetID);
    
    UFUNCTION(BlueprintCallable)
    UBattleLogBuffer* GetBattleLogBuffer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattlefieldRandomSeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FBattlefieldInfo> GetBattlefieldInfos() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetAppliedAddContentsNameList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetAllAddContentsNameList();
    
    UFUNCTION(BlueprintCallable)
    void EndBondsEpisode(bool IsCancel);
    
    UFUNCTION(BlueprintCallable)
    void DeleteLibraryTerminologyFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag);
    
    UFUNCTION(BlueprintCallable)
    void DeleteLibraryEpisodeFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag);
    
    UFUNCTION(BlueprintCallable)
    void DeleteLibraryEnemyFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag);
    
    UFUNCTION(BlueprintCallable)
    void DeleteItemKind(const FName& ID);
    
    UFUNCTION(BlueprintCallable)
    void DeleteItemAll();
    
    UFUNCTION(BlueprintCallable)
    void ClearWorldmapOpenParamAllFromSelectSenario();
    
    UFUNCTION(BlueprintCallable)
    void ClearMoneyDirty();
    
    UFUNCTION(BlueprintCallable)
    bool CheckTeamBondsLevelUp(EPlayerID playerId, int32 ProgressNo);
    
    UFUNCTION(BlueprintCallable)
    bool CheckStartTeamBondsEpisode(EPlayerID playerId, int32& episodeNo);
    
    UFUNCTION(BlueprintCallable)
    bool CheckHaveItemCapacityWithRetNum(const FName& ID, const int32 Num, ECanBeAddedItems& canBeAdded, int32& retNum);
    
    UFUNCTION(BlueprintCallable)
    bool CheckHaveItemCapacity(const FName& ID, const int32 Num);
    
    UFUNCTION(BlueprintCallable)
    bool CheckBondsLevelUp(EPlayerID playerId, EPlayerID TargetID);
    
    UFUNCTION(BlueprintCallable)
    void AppendAppliedAddContentsNameList(FName AddContentName);
    
    UFUNCTION(BlueprintCallable)
    bool AddWishList(int32 Content);
    
    UFUNCTION(BlueprintCallable)
    void AddTotalSuspendPauseTime(const int32 addTime);
    
    UFUNCTION(BlueprintCallable)
    void AddSkillPoint(int32 Point);
    
    UFUNCTION(BlueprintCallable)
    void AddNotifiedNotAppliedAddContentsNameList(FName addName);
    
    UFUNCTION(BlueprintCallable)
    bool AddMoney(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddLibraryTerminologyFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag);
    
    UFUNCTION(BlueprintCallable)
    void AddLibraryEpisodeFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag);
    
    UFUNCTION(BlueprintCallable)
    void AddLibraryEnemyFlag(const int32 ID, const TEnumAsByte<LIBRARY_FLAG> Flag);
    
    UFUNCTION(BlueprintCallable)
    void AddJewelTicketCount(int32 addCount);
    
    UFUNCTION(BlueprintCallable)
    bool AddItemNum(const FName& ID, const int32 Num, const bool isUpdateMapUsableItemList_NotUsed, const bool IsDispGetLog, const bool isLogLongDraw);
    
    UFUNCTION(BlueprintCallable)
    void AddClearLapNum();
    
    UFUNCTION(BlueprintCallable)
    void AddBrainTalkOnceCheck_InSaveData(const EBrainTalkCategory _Category, const FName _ID);
    
    UFUNCTION(BlueprintCallable)
    void AddBondsValue(EPlayerID playerId, EPlayerID TargetID, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void AddBondsFValue(EPlayerID playerId, EPlayerID TargetID, float Value);
    
    
    // Fix for true pure virtual functions not being implemented
};

