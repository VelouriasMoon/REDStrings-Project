#pragma once
#include "CoreMinimal.h"
#include "HCElementKind.h"
#include "HCCollisionElementData.generated.h"

USTRUCT(BlueprintType)
struct FHCCollisionElementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    HCElementKind kind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
};

