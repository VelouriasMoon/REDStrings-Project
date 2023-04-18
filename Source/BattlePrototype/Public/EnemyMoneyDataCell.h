#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EnemyMoneyDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FEnemyMoneyDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Money;
    
};

