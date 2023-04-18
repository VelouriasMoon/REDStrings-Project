#pragma once
#include "CoreMinimal.h"
#include "BrainTalkBt_PlayInfo.h"
#include "BrainTalkMasterData.h"
#include "BrainTalk_CategoryDatatable.h"
#include "EBrainTalkBtGroup.h"
#include "EBrainTalkCategory.h"
#include "EBrainTalkGimmickCondition.h"
#include "EBrainTalkPriority.h"
#include "EBrainTalkPriorityCheckResult.h"
#include "EBrainTalkSystemType.h"
#include "EItemRarity.h"
#include "EPlayerID.h"
#include "E_SASKindNative.h"
#include "HCSkillAttribute.h"
#include "ManagerInterface.h"
#include "MessageDataCell.h"
#include "PlayerInfo.h"
#include "RSActorSystemBase.h"
#include "BrainTalkManager.generated.h"

class UBrainTalkBattleManager;
class UDataTable;
class URSGameInstance;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ABrainTalkManager : public ARSActorSystemBase, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URSGameInstance* _gameInstance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBrainTalkBattleManager* m_pBrainTalkBattleManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalk_CategoryDatatable> m_BrainTalkMasterDataQueCategoryDatatableList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkMasterData> m_BrainTalkMasterDataQueList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_StrongestWeaponIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isUpdateEquipIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerInfo> m_OpenMenuWindowEquipIdList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isEnableBrainTalk_ReturnToTheAjito;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isEnableBrainTalk_QuestNpcNearbyCanBeOrdered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isEnableBrainTalk_QuestNpcNearbyCanBeOrdered_ManualAreaChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_BrainTalkBt_BattleSim_BattleStart_BattleStartFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_VisionSimulatorResultBTLockFlag;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_dataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBrainTalkPriority m_Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ReferenceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_massageWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isPauseBrainTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isFinishBrainTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isNoStopBrainTalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBrainTalkBt_PlayInfo> m_BrainTalkBt_PlayReqList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isStartTalkEventPauseBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isStartTalkEventKeepPlayingBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_DebbugBrainTalkAllInvalidFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_DebbugBrainTalkBTInvalidFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_DebugDispBrainTalkLogFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_DebugBTGiveItemsFromFriendsWithAjitoLogFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_DebugBTGiveItemsFromFriendsWithFieldForceEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_DebugBTGiveItemsFromFriendsWithFieldLogFlag;
    
    ABrainTalkManager();
    UFUNCTION(BlueprintCallable)
    void StopBrainTalkVoice();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopBrainTalk_BPFL_FromNative();
    
    UFUNCTION(BlueprintCallable)
    void StopBrainTalk();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartBrainTalk_FromNative2_2(FBrainTalkBt_PlayInfo Info, const bool isEventCallEnable, const bool NewIsGameOverCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartBrainTalk_FromNative2(FName BrainTalkID, EBrainTalkCategory Category);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartBrainTalk_FromNative(FBrainTalkMasterData BrainTalkData, FBrainTalk_CategoryDatatable categoryDatatable);
    
    UFUNCTION(BlueprintCallable)
    void StartBrainTalk();
    
    UFUNCTION(BlueprintCallable)
    void SetVisionSimulatorResultBTLockFlag(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetStrongestWeaponId(EPlayerID Player, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    void SetReferenceIndex(const int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenMenuWindowEquipWeaponIdList();
    
    UFUNCTION(BlueprintCallable)
    void SetNewRowBrainTalk(const float WaitTime);
    
    UFUNCTION(BlueprintCallable)
    void SetMassageWaitTime(const float sec);
    
    UFUNCTION(BlueprintCallable)
    void SetIsStartTalkEventPauseBT(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsStartTalkEventKeepPlayingBT(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsNoStopBrainTalk(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFinishBrainTalk(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEnableBrainTalk_ReturnToTheAjito(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEnableBrainTalk_QuestNpcNearbyCanBeOrdered_ManualAreaChange(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetIsEnableBrainTalk_QuestNpcNearbyCanBeOrdered(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugDispBrainTalkLogFlag(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugBTGiveItemsFromFriendsWithFieldLogFlag(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugBTGiveItemsFromFriendsWithFieldForceEnable(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugBTGiveItemsFromFriendsWithAjitoLogFlag(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDebbugBrainTalkBTInvalidFlag(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void SetDebbugBrainTalkAllInvalidFlag(const bool Flag);
    
    UFUNCTION(BlueprintCallable)
    void ResetVisionSimulatorMissionStart();
    
    UFUNCTION(BlueprintCallable)
    void ResetBrainTalkBt_PlayReqList();
    
    UFUNCTION(BlueprintCallable)
    void PreStartBrainTalk(FBrainTalk_CategoryDatatable categoryDatatable);
    
    UFUNCTION(BlueprintCallable)
    void PlaySystemBrainTalk(EBrainTalkSystemType Type, const int32 Index, EPlayerID player1);
    
    UFUNCTION(BlueprintCallable)
    void PauseBrainTalk(const bool IsPause);
    
    UFUNCTION(BlueprintCallable)
    void OpenBrainTalkUI(const int32 characterId, const int32 ExpressionID, const FString& messageID, const float DrawSecond);
    
    UFUNCTION(BlueprintCallable)
    void LoadBrainTalkDatatable(FBrainTalkMasterData BrainTalkData);
    
    UFUNCTION(BlueprintCallable)
    bool IsVisionSimulatorResultBTLockFlag();
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsTimingEnableCheck();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsSysInvalidProgressIDCheck(EBrainTalkBtGroup Group);
    
    UFUNCTION(BlueprintCallable)
    bool IsStartTalkEventPauseBT();
    
    UFUNCTION(BlueprintCallable)
    bool IsStartTalkEventKeepPlayingBT();
    
    UFUNCTION(BlueprintCallable)
    bool IsNoStopBrainTalk();
    
    UFUNCTION(BlueprintCallable)
    bool IsLowerPriority();
    
    UFUNCTION(BlueprintCallable)
    bool IsGameOverCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinishLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinishBrainTalk();
    
    UFUNCTION(BlueprintCallable)
    bool IsFindBrainTalkOnceCheck_LoadReset(const EBrainTalkCategory _Category, const FName _ID);
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsEnableCheck(const bool isPlaySuppressionCheck, const bool isPlayerHPCheck, const bool isCheckVisionSimulatorResultBTLockFlag);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsEnableBrainTalk_ReturnToTheAjito();
    
    UFUNCTION(BlueprintCallable)
    bool IsEnableBrainTalk_QuestNpcNearbyCanBeOrdered();
    
    UFUNCTION(BlueprintCallable)
    bool IsDoEventCheck();
    
    UFUNCTION(BlueprintCallable)
    bool IsCanSASUse(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeStrongestWeaponIdList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReferenceIndex();
    
    UFUNCTION(BlueprintCallable)
    EBrainTalkPriorityCheckResult GetPriorityCheck(EBrainTalkPriority playReqPriority);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBrainTalkPriority GetPriority();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMassageWaitTime();
    
    UFUNCTION(BlueprintCallable)
    bool GetDebugDispBrainTalkLogFlag();
    
    UFUNCTION(BlueprintCallable)
    bool GetDebugBTGiveItemsFromFriendsWithFieldLogFlag();
    
    UFUNCTION(BlueprintCallable)
    bool GetDebugBTGiveItemsFromFriendsWithFieldForceEnable();
    
    UFUNCTION(BlueprintCallable)
    bool GetDebugBTGiveItemsFromFriendsWithAjitoLogFlag();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDataTable* GetDataTable();
    
    UFUNCTION(BlueprintCallable)
    bool GetCategoryDataTableRow(EBrainTalkCategory Category, FName BrainTalkID, FBrainTalkMasterData& RowData);
    
    UFUNCTION(BlueprintCallable)
    UDataTable* GetCategoryDataTable(EBrainTalkCategory Category);
    
    UFUNCTION(BlueprintCallable)
    bool GetBrainTalkParam(FName BrainTalkID, EBrainTalkCategory Category, float& OccurRate, bool& IsOnce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMessageDataCell GetBrainTalkMessage(const FString& messageID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FBrainTalkMasterData> GetBrainTalkMasterDataQueList();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBrainTalkMapGimmickWaitTime(EBrainTalkGimmickCondition Type, const FString& conditionLabel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetBrainTalkBt_ReturnToTheAjito_EnemyNumMax();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetBrainTalkBt_GiveItemsFromFriendsWithField_ScoreNumMax();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetBrainTalkBt_GiveItemsFromFriendsWithAjito_EnemyNumMax();
    
    UFUNCTION(BlueprintCallable)
    void DoKillEnemy(const bool isBoss);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoBrainTalk_QuestNpcNearbyCanBeOrdered();
    
    UFUNCTION(BlueprintCallable)
    void CloseBrainTalkUI();
    
    UFUNCTION(BlueprintCallable)
    void ClearBrainTalkMasterDataQueList();
    
    UFUNCTION(BlueprintCallable)
    bool CheckEquipChangeBrainTalk();
    
    UFUNCTION(BlueprintCallable)
    bool CheckBrainTalkBt_BattleSim_BattleStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallbackFinishBrainTalk();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkTuto_tutorial_m_J();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkTuto_tutorial_m_I();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkTuto_tutorial_m_H();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkTuto_tutorial_m_G();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkTuto_tutorial_m_F();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkTuto_tutorial_f_J();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkTuto_tutorial_f_I();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkTuto_tutorial_f_H();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkTuto_tutorial_f_G();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkTuto_tutorial_f_F();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkMapGimmick(EBrainTalkGimmickCondition Type, const FString& conditionLabel);
    
    UFUNCTION(BlueprintCallable)
    void BrainTalkLoadWork();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_WaterCharge_WaterAttack();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_OilCharge_OilAttack();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_np1100_06();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_np1100_05();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_np1100_04();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_np1100_03();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_np1100_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_np1100_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_FlameCharge_OilMember();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_FlameCharge_FlameAttack();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8300_06();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8300_05();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8300_04();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8300_03();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8300_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8300_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8220_09();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8220_08();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8220_06();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8220_05();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8220_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8220_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8200_08();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8200_07();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8200_05();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8200_04();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8200_03();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8200_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8200_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8000_06();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8000_05();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8000_04();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8000_03();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8000_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em8000_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1430_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1430_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1420_04();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1420_03();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1420_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1420_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1410_05();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1410_04();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1410_03();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1410_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1410_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1400_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1300_03();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1300_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1300_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1210_05();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1210_04();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1210_03();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1210_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1210_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1200_03();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1200_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1200_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1130_05();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1130_04();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1130_03();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1130_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1130_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1120_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1100_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1020_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em1010_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0920_06();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0920_05();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0920_04();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0920_03();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0920_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0920_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0830_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0820_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0800_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0700_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0630_06();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0630_05();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0630_04();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0630_03();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0630_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0630_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0620_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0510_03();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0510_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0510_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0500_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0330_03();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0330_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0330_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0320_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0320_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0310_04();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0310_03();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0310_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0310_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0300_04();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0300_03();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0300_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0300_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0210_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_em0120_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_ElectricCharge_WaterMember();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_ElectricCharge_ElectricAttack();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_ConfusionCharge_ConfusionAttack();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_ch0200_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_ch0200_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_ch0100_02();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkEm_ch0100_01();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_WaterEnAtkElectric();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_WaitingVoice(const EPlayerID WaitCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_UnopenedTreasure();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_TouchBFWall();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_StealthLosePL();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_SasNoUse(const EPlayerID TargetCharacter, E_SASKindNative SasEffect, const int32 lastSasProgressTime, const int32 lastSasBTProgressTime);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_SasHoloPursuit(const EPlayerID HoloCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_SasHoloPossible(const EPlayerID HoloCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_SasContinuity(E_SASKindNative SasEffect, const int32 Num);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_SasCombo(const int32 comboNum);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_SallyTimes(const EPlayerID TargetCharacter, const int32 SallyMinutes, const int32 BeforeBTMinutes);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_Revival(const EPlayerID RevivalFrom, const EPlayerID RevivalTo);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_ReturnToTheAjito();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_RecoveryItemZero();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_RecoveryHpToPL(const EPlayerID RecoveryFrom);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_RecoveryAbToPL(const EPlayerID RecoveryFrom);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_Recovery(const EPlayerID RecoveryTo);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_QuestNpcNearbyCanBeOrdered();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_PTChangeAttachment(const EPlayerID ChangeAttachmentCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_PsychicCombo(const int32 comboNum);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_PLDead();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_PLChangeAttachment();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_OsoroiAttachment(const EPlayerID playerId, const EPlayerID TalkCharaID, const FString& AttachmentItemID);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_OilEnAtkFire();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_NoSallyTimes(const EPlayerID TargetCharacter, const int32 NoSallyMinutes, const int32 BeforeBTMinutes);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_NearCC();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_LvUp_PL();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_LvUp(const EPlayerID LvUpCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_KizunaLvUp(const EPlayerID KizunaLvUpCharacter, const bool isRetry);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_KillQuestTgtEn();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_KillEnStrategy();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_KillEnRest(const EPlayerID KillCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_KillEnemyBC();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_KillByEn();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_KillAllEnStrEn(const EPlayerID KillCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_KillAllEnShortTime(const EPlayerID KillCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_KillAllEnManyWeakEn(const EPlayerID KillCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_KillAllEnManyEn(const EPlayerID KillCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_KillAllEnForPT(const EPlayerID KillCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_KillAllEnForPL();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_JumpOff();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_Hp30p();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_HiKizunaEffect(const EPlayerID hologramPlayerID);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_GiveItemsFromFriendsWithField();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_GiveItemsFromFriendsWithAjito();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_GetQuestTgtItem();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_GetItem(const EItemRarity rarity);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_GatherPoint();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_FirstStrike();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_EquipStrongestWeapon(const EPlayerID EquiCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_EnemyDrop(const EItemRarity rarity);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_EnemyDown(const EPlayerID DownCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_EnBerserkSign();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_EnBerserk();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_EnableSAS_DriveActivationFriend(const EPlayerID TalkCharaID);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_DriveGaugeMax();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_DriveActiveFriend(const EPlayerID TalkCharaID);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_DriveActive();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_DispCrashTrg();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_DiscStrEn();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_DiscStealth();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_DiscSasValidEn(E_SASKindNative SasEffect);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_DiscQuestEnemy();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_DiscEn();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_DestroyShell();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_DeadInarow(const int32 DeadNum);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_DamageTakeOver(const EPlayerID TakeOverCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_ClearQuest();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_BrainCrashByEn();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_BirthKizunaEp(const EPlayerID EpCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_BFActivate();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_BattleSim_BattleStart_RevivalBoss(const FString& EnemyId);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_BattleSim_BattleStart_ENPC(const FString& EnemyId);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_BattleSim_BattleStart(const int32 Difficulty);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_BattleEscape();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_BadStateForEn(const EPlayerID BadStateMember, const HCSkillAttribute BadState);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_BadStateByEn(const EPlayerID BadStateMember, const HCSkillAttribute BadState);
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_AttackEnWeak();
    
    UFUNCTION(BlueprintCallable)
    bool BrainTalkBt_AttackEnShell();
    
    UFUNCTION(BlueprintCallable)
    void BPFL_PauseBrainTalkAtStartTalkEventBefore();
    
    UFUNCTION(BlueprintCallable)
    void BPFL_PauseBrainTalkAtEndTalkEventAfter();
    
    UFUNCTION(BlueprintCallable)
    void AddBrainTalkMasterDataQueList(FBrainTalkMasterData Data, FBrainTalk_CategoryDatatable categoryDatatable);
    
    
    // Fix for true pure virtual functions not being implemented
};

