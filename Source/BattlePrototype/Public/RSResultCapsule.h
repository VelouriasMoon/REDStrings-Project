#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "RSResultCapsule.generated.h"

USTRUCT(BlueprintType)
struct FRSResultCapsule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NearPos0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NearPos1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverlapLength;
    
};

