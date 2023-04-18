#pragma once
#include "CoreMinimal.h"
#include "HitActorInfoAtPsychic.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FHitActorInfoAtPsychic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HitOtherActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitTime;
    
};

