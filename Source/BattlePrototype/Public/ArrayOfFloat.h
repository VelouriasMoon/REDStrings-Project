#pragma once
#include "CoreMinimal.h"
#include "ArrayOfFloat.generated.h"

USTRUCT(BlueprintType)
struct FArrayOfFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Value;
};

