#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BrainFieldEnemyLocationWave.generated.h"

UCLASS(Blueprintable)
class BATTLEPROTOTYPE_API ABrainFieldEnemyLocationWave : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocationNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LongAway;
    
    ABrainFieldEnemyLocationWave();
};

