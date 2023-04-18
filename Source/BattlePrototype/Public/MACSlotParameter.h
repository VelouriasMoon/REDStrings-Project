#pragma once
#include "CoreMinimal.h"
#include "MACMaterialParameter.h"
#include "MACSlotParameter.generated.h"

USTRUCT(BlueprintType)
struct FMACSlotParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMACMaterialParameter> MaterialParameter;
    
};

