#pragma once
#include "CoreMinimal.h"
#include "BrainFieldWaveEnemyFlag.generated.h"

USTRUCT(BlueprintType)
struct FBrainFieldWaveEnemyFlag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocatioNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LongAway;
};

