#pragma once
#include "CoreMinimal.h"
#include "CosmosHugeTssReadListParam.generated.h"

USTRUCT(BlueprintType)
struct FCosmosHugeTssReadListParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Use;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Language;
    
};

