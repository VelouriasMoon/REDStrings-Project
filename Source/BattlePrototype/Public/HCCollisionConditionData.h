#pragma once
#include "CoreMinimal.h"
#include "ConditionKind.h"
#include "HCCollisionConditionData.generated.h"

USTRUCT(BlueprintType)
struct FHCCollisionConditionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ConditionKind kind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
};

