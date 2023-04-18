#pragma once
#include "CoreMinimal.h"
#include "CosmosSysKpiNo.h"
#include "CosmosSysKpiParam.generated.h"

USTRUCT(BlueprintType)
struct FCosmosSysKpiParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCosmosSysKpiNo> KpiNoList;
    
};

