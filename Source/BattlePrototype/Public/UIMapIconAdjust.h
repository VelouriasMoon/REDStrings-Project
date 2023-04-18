#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "UIMapIconAdjust.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FUIMapIconAdjust {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IconWideArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IconNarrowArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IconDetailMap;
    
};

