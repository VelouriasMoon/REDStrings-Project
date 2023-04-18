#pragma once
#include "CoreMinimal.h"
#include "BattleSimulatorAppearEnemyData.generated.h"

USTRUCT(BlueprintType)
struct FBattleSimulatorAppearEnemyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EnemyId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AppearCount;
};

