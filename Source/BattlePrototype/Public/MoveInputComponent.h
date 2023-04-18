#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "Components/ActorComponent.h"
#include "MoveInputComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UMoveInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UMoveInputComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateMoveInputVector(float axisValueX, float axisValueY);
    
    UFUNCTION(BlueprintCallable)
    void SetFixCamera(bool bFix);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputOverLimit(float limitRate) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFixCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMoveInputVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveInputLengthTriggerLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMoveInputDir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLatestEnableInputWorldVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLatestEnableInputVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLatestEnableInputDir() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearInputVector();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalcWorldVector(const FVector& Dir) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector CalcInputWorldVector() const;
    
};

