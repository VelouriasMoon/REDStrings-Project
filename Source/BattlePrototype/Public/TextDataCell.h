#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TextDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FTextDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString text;
    
};

