#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorEnemyBase.h"
#include "Enum_EnemySpawnStateNative.h"
#include "BTD_Enemy_IsSpawnState_Native.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTD_Enemy_IsSpawnState_Native : public UBTDecoratorEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    Enum_EnemySpawnStateNative State;
    
    UBTD_Enemy_IsSpawnState_Native();
};

