#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SoundEffectAttackEmn.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FSoundEffectAttackEmn : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Metal;
    
};

