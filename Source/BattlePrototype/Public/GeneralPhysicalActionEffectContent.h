#pragma once
#include "CoreMinimal.h"
#include "GeneralPhysicalActionEffectContent.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FGeneralPhysicalActionEffectContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NotGenerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> ParticleAsset;
    
};

