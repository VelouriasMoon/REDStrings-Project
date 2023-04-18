#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MaterialStealthParam.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UMaterialStealthParam : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float interpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float delaySec;
    
    UMaterialStealthParam();
};

