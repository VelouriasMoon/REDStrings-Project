#pragma once
#include "CoreMinimal.h"
#include "ASAnimationSetEntry.h"
#include "ASPlayRateSection.h"
#include "ASAnimationSetEntry_Sequence.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FASAnimationSetEntry_Sequence : public FASAnimationSetEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FASPlayRateSection> PlayRate;
};

