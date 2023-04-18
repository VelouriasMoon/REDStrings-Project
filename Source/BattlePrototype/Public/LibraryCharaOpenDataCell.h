#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LibraryCharaOpenDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FLibraryCharaOpenDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressNo;
    
};

