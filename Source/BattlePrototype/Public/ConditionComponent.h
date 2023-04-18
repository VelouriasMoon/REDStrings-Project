#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ConditionComponentDelegateDelegate.h"
#include "ConditionExclusionKind.h"
#include "ConditionKind.h"
#include "ConditionComponent.generated.h"

class UConditionComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UConditionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _accumulationLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _accumulationAddedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _cureAccumulation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _conditionAutoEndSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _intervalSec;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditionComponentDelegate _dispatchInterval;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditionComponentDelegate _dispatchBeginCondition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditionComponentDelegate _dispatchEndCondition;
    
public:
    UConditionComponent();
    UFUNCTION(BlueprintCallable)
    void SetFreeze(bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInterval();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndCondition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginCondition();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsStateCondition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveCondition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ConditionKind GetConditionKind() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishCondition();
    
    UFUNCTION(BlueprintCallable)
    void ClearAccumulation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    ConditionExclusionKind CheckExclusion(const UConditionComponent* Other) const;
    
    UFUNCTION(BlueprintCallable)
    void Accumulate(float Value, bool IsGuard);
    
};

