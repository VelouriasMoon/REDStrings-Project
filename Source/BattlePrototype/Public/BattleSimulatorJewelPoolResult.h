#pragma once
#include "CoreMinimal.h"
#include "BattleSimulatorJewelPoolResult.generated.h"

USTRUCT(BlueprintType)
struct FBattleSimulatorJewelPoolResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JewelPoolKillNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JewelPoolKillTotalNum;
};

