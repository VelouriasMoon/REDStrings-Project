#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
//-FallbackName=Vector
#include "BattleCharacterHudInterface.generated.h"

UINTERFACE(Blueprintable)
class BATTLEPROTOTYPE_API UBattleCharacterHudInterface : public UInterface {
    GENERATED_BODY()
};

class BATTLEPROTOTYPE_API IBattleCharacterHudInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetEmphasisCrashGauge(bool bEmphasisCrashGauge);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsSpawnWait(bool& bSpawnWait) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsInvisibleMiniMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsInvisibleHPGauge(bool& bInvisible) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void IsHpGaugeAlwaysMax(bool& bAlwaysMax) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsEmphasisCrashGauge() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GetWeakNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetTargetCursorPoint(FVector& Point) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetHpGaugePoint(FVector& Point) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetCrashChanceCursorPoint(FVector& Point) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BrainCrashUnlock();
    
};

