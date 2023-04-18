#pragma once
#include "CoreMinimal.h"
#include "HCHitResult.h"
#include "PoolHitEffectData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPoolHitEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> HitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHCHitResult HitResult;
    
};

