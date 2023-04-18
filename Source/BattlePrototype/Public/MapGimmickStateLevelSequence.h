#pragma once
#include "CoreMinimal.h"
#include "MapGimmickStateLevelSequence.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FMapGimmickStateLevelSequence {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelSequence*> LevelSequences;
    
};

