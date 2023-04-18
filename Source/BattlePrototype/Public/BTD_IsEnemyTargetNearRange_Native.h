#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorEnemyBase.h"
#include "BTD_IsEnemyTargetNearRange_Native.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTD_IsEnemyTargetNearRange_Native : public UBTDecoratorEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NearRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInRange;
    
    UBTD_IsEnemyTargetNearRange_Native();
};

