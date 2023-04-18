#pragma once
#include "CoreMinimal.h"
#include "UILoading3DScenePlayerData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FUILoading3DScenePlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> DefaultAnimationAsset;
    
};

