#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorEnemyBase.h"
#include "BTD_Enemy_IsDead_Native.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTD_Enemy_IsDead_Native : public UBTDecoratorEnemyBase {
    GENERATED_BODY()
public:
    UBTD_Enemy_IsDead_Native();
};

