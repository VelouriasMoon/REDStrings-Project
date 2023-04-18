#pragma once
#include "CoreMinimal.h"
#include "CosmosSysKpiColumn.generated.h"

USTRUCT(BlueprintType)
struct FCosmosSysKpiColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Columun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Type;
    
};

