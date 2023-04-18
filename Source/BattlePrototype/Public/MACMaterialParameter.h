#pragma once
#include "CoreMinimal.h"
#include "MACMaterialParameter.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FMACMaterialParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* Mid;
    
};

