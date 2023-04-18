#pragma once
#include "CoreMinimal.h"
#include "Math/Vector2D.h"
#include "ELanguageTextPattern.h"
#include "REDLocalizeTextParam.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FREDLocalizeTextParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELanguageTextPattern Pattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D RenderTrans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LineHeightPercentage;
    
};

