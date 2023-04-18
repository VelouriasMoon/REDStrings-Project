#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HitParticleOne.h"
#include "HitParticle.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FHitParticle : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitParticleOne Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitParticleOne Metal;
    
};

