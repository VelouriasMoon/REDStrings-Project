#pragma once
#include "CoreMinimal.h"
#include "BattleSimulatorAppearEnemyData.h"
#include "BattleSimulatorMissionDetailWaveData.generated.h"

USTRUCT(BlueprintType)
struct FBattleSimulatorMissionDetailWaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleSimulatorAppearEnemyData> EnemyArray;
    
};

