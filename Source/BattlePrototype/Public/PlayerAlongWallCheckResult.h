#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "PlayerAlongWallCheckResult.generated.h"

USTRUCT(BlueprintType)
struct FPlayerAlongWallCheckResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsAlongWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InMoveInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OutMoveInput;
    
};

