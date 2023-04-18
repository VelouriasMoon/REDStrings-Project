#pragma once
#include "CoreMinimal.h"
#include "HitActorInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHitActorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HitOtherActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitTime;
    
};

