#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorEnemyBase.h"
#include "EnemyDamageAnimKind.h"
#include "BTD_IsEnemyDamageAnimKind_Native.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTD_IsEnemyDamageAnimKind_Native : public UBTDecoratorEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyDamageAnimKind damageKind;
    
    UBTD_IsEnemyDamageAnimKind_Native();
};

