#pragma once
#include "CoreMinimal.h"
#include "BondsLevelupExpData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FBondsLevelupExpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ExpList;
};

