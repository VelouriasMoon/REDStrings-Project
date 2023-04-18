#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SCAnimationDataAsset.generated.h"

UCLASS(Blueprintable)
class SASCABLEANIM_API USCAnimationDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float blendWeightParts_Divid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float blendWeightParts_Minus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float blendWeightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float blendWeightMinRate;
    
    USCAnimationDataAsset();
};

