#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PreventDamageMotionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UPreventDamageMotionComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _maxGuardValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _guardRecoverStartSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _recoverGuardPerSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _guardBreakMinSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _guardBreakMaxSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _guardValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _guardReduceCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 _guardBreakCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _guardBreakStartTime;
    
public:
    UPreventDamageMotionComponent();
    UFUNCTION(BlueprintCallable)
    void ResetGuardValue();
    
    UFUNCTION(BlueprintCallable)
    void ReduceGuard(int32 reducedValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGuardBreak() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGuardValue() const;
    
};

