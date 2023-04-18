#pragma once
#include "CoreMinimal.h"
#include "Math/RandomStream.h"
//-FallbackName=Vector
#include "BattleFieldBeginDelegateDelegate.h"
#include "BattleFieldEndDelegateDelegate.h"
#include "BattleFieldRushEndDelegateDelegate.h"
#include "BattlefieldInfo.h"
#include "BattlefieldTutorialInfo.h"
#include "EBattlefieldEventType.h"
#include "ManagerInterface.h"
#include "RSActorSystemBase.h"
#include "Templates/SubclassOf.h"
#include "BattlefieldManager.generated.h"

class AActor;
class AMakeEventActor;
class ARSCharacterBase;
class USplineComponent;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ABattlefieldManager : public ARSActorSystemBase, public IManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleFieldBeginDelegate DispatchBattleFieldBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleFieldEndDelegate DispatchBattleFieldEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleFieldRushEndDelegate DispatchBattleFieldRushEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FBattlefieldInfo> CurrentBFInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FenceLotterySeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomStream RandomStream;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActiveEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMakeEventActor> MakeEventActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMakeEventActor* MakeEventActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AllFenceActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> AllTriggerActors;
    
public:
    ABattlefieldManager();
    UFUNCTION(BlueprintCallable)
    void UpdateAtStartArea();
    
    UFUNCTION(BlueprintCallable)
    bool StartWipeoutBattlefield(int32 BFGroupID);
    
    UFUNCTION(BlueprintCallable)
    bool StartEventInBattleField(TSubclassOf<AMakeEventActor> NewMakeEventActorClass);
    
    UFUNCTION(BlueprintCallable)
    bool StartEventBattlefield(int32 BFGroupID, int32 SubGroupID);
    
    UFUNCTION(BlueprintCallable)
    bool StartBattlefield(EBattlefieldEventType EventType, int32 BFGroupID, int32 SubGroupID, TArray<FBattlefieldTutorialInfo> AdditionalTutorialInfo, TSubclassOf<AMakeEventActor> NewMakeEventActorClass, int32 TutorialGroupID, int32 TutorialSubGroupID, float FenceBattleRate, const FString& SeedString, bool IsOnceBattle);
    
    UFUNCTION(BlueprintCallable)
    bool SetFenceEnableForce(int32 fenceID, bool Enable);
    
    UFUNCTION(BlueprintCallable)
    bool SetFenceEnable(int32 fenceID, bool Enable);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnableEnemyOutField(bool Enable, int32 BFGroupID);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCurrentLocationAndArea(int32 LocationId, int32 areaId);
    
    UFUNCTION(BlueprintCallable)
    bool SetCurrentBattlefieldInfos(TMap<FString, FBattlefieldInfo> Infos);
    
    UFUNCTION(BlueprintCallable)
    bool SetBattlefieldInfo(int32 BFGroupID, FBattlefieldInfo BFInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ResetFenceRandomSeed();
    
    UFUNCTION(BlueprintCallable)
    bool RepopBattlefieldInfos(int32 LocationId, int32 areaId, const FString& SeedString);
    
    UFUNCTION(BlueprintCallable)
    bool RepopBattlefieldEnemy(int32 BFGroupID);
    
    UFUNCTION(BlueprintCallable)
    bool OverwriteTmpBfInfo(int32 GroupID, const FString& TriggerName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnSave_SaveData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnLoad_SaveData();
    
    UFUNCTION(BlueprintCallable)
    bool IsStartBattlefield(int32 BFGroupID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerInFence(int32 GroupID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSplineLoopDetail(FVector Pos, USplineComponent* Spline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSplineLoop(FVector Pos, USplineComponent* Spline);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInFence(FVector Pos, int32 GroupID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFenceEnabled(int32 GroupID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsExistBattlefieldEnemiesStrictly(int32 BFGroupID, int32 SubGroupID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsExistBattlefieldEnemies(int32 BFGroupID, int32 SubGroupID, int32& FirstSubGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterInCurrentBattleField(ARSCharacterBase* InCharacter) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterInBattleField(const FBattlefieldInfo& InInfo, ARSCharacterBase* InCharacter) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBattlefieldWillAppear(int32 GroupID, float FenceBattleRate, const FString& SeedString, const FString& TargetName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsAnyFenceEnabled();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InitializeAtStartBattlefield(FBattlefieldInfo currentBFInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeAtStartArea();
    
    UFUNCTION(BlueprintCallable)
    bool HaveDestroyedBattlefield(int32 BFGroupID, const FString& TargetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBattlefieldInfo GetCurrentBattlefieldInfo(bool& Exist) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBfFenceStatus(int32 GroupID, bool& Exist, bool& IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetBfFenceAll(int32 GroupID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetBfFence(int32 GroupID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBattlefieldInfo(int32 BFGroupID, FBattlefieldInfo& BFInfo, bool& IsExist);
    
    UFUNCTION(BlueprintCallable)
    void FinalizeAtStartArea();
    
    UFUNCTION(BlueprintCallable)
    bool EndEventBattlefield(int32 BFGroupID);
    
    UFUNCTION(BlueprintCallable)
    bool EndBattlefieldForce(int32 BFGroupID);
    
    UFUNCTION(BlueprintCallable)
    bool EndBattlefield(int32 BFGroupID);
    
    UFUNCTION(BlueprintCallable)
    bool EndAllBattlefieldForce();
    
    UFUNCTION(BlueprintCallable)
    bool BroadcastBattlefieldRushEnd(int32 GroupID, int32 SubGroupID);
    
    
    // Fix for true pure virtual functions not being implemented
};

