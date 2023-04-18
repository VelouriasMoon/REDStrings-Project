#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "ELanguageTextPattern.h"
#include "REDLocalizeImageParam.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FREDLocalizeImageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELanguageTextPattern Pattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Padding;
    
};

