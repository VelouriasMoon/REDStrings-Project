#pragma once
#include "CoreMinimal.h"
#include "CosmosSysKpiColumn.h"
#include "CosmosSysKpiData.h"
#include "CosmosSysKpiNo.generated.h"

USTRUCT(BlueprintType)
struct FCosmosSysKpiNo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 no;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCosmosSysKpiColumn> ColumnList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCosmosSysKpiData> DataList;
    
};

