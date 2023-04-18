#pragma once
#include "CoreMinimal.h"
#include "Particles/Location/ParticleModuleLocationBase.h"
#include "Distributions/DistributionVector.h"
#include "ELocationTrailSource.h"
#include "ParticleModuleLocationTrail.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleLocationTrail : public UParticleModuleLocationBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ELocationTrailSource> SourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WidthSplitNum;
    
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FRawDistributionVector Velocity;
    
    UParticleModuleLocationTrail();
};

