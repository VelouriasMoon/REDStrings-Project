#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "ArrayOfLinearColor.generated.h"

USTRUCT(BlueprintType)
struct FArrayOfLinearColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLinearColor> Value;
};

