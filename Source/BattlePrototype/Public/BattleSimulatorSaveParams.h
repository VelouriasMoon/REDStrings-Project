#pragma once
#include "CoreMinimal.h"
#include "BattlSimulatorSavePersonalParams.h"
#include "BattleSimulatorSaveParams.generated.h"

USTRUCT(BlueprintType)
struct FBattleSimulatorSaveParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MissionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattlSimulatorSavePersonalParams YuitoParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattlSimulatorSavePersonalParams KasaneParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KillJewelPoolNumM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KillJewelPoolNumF;
};

