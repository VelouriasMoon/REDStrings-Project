#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ParticleSystemBackGroundParameter.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FParticleSystemBackGroundParameter : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellSize;
    
};

