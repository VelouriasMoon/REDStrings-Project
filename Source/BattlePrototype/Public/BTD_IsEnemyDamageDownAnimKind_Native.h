#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorEnemyBase.h"
#include "EnemyDamageDownAnimKind.h"
#include "BTD_IsEnemyDamageDownAnimKind_Native.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTD_IsEnemyDamageDownAnimKind_Native : public UBTDecoratorEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyDamageDownAnimKind DamageDownKind;
    
    UBTD_IsEnemyDamageDownAnimKind_Native();
};

