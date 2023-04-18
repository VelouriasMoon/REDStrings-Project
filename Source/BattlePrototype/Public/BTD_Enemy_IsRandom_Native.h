#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorEnemyBase.h"
#include "BTD_Enemy_IsRandom_Native.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTD_Enemy_IsRandom_Native : public UBTDecoratorEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UBTD_Enemy_IsRandom_Native();
};

