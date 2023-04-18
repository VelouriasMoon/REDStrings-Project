#pragma once
#include "CoreMinimal.h"
#include "BTDecorator_RSPlayerBase.h"
#include "BTDecorator_RSPlayerCheckDistanceToPlayer.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTDecorator_RSPlayerCheckDistanceToPlayer : public UBTDecorator_RSPlayerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
public:
    UBTDecorator_RSPlayerCheckDistanceToPlayer();
};

