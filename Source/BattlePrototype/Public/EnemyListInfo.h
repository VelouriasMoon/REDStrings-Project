#pragma once
#include "CoreMinimal.h"
#include "EnemyListInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FEnemyListInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Actors;
    
};

