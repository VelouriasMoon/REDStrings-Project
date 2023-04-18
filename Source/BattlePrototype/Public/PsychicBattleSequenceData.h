#pragma once
#include "CoreMinimal.h"
#include "PsychicBattleSequenceData.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct FPsychicBattleSequenceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ULevelSequence> SequenceAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WinShotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoseShotName;
    
};

