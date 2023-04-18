#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HCHitResult.h"
#include "ConditionUtility.generated.h"

class AActor;

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UConditionUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConditionUtility();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActiveStateCondition(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void FinishStateConditionAll(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void AccumulateCondition(AActor* Actor, const FHCHitResult& HitResult, bool IsGuard);
    
};

