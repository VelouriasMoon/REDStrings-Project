#pragma once
#include "CoreMinimal.h"
#include "ArrayOfBool.generated.h"

USTRUCT(BlueprintType)
struct FArrayOfBool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> Value;
};

