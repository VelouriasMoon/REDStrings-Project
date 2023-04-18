#pragma once
#include "CoreMinimal.h"
//-FallbackName=Transform
#include "EEnemyCrashVisionEffect.h"
#include "EnemyCrashVisionEffectData.generated.h"

USTRUCT(BlueprintType)
struct FEnemyCrashVisionEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnemyCrashVisionEffect effectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Offset;
    
};

