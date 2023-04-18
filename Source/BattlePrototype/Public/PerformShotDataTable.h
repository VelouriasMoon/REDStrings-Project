#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PerformShotData.h"
#include "PerformShotDataTable.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FPerformShotDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerformShotData Setting;
    
};

