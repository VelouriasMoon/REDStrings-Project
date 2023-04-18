#pragma once
#include "CoreMinimal.h"
#include "CharacterPhysicalActionSound.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FCharacterPhysicalActionSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseOverride;
    
    UPROPERTY(EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCue> Actions[15];
    
};

