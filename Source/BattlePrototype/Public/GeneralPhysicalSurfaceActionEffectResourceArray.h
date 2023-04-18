#pragma once
#include "CoreMinimal.h"
#include "GeneralPhysicalSurfaceActionEffectResourceArray.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FGeneralPhysicalSurfaceActionEffectResourceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> ResList;
    
};

