#pragma once
#include "CoreMinimal.h"
#include "CharacterPhysicalSurfaceActionEffectResourceArray.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FCharacterPhysicalSurfaceActionEffectResourceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> ResList;
    
};

