#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "REDLocalizeTextParam.h"
#include "REDTextBlock.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UREDTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FREDLocalizeTextParam> FontSizeParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FREDLocalizeTextParam DefaultParam;
    
    UREDTextBlock();
};

