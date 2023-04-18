#pragma once
#include "CoreMinimal.h"
#include "ELibraryFlagType.h"
#include "LibraryIntegerParamRaw.generated.h"

USTRUCT(BlueprintType)
struct BATTLEPROTOTYPE_API FLibraryIntegerParamRaw {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELibraryFlagType ChkFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntData;
    
};

