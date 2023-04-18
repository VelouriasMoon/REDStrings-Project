#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorEnemyBase.h"
#include "EnemyAliveAnimKind.h"
#include "BTD_Enemy_IsAlive_Native.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTD_Enemy_IsAlive_Native : public UBTDecoratorEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyAliveAnimKind EnemyAliveAnimKind;
    
    UBTD_Enemy_IsAlive_Native();
};

