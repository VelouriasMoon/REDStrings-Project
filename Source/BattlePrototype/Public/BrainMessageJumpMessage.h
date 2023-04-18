#pragma once
#include "CoreMinimal.h"
#include "AreaInfoTweakCondition.h"
#include "BrainMessageJumpMessage.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FBrainMessageJumpMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAreaInfoTweakCondition TweakInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 JumpMessageNum;
};

