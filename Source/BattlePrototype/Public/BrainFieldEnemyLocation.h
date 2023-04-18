#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BrainFieldEnemyLocation.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ABrainFieldEnemyLocation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocationNo;
    
    ABrainFieldEnemyLocation();
};

