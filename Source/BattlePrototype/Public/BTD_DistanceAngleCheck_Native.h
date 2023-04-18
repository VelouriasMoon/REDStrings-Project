#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecoratorEnemyBase.h"
#include "BTD_DistanceAngleCheck_Native.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UBTD_DistanceAngleCheck_Native : public UBTDecoratorEnemyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UBTD_DistanceAngleCheck_Native();
};

