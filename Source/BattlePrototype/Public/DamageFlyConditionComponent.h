#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "ConditionComponent.h"
#include "DamageFlyConditionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BATTLEPROTOTYPE_API UDamageFlyConditionComponent : public UConditionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _landingSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _recoverableHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector _recoverStartVelocity;
    
public:
    UDamageFlyConditionComponent();
    UFUNCTION(BlueprintCallable)
    void InputRecoverButton();
    
};

