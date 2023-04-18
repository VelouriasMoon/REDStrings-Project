#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SoftObjPtrSoundCueSheet.h"
#include "SoundCvCueSheets.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FSoundCvCueSheets : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjPtrSoundCueSheet> CueSheetsJa;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjPtrSoundCueSheet> CueSheetsEn;
    
};

