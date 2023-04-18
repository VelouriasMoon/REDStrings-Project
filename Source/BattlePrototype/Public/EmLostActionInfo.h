#pragma once
#include "CoreMinimal.h"
#include "EnemyActionAnimKind.h"
#include "EmLostActionInfo.generated.h"

USTRUCT(BlueprintType)
struct FEmLostActionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnemyActionAnimKind LostActionKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
};

