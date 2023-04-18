#pragma once
#include "CoreMinimal.h"
#include "EPlayerID.h"
#include "BondsEpisodeProgressInfo.generated.h"

USTRUCT(BlueprintType)
struct FBondsEpisodeProgressInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID playerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID TargetID;
};

