#pragma once
#include "CoreMinimal.h"
#include "Misc/DateTime.h"
#include "BattleSimulatorSaveResult.h"
#include "HCGameDifficulty.h"
#include "BattlSimulatorSavePersonalParams.generated.h"

USTRUCT(BlueprintType)
struct FBattlSimulatorSavePersonalParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCleared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNew;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime DateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    HCGameDifficulty GameDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleSimulatorSaveResult Result;
};

