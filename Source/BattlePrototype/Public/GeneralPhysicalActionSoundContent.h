#pragma once
#include "CoreMinimal.h"
#include "GeneralPhysicalActionSoundContent.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FGeneralPhysicalActionSoundContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool NotGenerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> SoundAsset;
    
};

