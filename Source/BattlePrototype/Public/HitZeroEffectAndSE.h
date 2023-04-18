#pragma once
#include "CoreMinimal.h"
#include "EHitZeroEffectSpawnType.h"
#include "HitZeroEffectAndSE.generated.h"

class UParticleSystem;
class USoundBase;

USTRUCT(BlueprintType)
struct FHitZeroEffectAndSE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* _Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHitZeroEffectSpawnType _effectSpawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* _SE;
    
};

