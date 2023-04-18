#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BondsLevelupExpDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FBondsLevelupExpDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ExpList;
};

