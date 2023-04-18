#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "EnemyAsyncTaskComponentBase.h"
#include "EnemyLookCheckComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UEnemyLookCheckComponent : public UEnemyAsyncTaskComponentBase {
    GENERATED_BODY()
public:
    UEnemyLookCheckComponent();
    UFUNCTION(BlueprintCallable)
    void SetRayPos2(const FVector& MainStart, const FVector& MainEnd, const FVector& TargetStart, const FVector& TargetEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetRayPos(FVector Start, FVector End);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLookTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLookMain() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFailedLook();
    
    UFUNCTION(BlueprintCallable)
    void EndLookCheck();
    
    UFUNCTION(BlueprintCallable)
    void BeginLookCheck();
    
};

