#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SpecialDamageParticleOne.h"
#include "SpecialDamageParticle.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FSpecialDamageParticle : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialDamageParticleOne Electric;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialDamageParticleOne Fire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialDamageParticleOne Water;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialDamageParticleOne Oil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialDamageParticleOne Confusion;
    
};

