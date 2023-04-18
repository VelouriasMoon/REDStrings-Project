#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorEnemyBase.h"
#include "GameTimer.h"
#include "BTD_Enemy_IsNotWallHit_Native.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTD_Enemy_IsNotWallHit_Native : public UBTDecoratorEnemyBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float _tmpDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameTimer _tmpGameTimer;
    
public:
    UBTD_Enemy_IsNotWallHit_Native();
};

