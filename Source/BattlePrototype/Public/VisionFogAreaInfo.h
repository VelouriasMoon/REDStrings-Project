#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "VisionFogAreaInfo.generated.h"

USTRUCT(BlueprintType)
struct FVisionFogAreaInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueName;
    
};

