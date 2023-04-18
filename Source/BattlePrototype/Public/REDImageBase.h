#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "REDLocalizeImageParam.h"
#include "REDImageBase.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API UREDImageBase : public UImage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FREDLocalizeImageParam> LocalizedParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FREDLocalizeImageParam DefaultParam;
    
public:
    UREDImageBase();
};

