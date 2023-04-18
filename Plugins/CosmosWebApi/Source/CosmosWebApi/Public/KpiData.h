#pragma once
#include "CoreMinimal.h"
#include "KpiData.generated.h"

USTRUCT(BlueprintType)
struct FKpiData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> KpiData;
};

