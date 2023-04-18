#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "BrainCrashSafePoint.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FBrainCrashSafePoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> AllowRotationBits;
};

