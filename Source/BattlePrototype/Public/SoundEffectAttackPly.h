#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SoundEffectAttackPly.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FSoundEffectAttackPly : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* Normal;
    
};

