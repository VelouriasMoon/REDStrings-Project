#pragma once
#include "CoreMinimal.h"
#include "BTDecoratorEnemyBase.h"
#include "EnemyMoveAnimKind.h"
#include "BTD_IsMoveAnim_Native.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTD_IsMoveAnim_Native : public UBTDecoratorEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyMoveAnimKind _MoveAnimKind;
    
    UBTD_IsMoveAnim_Native();
};

