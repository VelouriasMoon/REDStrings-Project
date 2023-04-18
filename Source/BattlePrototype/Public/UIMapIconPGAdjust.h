#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "UIMapIconPGAdjust.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FUIMapIconPGAdjust {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IconPGWideArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IconPGNarrowArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IconPGDetailMap;
    
};

