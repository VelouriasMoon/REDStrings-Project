#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EnemyAssumptionLvPlayerIdData.generated.h"

USTRUCT(BlueprintType)
struct FEnemyAssumptionLvPlayerIdData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MainPlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssumptionLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RelativeLv;
    
};

