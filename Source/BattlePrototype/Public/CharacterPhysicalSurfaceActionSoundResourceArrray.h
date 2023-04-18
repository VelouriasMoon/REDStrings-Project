#pragma once
#include "CoreMinimal.h"
#include "CharacterPhysicalSurfaceActionSoundResourceArrray.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct FCharacterPhysicalSurfaceActionSoundResourceArrray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundAtomCue*> ResList;
    
};

