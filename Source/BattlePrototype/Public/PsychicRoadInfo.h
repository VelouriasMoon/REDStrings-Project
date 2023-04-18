#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PsychicRoadStepInfo.h"
#include "PsychicRoadInfo.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FPsychicRoadInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPsychicRoadStepInfo> StepInfos;
    
};

