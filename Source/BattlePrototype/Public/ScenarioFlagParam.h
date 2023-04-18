#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ScenarioFlagParam.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FScenarioFlagParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bitIndex;
    
};

