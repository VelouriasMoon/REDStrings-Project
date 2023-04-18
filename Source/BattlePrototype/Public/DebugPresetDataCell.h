#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DebugPresetDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FDebugPresetDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemPreset;
    
};

