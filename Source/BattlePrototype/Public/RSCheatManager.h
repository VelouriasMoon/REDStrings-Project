#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "RSCheatManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API URSCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    URSCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void RSCWarp(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RSCToggleFreeCamera();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RSCSetCombo(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RSCSetBattlePlayerAIMode(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RSCSetBarrierInvincible(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RSCSetBarrier(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RSCSetAILevel(const FString& Name);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RSCHudInvisibleAll(bool bInvisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RSCDumpTopLevelWidget();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RSCDumpParticleInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RSCDumpLevelActorStat(bool bWarningInvalidActor);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RSCAutoTest(const FString& Args);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTargetCursorDisp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSASParticleDisp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPerfMeterWithStat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPerfMeterValuePercentage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPerfMeterDisp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsHudDisp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetWidgetLayoutDispFlag();
    
};

