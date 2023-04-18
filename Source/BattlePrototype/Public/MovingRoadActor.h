#pragma once
#include "CoreMinimal.h"
#include "MovingRoadActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMovingRoadActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RoadActor;
    
};

