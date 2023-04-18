#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorEnemyBase.h"
#include "BTD_IsFlyEnemy_Native.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTD_IsFlyEnemy_Native : public UBTDecoratorEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFlying;
    
    UBTD_IsFlyEnemy_Native();
};

