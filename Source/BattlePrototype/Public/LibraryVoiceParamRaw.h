#pragma once
#include "CoreMinimal.h"
#include "ELibraryFlagType.h"
#include "LibraryVoiceParamRaw.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FLibraryVoiceParamRaw {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELibraryFlagType ChkFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* VoiceData;
    
};

