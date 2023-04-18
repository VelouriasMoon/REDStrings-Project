#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SoftObjPtrSoundCueSheet.generated.h"

class USoundAtomCueSheet;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FSoftObjPtrSoundCueSheet : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundAtomCueSheet> CueSheet;
    
};

