#pragma once
#include "CoreMinimal.h"
#include "KpiColumn.generated.h"

USTRUCT(BlueprintType)
struct FKpiColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString column;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
};

