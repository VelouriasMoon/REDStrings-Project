#pragma once
#include "CoreMinimal.h"
#include "ASAnimationSetEntry.h"
#include "ASAnimationSetEntry_BlendSpace.generated.h"

class UBlendSpaceBase;

USTRUCT(BlueprintType)
struct FASAnimationSetEntry_BlendSpace : public FASAnimationSetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpaceBase* BlendSpace;
};

