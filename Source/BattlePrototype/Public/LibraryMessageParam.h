#pragma once
#include "CoreMinimal.h"
#include "ELibraryFlagType.h"
#include "LibraryMessageParam.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FLibraryMessageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELibraryFlagType ChkFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MsgID;
    
};

