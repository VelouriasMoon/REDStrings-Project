#pragma once
#include "CoreMinimal.h"
#include "EBattleSimulatorScenarioClear.h"
#include "BattleSimulatorPostingConditions.generated.h"

USTRUCT(BlueprintType)
struct FBattleSimulatorPostingConditions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> PostingFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> PostingProgressID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSimulatorScenarioClear PostingClearYuito;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSimulatorScenarioClear PostingClearKasane;
};

