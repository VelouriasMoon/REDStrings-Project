#pragma once
#include "CoreMinimal.h"
#include "EventCacheActorHiddenInGameActor.h"
#include "EventCacheActorHiddenInGame.generated.h"

USTRUCT(BlueprintType)
struct FEventCacheActorHiddenInGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<FEventCacheActorHiddenInGameActor> Actors;
    
};

