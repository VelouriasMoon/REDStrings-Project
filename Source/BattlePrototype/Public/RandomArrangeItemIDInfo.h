#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELocationName.h"
#include "RandomArrangeItemIDInfo.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FRandomArrangeItemIDInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELocationName LocationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RandomArrangeItemID;
    
};

