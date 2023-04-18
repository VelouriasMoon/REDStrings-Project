#pragma once
#include "CoreMinimal.h"
#include "HCCollisionValueKind.h"
#include "HCCollisionValueData.generated.h"

USTRUCT(BlueprintType)
struct FHCCollisionValueData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    HCCollisionValueKind kind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
};

