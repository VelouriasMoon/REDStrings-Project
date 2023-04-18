#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DifficultyDamageRate.generated.h"

USTRUCT(BlueprintType)
struct FDifficultyDamageRate : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefenceDamageRate;
    
};

