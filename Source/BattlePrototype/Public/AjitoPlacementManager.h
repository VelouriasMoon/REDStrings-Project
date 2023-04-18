#pragma once
#include "CoreMinimal.h"
#include "AjitoPlacementInfo.h"
#include "EPlayerID.h"
#include "RSActorSystemBase.h"
#include "AjitoPlacementManager.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API AAjitoPlacementManager : public ARSActorSystemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerID playerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAjitoPlacementInfo> ActorInfos;
    
    AAjitoPlacementManager();
};

