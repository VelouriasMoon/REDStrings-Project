#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PostProcessParam.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UPostProcessParam : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisionFogSeeThroughFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisionFogSeeThroughFogList_em1020;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisionFogSeeThroughFogList_em1200;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisionFogSeeThroughFogList_em1210;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisionFogSeeThroughFogList_em1300;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisionFogSeeThroughFogList_em1400;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisionFogSeeThroughFogList_em8300;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisionFogSeeThroughFogList_np1100;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisionFogSeeThroughFogList_em1130;
    
    UPostProcessParam();
};

