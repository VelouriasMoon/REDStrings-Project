#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AutoRecoverComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UAutoRecoverComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _HPRecoverStartSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _HPRecoverSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _autoRecoverHPFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _PPRecoverStartSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _autoRecoverFullPPSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _autoRecoverPPFraction;
    
public:
    UAutoRecoverComponent();
    UFUNCTION(BlueprintCallable)
    void Setup(float hpRecoverSpeed, float hpRecoverStartSec);
    
    UFUNCTION(BlueprintCallable)
    void ProcessAutoRecoverPP(float delataTime, bool enableRecover);
    
    UFUNCTION(BlueprintCallable)
    void ProcessAutoRecoverHP(float delataTime, bool enableRecover);
    
};

