#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ArrangeItemListForSaveData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FArrangeItemListForSaveData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ArrangePointId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ArrangeItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RandomArrangeItemVisibleFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Acquired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Accessed;
};

