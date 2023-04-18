#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RSEffectObjectDebris.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FRSEffectObjectDebris : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particle;
    
};

