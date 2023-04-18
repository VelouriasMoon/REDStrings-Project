#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHelpImageDisplayPattern.h"
#include "EHelpImageType.h"
#include "HelpContentData.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FHelpContentData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HelpTitleMessageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HelpCSmessageID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHelpImageType HelpImageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ImagePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHelpImageDisplayPattern HelpImageDisplayPattern;
    
};

