#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NotifyPlaySoundReplaceParam.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FNotifyPlaySoundReplaceParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ReplaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* ChangeSound;
    
};

