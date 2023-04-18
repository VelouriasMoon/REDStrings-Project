#pragma once
#include "CoreMinimal.h"
#include "KpiColumn.h"
#include "KpiData.h"
#include "KpiNoColumnData.generated.h"

USTRUCT(BlueprintType)
struct FKpiNoColumnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 no;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKpiColumn> kpiColumnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKpiData> kpiDataList;
};

