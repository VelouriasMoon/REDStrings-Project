#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EventCacheActorHiddenInGameActor.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FEventCacheActorHiddenInGameActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Interp, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> PrimitiveComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<ECollisionEnabled::Type>> PrimitiveCollisions;
    
};

