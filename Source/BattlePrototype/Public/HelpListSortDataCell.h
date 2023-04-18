#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHelpListCategory.h"
#include "EHelpTutorial.h"
#include "HelpListSortDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FHelpListSortDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHelpListCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHelpTutorial helpID;
    
};

