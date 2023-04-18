#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameTimer.h"
#include "GameTimerFunctionLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UGameTimerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameTimerFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void UpdateTimerByWorld(UPARAM(Ref) FGameTimer& GameTimer, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateTimerByActor(UPARAM(Ref) FGameTimer& GameTimer, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateTimer(UPARAM(Ref) FGameTimer& GameTimer, float Delta);
    
    UFUNCTION(BlueprintCallable)
    static void SetTimer(UPARAM(Ref) FGameTimer& GameTimer, float Time);
    
    UFUNCTION(BlueprintCallable)
    static void SetPause(UPARAM(Ref) FGameTimer& GameTimer, bool bPause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPause(const FGameTimer& GameTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsOver(const FGameTimer& GameTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsEnable(const FGameTimer& GameTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRemainingTime(const FGameTimer& GameTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRate(const FGameTimer& GameTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetEndTime(const FGameTimer& GameTimer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetElapsedTime(const FGameTimer& GameTimer);
    
    UFUNCTION(BlueprintCallable)
    static void EndTimer(UPARAM(Ref) FGameTimer& GameTimer);
    
    UFUNCTION(BlueprintCallable)
    static float AddElapsedTime(UPARAM(Ref) FGameTimer& GameTimer, float addTime);
    
};

