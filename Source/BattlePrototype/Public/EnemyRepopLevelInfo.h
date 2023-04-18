#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EnemyRepopGroupInfo.h"
#include "EnemyRepopLevelInfo.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FEnemyRepopLevelInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyRepopGroupInfo> RepopGroupInfoList;
    
};

