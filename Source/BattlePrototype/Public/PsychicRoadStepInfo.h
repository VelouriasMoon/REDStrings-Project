#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PsychicRoadStepInfo.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FPsychicRoadStepInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StopSplineIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToNextStop;
    
};

