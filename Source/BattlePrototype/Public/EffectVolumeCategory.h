#pragma once
#include "CoreMinimal.h"
#include "EffectVolumeCategory.generated.h"

USTRUCT(BlueprintType)
struct FEffectVolumeCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString volumeCategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Volume;
    
};

