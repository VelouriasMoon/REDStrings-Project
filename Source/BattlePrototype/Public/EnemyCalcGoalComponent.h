#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "EnemyAsyncTaskComponentBase.h"
#include "EnemyCalcGoalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UEnemyCalcGoalComponent : public UEnemyAsyncTaskComponentBase {
    GENERATED_BODY()
public:
    UEnemyCalcGoalComponent();
    UFUNCTION(BlueprintCallable)
    void SetIntervalTime(float newIntervalTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCalcParam(const FVector& Start, const FVector& End, float Radius);
    
    UFUNCTION(BlueprintCallable)
    void ReSetIntervalTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCalcLocation() const;
    
    UFUNCTION(BlueprintCallable)
    void EndAsyncTask();
    
    UFUNCTION(BlueprintCallable)
    void BeginAsyncTask();
    
};

