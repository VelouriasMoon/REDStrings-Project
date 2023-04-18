#pragma once
#include "CoreMinimal.h"
#include "PresentCheckArray.generated.h"

USTRUCT(BlueprintType)
struct FPresentCheckArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> boolArray;
    
};

