#pragma once
#include "CoreMinimal.h"
#include "BattleSimulatorReleaseData.h"
#include "BattleSimulatorReleaseDataList.generated.h"

USTRUCT(BlueprintType)
struct FBattleSimulatorReleaseDataList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleSimulatorReleaseData> List;
};

