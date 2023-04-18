#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "EnemyAsyncTaskComponentBase.h"
#include "EnemyPathAreaCheckComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UEnemyPathAreaCheckComponent : public UEnemyAsyncTaskComponentBase {
    GENERATED_BODY()
public:
    UEnemyPathAreaCheckComponent();
    UFUNCTION(BlueprintCallable)
    void SetIntervalTime(float newIntervalTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckPos(FVector StartPos, FVector EndPos, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAreaOut() const;
    
    UFUNCTION(BlueprintCallable)
    void EndAreaCheck();
    
    UFUNCTION(BlueprintCallable)
    void BeginAreaCheck();
    
};

