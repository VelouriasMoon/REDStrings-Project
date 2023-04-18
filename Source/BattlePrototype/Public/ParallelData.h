#pragma once
#include "CoreMinimal.h"
#include "ParallelData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FParallelData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UObject>> _ObjectArray;
    
};

