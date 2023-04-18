#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ArrangeItemList.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FArrangeItemList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArrangePointId;
};

