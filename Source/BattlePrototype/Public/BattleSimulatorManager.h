#pragma once
#include "CoreMinimal.h"
#include "Misc/DateTime.h"
#include "GameFramework/Actor.h"
#include "BattleSimulatorJewelPoolResult.h"
#include "BattleSimulatorMissionDetailData.h"
#include "BattleSimulatorMissionReleaseCondition.h"
#include "BattleSimulatorRareSpawnCondisionData.h"
#include "BattleSimulatorReleaseDataList.h"
#include "BattleSimulatorResult.h"
#include "EBattleSimulatorEnemyDamageAddType.h"
#include "EBattleSimulatorPublicationCategory.h"
#include "HCHitResult.h"
#include "ManagerInterface.h"
#include "RSSaveGameInterface.h"
#include "BattleSimulatorManager.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ABattleSimulatorManager : public AActor, public IManagerInterface, public IRSSaveGameInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnuseEndMissionCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCalledFinishMoveStart;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PauseTimerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SlowTimerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime MissionCompleteDateTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MissionScoreDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleSimulatorResult StoreMissionScoreResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleSimulatorJewelPoolResult StoreMissionJewelPoolResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* RareSpawnCondisionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BattleSimulatorDetailDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BattleSimulatorReleaseConditonDataTable;
    
    ABattleSimulatorManager();
    UFUNCTION(BlueprintCallable)
    void UpdateCheckActorEnemyHpRate();
    
    UFUNCTION(BlueprintCallable)
    void StoreMissionCompleteDateTime();
    
    UFUNCTION(BlueprintCallable)
    void StopPrintResultPoint();
    
    UFUNCTION(BlueprintCallable)
    void SetSlowTimer(bool bSlow, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void SetRetryDialogSelectNo(int32 selectNo);
    
    UFUNCTION(BlueprintCallable)
    void SetReleaseConditionData(FName DataName);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseTimer(bool bPause, FName ClaimantName);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionStartBefore(bool StartBefore);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionReleased(FName DataName, bool IsReleased, bool IsYuito);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionDetailData(FName DataName);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionData(FName DataName);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionCleared(FName DataName, bool IsCleared, bool IsYuito);
    
    UFUNCTION(BlueprintCallable)
    void SetIsNew(bool IsNew, FName DataName, bool IsYuito);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreFenceFinishMission(bool IgnoreFenceFinishMission);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugOutputMissionResult(bool bOutput);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugOutputEnemyDamageLog(bool bOutput);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugOutputEnemyBrainCrashDamageLog(bool bOutput);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugEnableTimerSlow(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckActorEnemyHpRate(bool bCheck);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleTIme(float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSimulatorPlayerInvalidDamage(bool InvalidDamage);
    
    UFUNCTION(BlueprintCallable)
    void Set_TagAndHpRateEnemyHpRate(FName EnemyTag, float HpRate);
    
    UFUNCTION(BlueprintCallable)
    void ResetBattleTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPauseTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnMissionSubMakeEvent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnMissionEnemyDead();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishMissionBP();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishMission();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCancelMission();
    
    UFUNCTION(BlueprintCallable)
    void OnBeforeSimulatorResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTimerPause() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsOpenBattleSimulator();
    
    UFUNCTION(BlueprintCallable)
    bool IsMissionStartBefore();
    
    UFUNCTION(BlueprintCallable)
    bool IsMissionReleased(FName DataName, bool IsYuito);
    
    UFUNCTION(BlueprintCallable)
    bool IsMissionCleared(FName DataName, bool IsYuito);
    
    UFUNCTION(BlueprintCallable)
    bool IsMissionActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentPlayerYuito();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentMissionTypeKillJewelPool();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBattleSimulatorResult GetSaveResult(FName DataName, bool IsYuito);
    
    UFUNCTION(BlueprintCallable)
    TMap<EBattleSimulatorPublicationCategory, FBattleSimulatorReleaseDataList> GetReleaseConditionList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBattleSimulatorMissionReleaseCondition GetReleaseConditionData(FName DataName);
    
    UFUNCTION(BlueprintCallable)
    FBattleSimulatorRareSpawnCondisionData GetRareSpawnCondisionData(FName DataName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRareEnmySubjugationNum(bool IsYuito);
    
    UFUNCTION(BlueprintCallable)
    int32 GetRareEnemyAppearanceNum(bool IsYuito);
    
    UFUNCTION(BlueprintCallable)
    FName GetPrevMissionName();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerDamageSum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerBadStatusNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetPauseTimerList();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMissionID();
    
    UFUNCTION(BlueprintCallable)
    FBattleSimulatorMissionDetailData GetMissionDetailData(FName DataName);
    
    UFUNCTION(BlueprintCallable)
    FDateTime GetMissionCompleteDateTime();
    
    UFUNCTION(BlueprintCallable)
    int32 GetKillUniqueObjectNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetKillDriveNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetKillCombinationVisionNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetJewelPoolTotalDefeatedCount(FName DataName, bool IsYuito);
    
    UFUNCTION(BlueprintCallable)
    int32 GetItemNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsNew(FName DataName, bool IsYuito);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHitUniqueObjectNum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnemyDamageSum();
    
    UFUNCTION(BlueprintCallable)
    int32 GetEnemyBadStatusNum();
    
    UFUNCTION(BlueprintCallable)
    FName GetCurrentMissionName();
    
    UFUNCTION(BlueprintCallable)
    int32 GetBrainCrashNum();
    
    UFUNCTION(BlueprintCallable)
    float GetBattleTime();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetActorAndHpRateEnemyHpRate(float& HpRate);
    
    UFUNCTION(BlueprintCallable)
    void EndMission();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugPrintScorePoint();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugPrintMissionResult();
    
    UFUNCTION(BlueprintCallable)
    void ClearScore();
    
    UFUNCTION(BlueprintCallable)
    void ClearRareEnemySubjugationNum(bool IsYuito);
    
    UFUNCTION(BlueprintCallable)
    void ClearRareEnemyAppearanceNum(bool IsYuito);
    
    UFUNCTION(BlueprintCallable)
    void CancelMission();
    
    UFUNCTION(BlueprintCallable)
    FBattleSimulatorResult CalcMissionResult();
    
    UFUNCTION(BlueprintCallable)
    FBattleSimulatorJewelPoolResult CalcMissionJewelPoolResult();
    
    UFUNCTION(BlueprintCallable)
    void BeginMissionCheck();
    
    UFUNCTION(BlueprintCallable)
    void BeginMission();
    
    UFUNCTION(BlueprintCallable)
    void AddScore_PlayerDamageDirect(int32 Damage);
    
    UFUNCTION(BlueprintCallable)
    void AddScore_PlayerDamage(int32 Damage, const FHCHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    void AddScore_Item(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    int32 AddScore_EnemyDamageDirect(int32 Damage);
    
    UFUNCTION(BlueprintCallable)
    int32 AddScore_EnemyDamage(int32 Damage, const FHCHitResult& HitResult, EBattleSimulatorEnemyDamageAddType AddType, float HpRate, bool bBoss);
    
    UFUNCTION(BlueprintCallable)
    void AddScore_BrainCrash(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void AddRareEnemySubjugatopmNum(int32 Num, bool IsYuito);
    
    UFUNCTION(BlueprintCallable)
    void AddRareEnemyAppearanceNum(int32 Num, bool IsYuito);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddEndMissionEventCommand();
    
    UFUNCTION(BlueprintCallable)
    void Add_PlayerBadStatus(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void Add_KillUniqueObject(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void Add_KillDrive(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void Add_KillCombinationVision(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void Add_HitUniqueObject(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void Add_EnemyBadStatus(int32 Num);
    
    
    // Fix for true pure virtual functions not being implemented
};

