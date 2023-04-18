#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "StaticCameraControlDataParam.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UStaticCameraControlDataParam : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnableEaseInOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EaseInOutExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRotate;
    
    UStaticCameraControlDataParam();
};

