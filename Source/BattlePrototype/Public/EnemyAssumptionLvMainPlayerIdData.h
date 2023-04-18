#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPlayerID.h"
#include "EnemyAssumptionLvMainPlayerIdData.generated.h"

USTRUCT(BlueprintType)
struct FEnemyAssumptionLvMainPlayerIdData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID MainPlayerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssumptionLv;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RelativeLv;
    
};

