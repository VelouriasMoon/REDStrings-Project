#pragma once
#include "CoreMinimal.h"
#include "DebugItemPresetParam.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FDebugItemPresetParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
};

