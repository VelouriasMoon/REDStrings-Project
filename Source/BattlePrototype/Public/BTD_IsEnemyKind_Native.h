#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorEnemyBase.h"
#include "EnemyKind.h"
#include "BTD_IsEnemyKind_Native.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTD_IsEnemyKind_Native : public UBTDecoratorEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyKind _EnemyKind;
    
    UBTD_IsEnemyKind_Native();
};

