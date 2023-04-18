#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AITypes.h"
#include "BTTask_RSNativeBase.generated.h"

class AAIController;

UCLASS(Abstract, Blueprintable)
class BATTLEPROTOTYPE_API UBTTask_RSNativeBase : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* _AIOwner;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FIntervalCountdown TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ReceiveTickImplementations: 1;
    
public:
    UBTTask_RSNativeBase();
};

