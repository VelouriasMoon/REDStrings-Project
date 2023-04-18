#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ENpcAnimationKind.h"
#include "AjitoAvailableMotion.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAjitoAvailableMotion : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ENpcAnimationKind> AvailableMotionIds;
    
};

