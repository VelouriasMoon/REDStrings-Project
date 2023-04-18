#pragma once
#include "CoreMinimal.h"
#include "HCHitEffectDir.h"
#include "HCHitEffectType.h"
#include "HCHitEffectInfo.generated.h"

USTRUCT(BlueprintType)
struct FHCHitEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    HCHitEffectType effectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    HCHitEffectDir effectDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fixAngle;
    
};

