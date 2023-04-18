#pragma once
#include "CoreMinimal.h"
#include "GeneralPhysicalSurfaceActionSoundResourceArray.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FGeneralPhysicalSurfaceActionSoundResourceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCue*> ResList;
    
};

