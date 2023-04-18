#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AjitoAvailableMotion.h"
#include "AjitoAvailableMotionInPlace.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAjitoAvailableMotionInPlace : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAjitoAvailableMotion> PlaceIds;
    
};

