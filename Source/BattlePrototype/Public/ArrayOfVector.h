#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "ArrayOfVector.generated.h"

USTRUCT(BlueprintType)
struct FArrayOfVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Value;
};

