#pragma once
#include "CoreMinimal.h"
#include "CharacterPhysicalActionEffect.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FCharacterPhysicalActionEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> Actions[15];
    
};

