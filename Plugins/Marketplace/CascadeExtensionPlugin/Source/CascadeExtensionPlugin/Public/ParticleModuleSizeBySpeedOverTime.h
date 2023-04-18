#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Distributions/DistributionVector.h"
#include "AbstractParticleModule.h"
#include "ParticleModuleSizeBySpeedOverTime.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UParticleModuleSizeBySpeedOverTime : public UAbstractParticleModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(meta=(AllowPrivateAccess=true))
    FRawDistributionVector Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvertSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinSize;
    
public:
    UParticleModuleSizeBySpeedOverTime();
};

