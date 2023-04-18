#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EnemyRepopInfo.h"
#include "EnemyRepopGroupInfo.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FEnemyRepopGroupInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnemyRepopInfo> RepopInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnbale;
    
};

