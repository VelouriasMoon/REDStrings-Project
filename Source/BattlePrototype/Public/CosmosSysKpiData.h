#pragma once
#include "CoreMinimal.h"
#include "CosmosSysKpiData.generated.h"

USTRUCT(BlueprintType)
struct FCosmosSysKpiData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Data;
    
};

