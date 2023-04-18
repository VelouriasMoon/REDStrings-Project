#pragma once
#include "CoreMinimal.h"
#include "ELibraryFlagType.h"
#include "LibraryVoiceParam.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FLibraryVoiceParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELibraryFlagType ChkFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Voice;
    
};

