#pragma once
#include "CoreMinimal.h"
#include "SystemData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FSystemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Gold;
    
};

