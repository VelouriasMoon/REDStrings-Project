#pragma once
#include "CoreMinimal.h"
#include "Math/Color.h"
#include "ScarColorParam.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FScarColorParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EmissiveDeep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EmissiveShallowInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EmissiveShallowOutside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor EmissiveWeak;
    
};

