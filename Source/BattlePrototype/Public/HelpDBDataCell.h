#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HelpContentData.h"
#include "HelpDBDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FHelpDBDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HelpListMessageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHelpContentData> ContentHelpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HoldDisplayFlag;
    
};

