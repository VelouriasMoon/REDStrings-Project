#pragma once
#include "CoreMinimal.h"
//-FallbackName=Vector
#include "EPlayerAIMoveWallCPP.h"
#include "PlayerAICheckMoveWallParamResult.generated.h"

USTRUCT(BlueprintType)
struct FPlayerAICheckMoveWallParamResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InActorLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector InMoveDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OutLoc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerAIMoveWallCPP OutWallType;
    
};

