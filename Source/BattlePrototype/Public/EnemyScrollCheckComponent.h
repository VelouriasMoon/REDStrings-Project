#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "EnemyAsyncTaskComponentBase.h"
#include "EnemyScrollCheckComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UEnemyScrollCheckComponent : public UEnemyAsyncTaskComponentBase {
    GENERATED_BODY()
public:
    UEnemyScrollCheckComponent();
    UFUNCTION(BlueprintCallable)
    void SetIntervalTime(float newIntervalTime);
    
    UFUNCTION(BlueprintCallable)
    void SetFloorAngle(float newFloorAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetCheckPos(FVector StartPos, FVector EndPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHitScroll() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHitFloorOrCeiling() const;
    
    UFUNCTION(BlueprintCallable)
    void EndScrollCheck();
    
    UFUNCTION(BlueprintCallable)
    void BeginScrollCheck();
    
};

