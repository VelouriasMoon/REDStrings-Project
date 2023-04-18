#pragma once
#include "CoreMinimal.h"
#include "ArrayOfInt.generated.h"

USTRUCT(BlueprintType)
struct FArrayOfInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Value;
};

