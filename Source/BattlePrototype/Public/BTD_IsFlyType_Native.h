#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorEnemyBase.h"
#include "BTD_IsFlyType_Native.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTD_IsFlyType_Native : public UBTDecoratorEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFlying;
    
    UBTD_IsFlyType_Native();
};

