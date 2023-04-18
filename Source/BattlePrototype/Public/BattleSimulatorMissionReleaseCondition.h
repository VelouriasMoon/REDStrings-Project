#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BattleSimulatorOrderConditions.h"
#include "BattleSimulatorPostingConditions.h"
#include "EBattleSimulatorPublicationCategory.h"
#include "BattleSimulatorMissionReleaseCondition.generated.h"

USTRUCT(BlueprintType)
struct FBattleSimulatorMissionReleaseCondition : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBattleSimulatorPublicationCategory PublicationCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PublicationOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleSimulatorPostingConditions PostingCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBattleSimulatorOrderConditions OrderConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Enemys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Items;
    
};

