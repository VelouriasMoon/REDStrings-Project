#pragma once
#include "CoreMinimal.h"
#include "SoundCueSheet.generated.h"

class USoundAtomCueSheet;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FSoundCueSheet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheet;
    
};

