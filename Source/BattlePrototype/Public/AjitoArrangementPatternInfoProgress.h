#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AjitoArrangementPatternInfoProgress.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FAjitoArrangementPatternInfoProgress : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StartProgressID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EndProgressID;
    
};

