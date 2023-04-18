#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPlayerID.h"
#include "ESASHologramAttackTiming.h"
#include "SASHologramAttackCheckData.h"
#include "SASHologramAttackProbabilityData.h"
#include "PlayerSASHologramAttackCheckComponent.generated.h"

class ARSCharacterBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPlayerSASHologramAttackCheckComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ENABLE_CALLTIME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ATTACK_INTERVAL_TIME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CANCEL_INTERVAL_TIME;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float REQUEST_DISTANCE_MAX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSASHologramAttackCheckData> CallDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSASHologramAttackProbabilityData> ProbabilityDataTable;
    
public:
    UPlayerSASHologramAttackCheckComponent();
    UFUNCTION(BlueprintCallable)
    void SetTimerPause(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void SetManualMode(bool bManual);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableCheck(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void NotifyAttackEnd();
    
    UFUNCTION(BlueprintCallable)
    void NotifyAttackBegin();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadDataTable();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsManualMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistCall() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEnableSASHologram(EPlayerID playerId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoneCallPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackState() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetHologramRushCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPlayerID GetCallPlayer() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndCallUI(bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable)
    void DebugSetIgnoreInterval(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetFixPlayerID(EPlayerID playerId);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetAlways(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void DebugPrintLog(bool bSet);
    
    UFUNCTION(BlueprintCallable)
    void CheckHologramAttack(ESASHologramAttackTiming Timing, ARSCharacterBase* RequestCharacter);
    
    UFUNCTION(BlueprintCallable)
    void CancelCall(bool bInterval);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginCallUI(EPlayerID playerId);
    
};

