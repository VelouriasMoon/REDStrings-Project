#pragma once
#include "CoreMinimal.h"
#include "RedMouseArgument.generated.h"

USTRUCT(BlueprintType)
struct FRedMouseArgument {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArgumentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArgumentValue;
    
};

