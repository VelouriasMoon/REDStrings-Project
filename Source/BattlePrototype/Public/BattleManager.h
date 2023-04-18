#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorBattleEndLogData.h"
#include "EReasonBattleEnd.h"
#include "HCHitResult.h"
#include "ManagerInterface.h"
#include "PoolHitEffectData.h"
#include "BattleManager.generated.h"

class ARSCharacterBase;
class UBattleSettingComponent;
class UBattleSituationComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ABattleManager : public AActor, public IManagerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ARSCharacterBase*> _battleActorList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> _ForceBattleList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BATTLEFIELD_SPEEDRUN_TIME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BATTLEFIELD_HORDE_ENEMY_NUM;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActorBattleEndLogData> _BattleLogDataList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _IsSimulatorMissionBattle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OneFrameHitEffectMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitEffectPoolNum_Other;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitEffectPoolNum_Npc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitEffectPoolNum_Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitEffectPoolNum_PlayerDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitEffectPoolNum_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HitEffectPoolNum_Special;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoolHitEffectData> _HitEffectPool_Other;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoolHitEffectData> _HitEffectPool_Npc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoolHitEffectData> _HitEffectPool_Enemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoolHitEffectData> _HitEffectPool_PlayerDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoolHitEffectData> _HitEffectPool_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoolHitEffectData> _HitEffectPool_Special;
    
public:
    ABattleManager();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartTutorialOperation(FName helpTutoID, float delaySec);
    
    UFUNCTION(BlueprintCallable)
    void SetForceBattle(bool bForce, FName ClaimantName);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetBattleMode(bool bBattle);
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveBattleActor(ARSCharacterBase* Actor, EReasonBattleEnd reason);
    
    UFUNCTION(BlueprintCallable)
    void PoolHitEffectData(AActor* HitActor, const FHCHitResult& HitResult, bool bNoLimit);
    
    UFUNCTION(BlueprintCallable)
    bool PlayBrainTalkStealthLost();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsForceBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UBattleSituationComponent* GetSituation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    UBattleSettingComponent* GetBattleSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARSCharacterBase*> GetBattleActorList() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceEndRecordBattleLog();
    
    UFUNCTION(BlueprintCallable)
    void EndRecordBattleLog(bool bBattleField);
    
    UFUNCTION(BlueprintCallable)
    void ClearBattleActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBattleLog_StealthLost() const;
    
    UFUNCTION(BlueprintCallable)
    void BeginRecordBattleLog(bool bBattleField);
    
    UFUNCTION(BlueprintCallable)
    void AddBattleActor(ARSCharacterBase* Actor);
    
    
    // Fix for true pure virtual functions not being implemented
};

