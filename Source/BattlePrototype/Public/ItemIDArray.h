#pragma once
#include "CoreMinimal.h"
#include "ItemIDArray.generated.h"

USTRUCT(BlueprintType)
struct FItemIDArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> idArray;
    
};

