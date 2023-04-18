#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHelpTutorial.h"
#include "MiniHelpRowDataCell.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FMiniHelpRowDataCell : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHelpTutorial helpID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayHelpMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HelpListMessageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TopPriority;
    
};

