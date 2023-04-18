#pragma once
#include "CoreMinimal.h"
#include "ESoundAisacControlId.h"
#include "ESoundCategory.h"
#include "SoundAisac.generated.h"

USTRUCT(BlueprintType)
struct FSoundAisac {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundCategory category_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundAisacControlId Control_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Control_Value;
    
};

