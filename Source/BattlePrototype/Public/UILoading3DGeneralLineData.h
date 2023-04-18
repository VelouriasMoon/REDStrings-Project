#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "UILoading3DGeneralLineData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FUILoading3DGeneralLineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Translate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Thickness;
    
};

