#pragma once
#include "CoreMinimal.h"
#include "ArrayOfMID.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FArrayOfMID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "General Parameters", meta = (AllowPrivateAccess = true))
    TArray<UMaterialInstanceDynamic*> Value;
};

