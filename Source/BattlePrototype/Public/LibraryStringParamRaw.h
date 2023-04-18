#pragma once
#include "CoreMinimal.h"
#include "ELibraryFlagType.h"
#include "LibraryStringParamRaw.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FLibraryStringParamRaw {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELibraryFlagType ChkFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StrData;
    
};

