#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EPlayerID.h"
#include "KizunaEpisodeCheckInfo.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FKizunaEpisodeCheckInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID playerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID TargetCharacterId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ProgressId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NeedScenarioIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BondsProgressId;
    
};

