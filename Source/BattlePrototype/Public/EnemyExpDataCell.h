#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EnemyExpDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FEnemyExpDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Experiences;
    
};

